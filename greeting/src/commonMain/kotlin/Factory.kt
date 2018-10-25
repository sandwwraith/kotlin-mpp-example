package org.greeting

import kotlinx.serialization.Serializable
import kotlinx.serialization.json.JSON

@Serializable
data class Model(val name: String, val version: Int)

expect class Product {
    val user: String
}

expect object Factory {
    fun create(config: Map<String, String>): Product
    val platform: String
}

object CommonFactory {
    fun deserialize(string: String): Model {
        return JSON.parse(Model.serializer(), string)
    }
}

#import <Foundation/Foundation.h>

@class GreetingCalculator, GreetingCalculatorCompanion, GreetingModel, GreetingModelCompanion, GreetingModel$serializer, GreetingProduct, GreetingFactory, GreetingCommonFactory, GreetingPlatform, GreetingGreeting, GreetingKotlinArray, GreetingKotlinx_serialization_runtime_nativeEnumDescriptor, GreetingKotlinx_serialization_runtime_nativeSerialKind, GreetingKotlinNothing, GreetingKotlinx_serialization_runtime_nativeUpdateMode, GreetingKotlinx_serialization_runtime_nativeSerialClassDescImpl, GreetingKotlinEnum;

@protocol GreetingKotlinx_serialization_runtime_nativeKSerializer, GreetingKotlinx_serialization_runtime_nativeSerializationStrategy, GreetingKotlinx_serialization_runtime_nativeEncoder, GreetingKotlinx_serialization_runtime_nativeSerialDescriptor, GreetingKotlinx_serialization_runtime_nativeDeserializationStrategy, GreetingKotlinx_serialization_runtime_nativeDecoder, GreetingKotlinx_serialization_runtime_nativeCompositeEncoder, GreetingKotlinx_serialization_runtime_nativeSerialContext, GreetingKotlinAnnotation, GreetingKotlinx_serialization_runtime_nativeCompositeDecoder, GreetingKotlinIterator, GreetingKotlinx_serialization_runtime_nativeGeneratedSerializer, GreetingKotlinKClass, GreetingKotlinComparable, GreetingKotlinKDeclarationContainer, GreetingKotlinKAnnotatedElement, GreetingKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
__attribute__((swift_name("KotlinMutableSet")))
@interface GreetingMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface GreetingMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface GreetingNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((objc_runtime_name("KotlinByte")))
__attribute__((swift_name("KotlinByte")))
@interface GreetingByte : GreetingNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface GreetingUByte : GreetingNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface GreetingShort : GreetingNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface GreetingUShort : GreetingNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface GreetingInt : GreetingNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface GreetingUInt : GreetingNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface GreetingLong : GreetingNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface GreetingULong : GreetingNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface GreetingFloat : GreetingNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface GreetingDouble : GreetingNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface GreetingBoolean : GreetingNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Calculator")))
@interface GreetingCalculator : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Calculator.Companion")))
@interface GreetingCalculatorCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (int32_t)sumA:(int32_t)a b:(int32_t)b __attribute__((swift_name("sum(a:b:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Model")))
@interface GreetingModel : KotlinBase
- (instancetype)initWithName:(NSString *)name version:(int32_t)version __attribute__((swift_name("init(name:version:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (GreetingModel *)doCopyName:(NSString *)name version:(int32_t)version __attribute__((swift_name("doCopy(name:version:)")));
@property (readonly) NSString *name;
@property (readonly) int32_t version;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Model.Companion")))
@interface GreetingModelCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<GreetingKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerializationStrategy")))
@protocol GreetingKotlinx_serialization_runtime_nativeSerializationStrategy
@required
- (void)serializeOutput:(id<GreetingKotlinx_serialization_runtime_nativeEncoder>)output obj:(id _Nullable)obj __attribute__((swift_name("serialize(output:obj:)")));
@property (readonly) id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor> descriptor;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeDeserializationStrategy")))
@protocol GreetingKotlinx_serialization_runtime_nativeDeserializationStrategy
@required
- (id _Nullable)deserializeInput:(id<GreetingKotlinx_serialization_runtime_nativeDecoder>)input __attribute__((swift_name("deserialize(input:)")));
- (id _Nullable)patchInput:(id<GreetingKotlinx_serialization_runtime_nativeDecoder>)input old:(id _Nullable)old __attribute__((swift_name("patch(input:old:)")));
@property (readonly) id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor> descriptor;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeKSerializer")))
@protocol GreetingKotlinx_serialization_runtime_nativeKSerializer <GreetingKotlinx_serialization_runtime_nativeSerializationStrategy, GreetingKotlinx_serialization_runtime_nativeDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Model.$serializer")))
@interface GreetingModel$serializer : KotlinBase <GreetingKotlinx_serialization_runtime_nativeKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (GreetingModel *)deserializeInput:(id<GreetingKotlinx_serialization_runtime_nativeDecoder>)input __attribute__((swift_name("deserialize(input:)")));
- (GreetingModel *)patchInput:(id<GreetingKotlinx_serialization_runtime_nativeDecoder>)input old:(GreetingModel *)old __attribute__((swift_name("patch(input:old:)")));
- (void)serializeOutput:(id<GreetingKotlinx_serialization_runtime_nativeEncoder>)output obj:(GreetingModel *)obj __attribute__((swift_name("serialize(output:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Product")))
@interface GreetingProduct : KotlinBase
- (instancetype)initWithUser:(NSString *)user __attribute__((swift_name("init(user:)"))) __attribute__((objc_designated_initializer));
- (void)iosSpecificOperation __attribute__((swift_name("iosSpecificOperation()")));
@property (readonly) NSString *model;
@property (readonly) NSString *user;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Factory")))
@interface GreetingFactory : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)factory __attribute__((swift_name("init()")));
- (GreetingProduct *)createConfig:(NSDictionary<NSString *, NSString *> *)config __attribute__((swift_name("create(config:)")));
@property (readonly) NSString *platform;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonFactory")))
@interface GreetingCommonFactory : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)commonFactory __attribute__((swift_name("init()")));
- (GreetingModel *)deserializeString:(NSString *)string __attribute__((swift_name("deserialize(string:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface GreetingPlatform : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *platform;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface GreetingGreeting : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greeting __attribute__((swift_name("greeting()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeEncoder")))
@protocol GreetingKotlinx_serialization_runtime_nativeEncoder
@required
- (id<GreetingKotlinx_serialization_runtime_nativeCompositeEncoder>)beginCollectionDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc collectionSize:(int32_t)collectionSize typeParams:(GreetingKotlinArray *)typeParams __attribute__((swift_name("beginCollection(desc:collectionSize:typeParams:)")));
- (id<GreetingKotlinx_serialization_runtime_nativeCompositeEncoder>)beginStructureDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc typeParams:(GreetingKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescription:(GreetingKotlinx_serialization_runtime_nativeEnumDescriptor *)enumDescription ordinal:(int32_t)ordinal __attribute__((swift_name("encodeEnum(enumDescription:ordinal:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSaver:(id<GreetingKotlinx_serialization_runtime_nativeSerializationStrategy>)saver value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(saver:value:)")));
- (void)encodeSerializableValueSaver:(id<GreetingKotlinx_serialization_runtime_nativeSerializationStrategy>)saver value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(saver:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
- (void)encodeUnit __attribute__((swift_name("encodeUnit()")));
@property (readonly) id<GreetingKotlinx_serialization_runtime_nativeSerialContext> context;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialDescriptor")))
@protocol GreetingKotlinx_serialization_runtime_nativeSerialDescriptor
@required
- (NSArray<id<GreetingKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (NSArray<id<GreetingKotlinAnnotation>> *)getEntityAnnotations __attribute__((swift_name("getEntityAnnotations()")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) int32_t elementsCount;
@property (readonly) BOOL isNullable;
@property (readonly) GreetingKotlinx_serialization_runtime_nativeSerialKind *kind;
@property (readonly) NSString *name;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeDecoder")))
@protocol GreetingKotlinx_serialization_runtime_nativeDecoder
@required
- (id<GreetingKotlinx_serialization_runtime_nativeCompositeDecoder>)beginStructureDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc typeParams:(GreetingKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescription:(GreetingKotlinx_serialization_runtime_nativeEnumDescriptor *)enumDescription __attribute__((swift_name("decodeEnum(enumDescription:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (GreetingKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueLoader:(id<GreetingKotlinx_serialization_runtime_nativeDeserializationStrategy>)loader __attribute__((swift_name("decodeNullableSerializableValue(loader:)")));
- (id _Nullable)decodeSerializableValueLoader:(id<GreetingKotlinx_serialization_runtime_nativeDeserializationStrategy>)loader __attribute__((swift_name("decodeSerializableValue(loader:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (void)decodeUnit __attribute__((swift_name("decodeUnit()")));
- (id _Nullable)updateNullableSerializableValueLoader:(id<GreetingKotlinx_serialization_runtime_nativeDeserializationStrategy>)loader old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableValue(loader:old:)")));
- (id _Nullable)updateSerializableValueLoader:(id<GreetingKotlinx_serialization_runtime_nativeDeserializationStrategy>)loader old:(id _Nullable)old __attribute__((swift_name("updateSerializableValue(loader:old:)")));
@property (readonly) id<GreetingKotlinx_serialization_runtime_nativeSerialContext> context;
@property (readonly) GreetingKotlinx_serialization_runtime_nativeUpdateMode *updateMode;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeCompositeEncoder")))
@protocol GreetingKotlinx_serialization_runtime_nativeCompositeEncoder
@required
- (void)encodeBooleanElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(desc:index:value:)")));
- (void)encodeByteElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(desc:index:value:)")));
- (void)encodeCharElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(desc:index:value:)")));
- (void)encodeDoubleElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(desc:index:value:)")));
- (void)encodeFloatElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(desc:index:value:)")));
- (void)encodeIntElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(desc:index:value:)")));
- (void)encodeLongElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(desc:index:value:)")));
- (void)encodeNonSerializableElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(id)value __attribute__((swift_name("encodeNonSerializableElement(desc:index:value:)")));
- (void)encodeNullableSerializableElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index saver:(id<GreetingKotlinx_serialization_runtime_nativeSerializationStrategy>)saver value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(desc:index:saver:value:)")));
- (void)encodeSerializableElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index saver:(id<GreetingKotlinx_serialization_runtime_nativeSerializationStrategy>)saver value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(desc:index:saver:value:)")));
- (void)encodeShortElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(desc:index:value:)")));
- (void)encodeStringElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(desc:index:value:)")));
- (void)encodeUnitElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("encodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (BOOL)shouldEncodeElementDefaultDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(desc:index:)")));
@property (readonly) id<GreetingKotlinx_serialization_runtime_nativeSerialContext> context;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface GreetingKotlinArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size init:(id _Nullable (^)(GreetingInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (id _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<GreetingKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialClassDescImpl")))
@interface GreetingKotlinx_serialization_runtime_nativeSerialClassDescImpl : KotlinBase <GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>
- (instancetype)initWithName:(NSString *)name generatedSerializer:(id<GreetingKotlinx_serialization_runtime_nativeGeneratedSerializer> _Nullable)generatedSerializer __attribute__((swift_name("init(name:generatedSerializer:)"))) __attribute__((objc_designated_initializer));
- (void)addElementName:(NSString *)name isOptional:(BOOL)isOptional __attribute__((swift_name("addElement(name:isOptional:)")));
- (void)pushAnnotationA:(id<GreetingKotlinAnnotation>)a __attribute__((swift_name("pushAnnotation(a:)")));
- (void)pushClassAnnotationA:(id<GreetingKotlinAnnotation>)a __attribute__((swift_name("pushClassAnnotation(a:)")));
- (void)pushDescriptorDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("pushDescriptor(desc:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeEnumDescriptor")))
@interface GreetingKotlinx_serialization_runtime_nativeEnumDescriptor : GreetingKotlinx_serialization_runtime_nativeSerialClassDescImpl
- (instancetype)initWithName:(NSString *)name choices:(GreetingKotlinArray *)choices __attribute__((swift_name("init(name:choices:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name generatedSerializer:(id<GreetingKotlinx_serialization_runtime_nativeGeneratedSerializer> _Nullable)generatedSerializer __attribute__((swift_name("init(name:generatedSerializer:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialContext")))
@protocol GreetingKotlinx_serialization_runtime_nativeSerialContext
@required
- (id<GreetingKotlinx_serialization_runtime_nativeKSerializer> _Nullable)getKclass:(id<GreetingKotlinKClass>)kclass __attribute__((swift_name("get(kclass:)")));
- (id<GreetingKotlinx_serialization_runtime_nativeKSerializer> _Nullable)getByValueValue:(id)value __attribute__((swift_name("getByValue(value:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol GreetingKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialKind")))
@interface GreetingKotlinx_serialization_runtime_nativeSerialKind : KotlinBase
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeCompositeDecoder")))
@protocol GreetingKotlinx_serialization_runtime_nativeCompositeDecoder
@required
- (BOOL)decodeBooleanElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(desc:index:)")));
- (int8_t)decodeByteElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeByteElement(desc:index:)")));
- (unichar)decodeCharElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeCharElement(desc:index:)")));
- (int32_t)decodeCollectionSizeDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("decodeCollectionSize(desc:)")));
- (double)decodeDoubleElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(desc:index:)")));
- (int32_t)decodeElementIndexDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("decodeElementIndex(desc:)")));
- (float)decodeFloatElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeFloatElement(desc:index:)")));
- (int32_t)decodeIntElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeIntElement(desc:index:)")));
- (int64_t)decodeLongElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeLongElement(desc:index:)")));
- (id _Nullable)decodeNullableSerializableElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index loader:(id<GreetingKotlinx_serialization_runtime_nativeDeserializationStrategy>)loader __attribute__((swift_name("decodeNullableSerializableElement(desc:index:loader:)")));
- (id _Nullable)decodeSerializableElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index loader:(id<GreetingKotlinx_serialization_runtime_nativeDeserializationStrategy>)loader __attribute__((swift_name("decodeSerializableElement(desc:index:loader:)")));
- (int16_t)decodeShortElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeShortElement(desc:index:)")));
- (NSString *)decodeStringElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeStringElement(desc:index:)")));
- (void)decodeUnitElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (id _Nullable)updateNullableSerializableElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index loader:(id<GreetingKotlinx_serialization_runtime_nativeDeserializationStrategy>)loader old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableElement(desc:index:loader:old:)")));
- (id _Nullable)updateSerializableElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index loader:(id<GreetingKotlinx_serialization_runtime_nativeDeserializationStrategy>)loader old:(id _Nullable)old __attribute__((swift_name("updateSerializableElement(desc:index:loader:old:)")));
@property (readonly) id<GreetingKotlinx_serialization_runtime_nativeSerialContext> context;
@property (readonly) GreetingKotlinx_serialization_runtime_nativeUpdateMode *updateMode;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface GreetingKotlinNothing : KotlinBase
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol GreetingKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface GreetingKotlinEnum : KotlinBase <GreetingKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(GreetingKotlinEnum *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) NSString *name;
@property (readonly) int32_t ordinal;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtime_nativeUpdateMode")))
@interface GreetingKotlinx_serialization_runtime_nativeUpdateMode : GreetingKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) GreetingKotlinx_serialization_runtime_nativeUpdateMode *banned;
@property (class, readonly) GreetingKotlinx_serialization_runtime_nativeUpdateMode *overwrite;
@property (class, readonly) GreetingKotlinx_serialization_runtime_nativeUpdateMode *update;
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(GreetingKotlinx_serialization_runtime_nativeUpdateMode *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol GreetingKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeGeneratedSerializer")))
@protocol GreetingKotlinx_serialization_runtime_nativeGeneratedSerializer <GreetingKotlinx_serialization_runtime_nativeKSerializer>
@required
- (GreetingKotlinArray *)childSerializers __attribute__((swift_name("childSerializers()")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol GreetingKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol GreetingKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol GreetingKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol GreetingKotlinKClass <GreetingKotlinKDeclarationContainer, GreetingKotlinKAnnotatedElement, GreetingKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName;
@property (readonly) NSString * _Nullable simpleName;
@end;

NS_ASSUME_NONNULL_END

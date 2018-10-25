//
//  ViewController.swift
//  iosDemo
//
//  Created by jetbrains on 25/10/2018.
//  Copyright © 2018 jetbrains. All rights reserved.
//

import UIKit
import greeting

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        let model = CommonFactory().deserialize(string: """
{"name": "iOS", "version": 1}
""")
        label.text = model.description
        // Do any additional setup after loading the view, typically from a nib.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    @IBOutlet weak var label: UILabel!


}


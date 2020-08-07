//
//  ContentView.swift
//  EsperantoExample
//
//  Created by Alastair Coote on 8/7/20.
//  Copyright © 2020 Alastair Coote. All rights reserved.
//

import SwiftUI
import Esperanto

struct ContentView: View {

    let ctx:JSContext = JSContext()
    let value: JSValue

    init() {
        value = ctx.evaluate(script: """
            ['This value comes','from JavaScript!'].join(' ');
        """)
    }

    var body: some View {
        Text(value.toString())
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}

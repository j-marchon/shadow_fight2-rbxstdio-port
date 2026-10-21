// InControl.InputControl$$.ctor @ RVA 0x34408F8

void InControl_InputControl___ctor
               (InControl_InputControl_o *__this,System_String_o *handle,int32_t target,
               MethodInfo *method)

{
  (__this->fields).Sensitivity = 1.0;
  (__this->fields).UpperDeadZone = 1.0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Handle_k__BackingField = handle;
  thunk_FUN_01c20e04(&__this->fields,handle);
                    /* try { // try from 03540930 to 036409c3 has its CatchHandler @ 03540930
                       catch() { ... } // from try @ 03540930 with catch @ 03540930
                       catch() { ... } // from try @ 03540a00 with catch @ 03540930
                       catch() { ... } // from try @ 03540a34 with catch @ 03540930
                       catch() { ... } // from try @ 03540a64 with catch @ 03540930
                       catch() { ... } // from try @ 03540a94 with catch @ 03540930 */
  (__this->fields)._Target_k__BackingField = target;
  (__this->fields)._IsButton_k__BackingField = target - 0xbU < 4 || target - 0x37U < 0x14;
  return;
}


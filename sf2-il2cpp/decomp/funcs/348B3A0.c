// InControl.InputDevice$$.ctor @ RVA 0x348B3A0

void InControl_InputDevice___ctor
               (InControl_InputDevice_o *__this,System_String_o *name,MethodInfo *method)

{
  System_String_o **ppSVar1;
  InControl_InputControl_array *pIVar2;
  InControl_TwoAxisInputControl_o *pIVar3;
  InControl_TwoAxisInputControl_o **ppIVar4;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0358b2e4 with catch @ 0358b3a4
                        */
                    /* try { // try from 0358b3bc to 0368b3bf has its CatchHandler @ 0358b3e0 */
                    /* try { // try from 0358b3c0 to 0368b3e7 has its CatchHandler @ 0358b1c4 */
  if ((DAT_045683db & 1) == 0) {
                    /* catch() { ... } // from try @ 0358b3bc with catch @ 0358b3e0 */
    FUN_01bab630(&InControl_InputControl___TypeInfo);
                    /* try { // try from 0358b3e8 to 0368b3ef has its CatchHandler @ 0358b404 */
                    /* try { // try from 0358b3f0 to 0368b3fb has its CatchHandler @ 0358b1c4 */
    FUN_01bab630(&InControl_TwoAxisInputControl_TypeInfo);
                    /* try { // try from 0358b3fc to 0368b403 has its CatchHandler @ 0358b404 */
    FUN_01bab630(&StringLiteral_1);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0358b3e8 with catch @ 0358b404
                       catch(type#2 @ 00000000) { ... } // from try @ 0358b3fc with catch @ 0358b404
                        */
    DAT_045683db = 1;
  }
  (__this->fields).SortOrder = 0x7fffffff;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppSVar1 = &(__this->fields)._Name_k__BackingField;
  *ppSVar1 = name;
  thunk_FUN_01c20e04(ppSVar1,name);
  (__this->fields)._Meta_k__BackingField = StringLiteral_1;
  thunk_FUN_01c20e04();
  (__this->fields)._LastChangeTick_k__BackingField = 0;
  pIVar2 = (InControl_InputControl_array *)FUN_01bab718(InControl_InputControl___TypeInfo,0x4c);
  (__this->fields)._Controls_k__BackingField = pIVar2;
  thunk_FUN_01c20e04();
  pIVar3 = (InControl_TwoAxisInputControl_o *)
           thunk_FUN_01bda818(InControl_TwoAxisInputControl_TypeInfo);
  InControl_TwoAxisInputControl___ctor(pIVar3,(MethodInfo *)0x0);
  ppIVar4 = &(__this->fields)._LeftStick_k__BackingField;
  *ppIVar4 = pIVar3;
  thunk_FUN_01c20e04(ppIVar4,pIVar3);
  pIVar3 = (InControl_TwoAxisInputControl_o *)
           thunk_FUN_01bda818(InControl_TwoAxisInputControl_TypeInfo);
  InControl_TwoAxisInputControl___ctor(pIVar3,(MethodInfo *)0x0);
  ppIVar4 = &(__this->fields)._RightStick_k__BackingField;
  *ppIVar4 = pIVar3;
  thunk_FUN_01c20e04(ppIVar4,pIVar3);
  pIVar3 = (InControl_TwoAxisInputControl_o *)
           thunk_FUN_01bda818(InControl_TwoAxisInputControl_TypeInfo);
  InControl_TwoAxisInputControl___ctor(pIVar3,(MethodInfo *)0x0);
  ppIVar4 = &(__this->fields)._DPad_k__BackingField;
  *ppIVar4 = pIVar3;
  thunk_FUN_01c20e04(ppIVar4,pIVar3);
  return;
}


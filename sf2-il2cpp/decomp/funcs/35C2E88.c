// InControl.TwoAxisInputControl$$.ctor @ RVA 0x35C2E88

void InControl_TwoAxisInputControl___ctor
               (InControl_TwoAxisInputControl_o *__this,MethodInfo *method)

{
  InControl_OneAxisInputControl_o *pIVar1;
  InControl_OneAxisInputControl_o **ppIVar2;
  
                    /* catch() { ... } // from try @ 036c2e60 with catch @ 036c2e8c */
                    /* try { // try from 036c2e9c to 037c2ea3 has its CatchHandler @ 036c2eb8 */
                    /* try { // try from 036c2ea4 to 037c2eaf has its CatchHandler @ 036c2d44 */
  if ((DAT_04568f4d & 1) == 0) {
                    /* try { // try from 036c2eb0 to 037c2eb7 has its CatchHandler @ 036c2eb8 */
    FUN_01bab630(&InControl_OneAxisInputControl_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036c2e9c with catch @ 036c2eb8
                       catch(type#2 @ 00000000) { ... } // from try @ 036c2eb0 with catch @ 036c2eb8
                        */
    DAT_04568f4d = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pIVar1 = (InControl_OneAxisInputControl_o *)
           thunk_FUN_01bda818(InControl_OneAxisInputControl_TypeInfo);
                    /* try { // try from 036c2ed0 to 037c2f9f has its CatchHandler @ 036c2ed0
                       catch() { ... } // from try @ 036c2ed0 with catch @ 036c2ed0
                       catch() { ... } // from try @ 036c300c with catch @ 036c2ed0
                       catch() { ... } // from try @ 036c3040 with catch @ 036c2ed0
                       catch() { ... } // from try @ 036c306c with catch @ 036c2ed0
                       catch() { ... } // from try @ 036c309c with catch @ 036c2ed0 */
  InControl_OneAxisInputControl___ctor(pIVar1,(MethodInfo *)0x0);
  ppIVar2 = &(__this->fields)._Left_k__BackingField;
  *ppIVar2 = pIVar1;
  thunk_FUN_01c20e04(ppIVar2,pIVar1);
  pIVar1 = (InControl_OneAxisInputControl_o *)
           thunk_FUN_01bda818(InControl_OneAxisInputControl_TypeInfo);
  InControl_OneAxisInputControl___ctor(pIVar1,(MethodInfo *)0x0);
  ppIVar2 = &(__this->fields)._Right_k__BackingField;
  *ppIVar2 = pIVar1;
  thunk_FUN_01c20e04(ppIVar2,pIVar1);
  pIVar1 = (InControl_OneAxisInputControl_o *)
           thunk_FUN_01bda818(InControl_OneAxisInputControl_TypeInfo);
  InControl_OneAxisInputControl___ctor(pIVar1,(MethodInfo *)0x0);
  ppIVar2 = &(__this->fields)._Up_k__BackingField;
  *ppIVar2 = pIVar1;
  thunk_FUN_01c20e04(ppIVar2,pIVar1);
  pIVar1 = (InControl_OneAxisInputControl_o *)
           thunk_FUN_01bda818(InControl_OneAxisInputControl_TypeInfo);
  InControl_OneAxisInputControl___ctor(pIVar1,(MethodInfo *)0x0);
  ppIVar2 = &(__this->fields)._Down_k__BackingField;
  *ppIVar2 = pIVar1;
  thunk_FUN_01c20e04(ppIVar2,pIVar1);
  return;
}


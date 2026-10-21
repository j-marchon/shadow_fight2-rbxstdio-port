// Nekki.SF2.GUI.Common.HintCanvas$$Awake @ RVA 0x3233B60

void Nekki_SF2_GUI_Common_HintCanvas__Awake
               (Nekki_SF2_GUI_Common_HintCanvas_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  Nekki_SF2_GUI_HintBox_o *pNVar1;
  MethodInfo *extraout_x1;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_HintBox_o **ppNVar3;
  
                    /* try { // try from 03333b74 to 03433b7f has its CatchHandler @ 0333385c */
                    /* try { // try from 03333b80 to 03433b87 has its CatchHandler @ 03333b88 */
  if ((DAT_04566ffc & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03333b0c with catch @ 03333b88
                       catch(type#2 @ 00000000) { ... } // from try @ 03333b80 with catch @ 03333b88
                        */
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<HintBox>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566ffc = 1;
    method = extraout_x1;
  }
  pUVar2 = (__this->fields)._hintBoxPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  pUVar2 = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pUVar2,Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
    parent = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
                    /* try { // try from 03333bfc to 03433ccb has its CatchHandler @ 03333bfc
                       catch() { ... } // from try @ 03333bfc with catch @ 03333bfc
                       catch() { ... } // from try @ 03333cd8 with catch @ 03333bfc
                       catch() { ... } // from try @ 03333d64 with catch @ 03333bfc
                       catch() { ... } // from try @ 03333df4 with catch @ 03333bfc */
      UnityEngine_Transform__SetParent(__this_00,parent,false,(MethodInfo *)0x0);
      pNVar1 = (Nekki_SF2_GUI_HintBox_o *)
               UnityEngine_GameObject__GetComponent<object>
                         (pUVar2,Method_UnityEngine_GameObject_GetComponent<HintBox>__);
      ppNVar3 = &(__this->fields).DMKLEIPIGKO;
      *ppNVar3 = pNVar1;
      thunk_FUN_01c20e04(ppNVar3,pNVar1);
      pNVar1 = *ppNVar3;
      if (pNVar1 != (Nekki_SF2_GUI_HintBox_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03333c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pNVar1->klass->vtable)._4_Init.methodPtr)
                  ((__this->fields)._hintBoxWidth,(__this->fields)._hintBoxHeight,pNVar1,
                   (pNVar1->klass->vtable)._4_Init.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// Nekki.SF2.GUI.Dialogs.Raids.MessageItem$$UpdateContent @ RVA 0x352E304

void Nekki_SF2_GUI_Dialogs_Raids_MessageItem__UpdateContent
               (Nekki_SF2_GUI_Dialogs_Raids_MessageItem_o *__this,ODKDFMHHLIP_o *IHNKCJHDDKD,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Text_o *pUVar2;
  Nekki_SF2_GUI_Dialogs_Raids_MessageItemContent_o *pNVar3;
  
  if ((DAT_04568a3d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568a3d = 1;
  }
  pUVar2 = (__this->fields)._message;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((IHNKCJHDDKD == (ODKDFMHHLIP_o *)0x0) ||
       (pUVar2 = (__this->fields)._message, pUVar2 == (UnityEngine_UI_Text_o *)0x0))
    goto LAB_0362e3e8;
    (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
              (pUVar2,(IHNKCJHDDKD->fields).ABCHAOKFLGL,(pUVar2->klass->vtable)._75_set_text.method)
    ;
  }
  pNVar3 = (__this->fields).JDLPKBDPEBL;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pNVar3 = (__this->fields).JDLPKBDPEBL;
  if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_MessageItemContent_o *)0x0) {
                    /* try { // try from 0362e3cc to 0372e503 has its CatchHandler @ 0362e3cc
                       catch() { ... } // from try @ 0362e3cc with catch @ 0362e3cc
                       catch() { ... } // from try @ 0362e6a8 with catch @ 0362e3cc
                       catch() { ... } // from try @ 0362e6e4 with catch @ 0362e3cc
                       catch() { ... } // from try @ 0362e758 with catch @ 0362e3cc
                       catch() { ... } // from try @ 0362e7b0 with catch @ 0362e3cc
                       catch() { ... } // from try @ 0362e7e8 with catch @ 0362e3cc */
                    /* WARNING: Could not recover jumptable at 0x0362e3d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pNVar3->klass[1]._1.image)(pNVar3,IHNKCJHDDKD,pNVar3->klass[1]._1.gc_desc);
    return;
  }
LAB_0362e3e8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


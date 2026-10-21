// Nekki.SF2.GUI.Tutorial.TutorialNode$$OnDestroy @ RVA 0x32CAA08

void Nekki_SF2_GUI_Tutorial_TutorialNode__OnDestroy
               (Nekki_SF2_GUI_Tutorial_TutorialNode_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_TutorialNode__o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Tutorial_TutorialNode_o *pNVar2;
  
  if ((DAT_04567516 & 1) == 0) {
    FUN_01bab630(&GPEHLCDLNDL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<TutorialNode>_Remove__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567516 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).MKAAKGJNBHI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).MKAAKGJNBHI;
    if ((pNVar2 != (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)0x0) &&
       (__this_00 = (pNVar2->fields).EOIPAPCMGGF,
       __this_00 != (System_Collections_Generic_List_TutorialNode__o *)0x0)) {
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this,
                 Method_System_Collections_Generic_List<TutorialNode>_Remove__);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((GPEHLCDLNDL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  GPEHLCDLNDL__OHJINPLLLIM(__this,(MethodInfo *)0x0);
  return;
}


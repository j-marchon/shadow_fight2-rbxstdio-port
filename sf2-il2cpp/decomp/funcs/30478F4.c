// Nekki.SF2.GUI.Pvp.PlayerMenu$$RefreshControlUI @ RVA 0x30478F4

void Nekki_SF2_GUI_Pvp_PlayerMenu__RefreshControlUI
               (Nekki_SF2_GUI_Pvp_PlayerMenu_o *__this,NLIDHEAMLMC_o *KOPFEMILKAJ,MethodInfo *method
               )

{
  System_Object_array *args;
  Il2CppObject *pIVar1;
  long lVar2;
  UnityEngine_GameObject_o *pUVar3;
  System_String_o *CJNHFNHJHPE;
  undefined8 uVar4;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  int32_t *piVar5;
  int32_t local_4c;
  int32_t local_48;
  int32_t local_44;
  
  if ((DAT_04565df3 & 1) == 0) {
    FUN_01bab630(&ADINBPPGIOA_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_10332);
    DAT_04565df3 = 1;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,3);
  if (KOPFEMILKAJ != (NLIDHEAMLMC_o *)0x0) {
    local_44 = (KOPFEMILKAJ->fields).NJCMGCGNCLJ;
    pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_44);
    if (args != (System_Object_array *)0x0) {
      if ((pIVar1 != (Il2CppObject *)0x0) &&
         (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0)) {
LAB_03147b68:
        uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar4,0);
      }
      if ((int)args->max_length == 0) {
LAB_03147b64:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      args->m_Items[0] = pIVar1;
      thunk_FUN_01c20e04(args->m_Items,pIVar1);
      local_48 = (KOPFEMILKAJ->fields).ELHIGHABJBJ;
      pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(ADINBPPGIOA_TypeInfo,&local_48);
      if ((pIVar1 != (Il2CppObject *)0x0) &&
         (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0))
      goto LAB_03147b68;
      if ((uint)args->max_length < 2) goto LAB_03147b64;
      args->m_Items[1] = pIVar1;
      thunk_FUN_01c20e04(args->m_Items + 1,pIVar1);
      piVar5 = &(KOPFEMILKAJ->fields).OFFPEKODFPE;
      local_4c = *piVar5;
      pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_4c);
      if ((pIVar1 != (Il2CppObject *)0x0) &&
         (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0))
      goto LAB_03147b68;
      if ((uint)args->max_length < 3) goto LAB_03147b64;
      args->m_Items[2] = pIVar1;
      thunk_FUN_01c20e04(args->m_Items + 2,pIVar1);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogFormat(StringLiteral_10332,args,(MethodInfo *)0x0);
      if ((KOPFEMILKAJ->fields).NJCMGCGNCLJ == 0) {
        pUVar3 = (__this->fields)._PlayerOneGamepad;
        if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_03147b60;
        UnityEngine_GameObject__SetActive
                  (pUVar3,(KOPFEMILKAJ->fields).ELHIGHABJBJ == 2,(MethodInfo *)0x0);
        pUVar3 = (__this->fields)._PlayerOneKeyboard;
        if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_03147b60;
                    /* try { // try from 03147b14 to 03247b77 has its CatchHandler @ 03147b14
                       catch() { ... } // from try @ 03147b14 with catch @ 03147b14
                       catch() { ... } // from try @ 03147c54 with catch @ 03147b14
                       catch() { ... } // from try @ 03147ca4 with catch @ 03147b14
                       catch() { ... } // from try @ 03147cf0 with catch @ 03147b14 */
        UnityEngine_GameObject__SetActive
                  (pUVar3,(KOPFEMILKAJ->fields).ELHIGHABJBJ == 1,(MethodInfo *)0x0);
        __this_00 = (__this->fields)._PlayerOneControlIndex;
      }
      else {
        pUVar3 = (__this->fields)._PlayerTwoGamepad;
        if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_03147b60;
        UnityEngine_GameObject__SetActive
                  (pUVar3,(KOPFEMILKAJ->fields).ELHIGHABJBJ == 2,(MethodInfo *)0x0);
        pUVar3 = (__this->fields)._PlayerTwoKeyboard;
        if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_03147b60;
        UnityEngine_GameObject__SetActive
                  (pUVar3,(KOPFEMILKAJ->fields).ELHIGHABJBJ == 1,(MethodInfo *)0x0);
        __this_00 = (__this->fields)._PlayerTwoControlIndex;
      }
      CJNHFNHJHPE = System_Int32__ToString((int32_t)piVar5,(MethodInfo *)0x0);
      if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03147b60:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// Nekki.SF2.GUI.Dialogs.LotteryDialog$$BEENJJPFBOL @ RVA 0x328DAF4

void Nekki_SF2_GUI_Dialogs_LotteryDialog__BEENJJPFBOL
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  KKLJIDJBFEI_o *pKVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *format;
  System_Object_array *args;
  Il2CppObject *pIVar2;
  long lVar3;
  FKDLCJJOGIP_o *pFVar4;
  undefined8 uVar5;
  MethodInfo *method_00;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  
  if ((DAT_045672f3 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_7);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1635);
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    DAT_045672f3 = 1;
  }
  (__this->fields).NJMEPPOGCLN = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).NJMEPPOGCLN,0);
  pKVar1 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if (pKVar1 != (KKLJIDJBFEI_o *)0x0) {
    (__this->fields).GGCLCAMEALI =
         (bool_conflict)((pKVar1->fields).super._KKNAFGJEFJG_k__BackingField ^ 1);
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1635,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_7,(MethodInfo *)0x0);
    format = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
    local_34[0] = (__this->fields).GGCLCAMEALI;
    pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_34);
    if (args != (System_Object_array *)0x0) {
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0))
      goto LAB_0338dde8;
      if ((int)args->max_length == 0) goto LAB_0338dde4;
      args->m_Items[0] = pIVar2;
      thunk_FUN_01c20e04(args->m_Items,pIVar2);
      pKVar1 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      if (pKVar1 == (KKLJIDJBFEI_o *)0x0) goto LAB_0338dde0;
      local_38[0] = (pKVar1->fields).super._KKNAFGJEFJG_k__BackingField;
      pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_38);
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0))
      goto LAB_0338dde8;
      if ((uint)args->max_length < 2) goto LAB_0338dde4;
      args->m_Items[1] = pIVar2;
      thunk_FUN_01c20e04(args->m_Items + 1,pIVar2);
      pKVar1 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      if (pKVar1 == (KKLJIDJBFEI_o *)0x0) goto LAB_0338dde0;
      if ((pKVar1->fields)._CPLKKCAJOJJ_k__BackingField == false) {
        pFVar4 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pFVar4 == (FKDLCJJOGIP_o *)0x0) goto LAB_0338dde0;
        local_44[0] = (pFVar4->fields)._OHFODMIBJME_k__BackingField != false;
      }
      else {
        local_44[0] = true;
      }
      pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_44);
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
LAB_0338dde8:
        uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar5,0);
      }
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = pIVar2;
        thunk_FUN_01c20e04(args->m_Items + 2,pIVar2);
        local_48[0] = IEICNBBBNEJ__EHLKEFJNKPA((MethodInfo *)0x0);
        pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_48);
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0))
        goto LAB_0338dde8;
        if (3 < (uint)args->max_length) {
          args->m_Items[3] = pIVar2;
          thunk_FUN_01c20e04(args->m_Items + 3,pIVar2);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogFormat(format,args,(MethodInfo *)0x0);
          if ((__this->fields).GGCLCAMEALI == false) {
            Nekki_SF2_GUI_Dialogs_LotteryDialog__EAPNENPIION(__this,method_00);
          }
          return;
        }
      }
LAB_0338dde4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
LAB_0338dde0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// GAEHKDPPOBL$$MAHFCKJGBPP @ RVA 0x3072E1C

void GAEHKDPPOBL__MAHFCKJGBPP(GAEHKDPPOBL_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  bool bVar3;
  int32_t iVar4;
  GCIFMNHADDF_o *pGVar5;
  System_Type_o *pSVar6;
  System_String_o *pSVar7;
  System_Collections_Generic_List_BaseDialog__o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04565f8c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseDialog>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseDialog>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseDialog>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseDialog>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_10648);
    FUN_01bab630(&StringLiteral_1377);
    FUN_01bab630(&StringLiteral_16393);
    DAT_04565f8c = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  pGVar5 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pGVar5 != (GCIFMNHADDF_o *)0x0) {
    __this_01 = (pGVar5->fields).IMMJEIGBAAC;
    bVar2 = System_String__op_Equality
                      ((__this->fields).KOGCJJABJHN,StringLiteral_16393,(MethodInfo *)0x0);
    if (__this_01 != (System_Collections_Generic_List_BaseDialog__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<BaseDialog>_GetEnumerator__);
      bVar1 = false;
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._list = local_88.fields._list;
      local_70.fields._current = local_88.fields._current;
      do {
        do {
          bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_70,
                             Method_System_Collections_Generic_List_Enumerator<BaseDialog>_MoveNext__
                            );
          __this_00 = local_70.fields._current;
          if (!bVar3) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<BaseDialog>_Dispose__);
            if ((!bVar1) && ((__this->fields).AMEMBOKNDHB != false)) {
              pSVar7 = System_String__Concat
                                 (StringLiteral_10648,(__this->fields).POCNHBONDGB,(MethodInfo *)0x0
                                 );
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
              }
              UnityEngine_Debug__LogError((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
            }
            goto LAB_03173068;
          }
          if ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)local_70.fields._current ==
              (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar6 = System_Object__GetType(local_70.fields._current,(MethodInfo *)0x0);
          if (pSVar6 == (System_Type_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar7 = (System_String_o *)
                   (*(pSVar6->klass->vtable)._3_ToString.methodPtr)
                             (pSVar6,(pSVar6->klass->vtable)._3_ToString.method);
          if (pSVar7 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar7 = System_String__ToLower(pSVar7,(MethodInfo *)0x0);
          if (pSVar7 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar3 = System_String__Contains(pSVar7,StringLiteral_1377,(MethodInfo *)0x0);
          if (bVar3) {
            iVar4 = System_String__LastIndexOf(pSVar7,StringLiteral_1377,(MethodInfo *)0x0);
            pSVar7 = System_String__Substring(pSVar7,iVar4 + 1,(MethodInfo *)0x0);
          }
          bVar3 = System_String__op_Equality(pSVar7,(__this->fields).KOGCJJABJHN,(MethodInfo *)0x0);
        } while (!bVar2 && !bVar3);
        Nekki_SF2_GUI_Dialogs_BaseDialog__EnableTouchBlock
                  ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this_00,(__this->fields).AMEMBOKNDHB,
                   (MethodInfo *)0x0);
        bVar1 = true;
      } while (bVar2 || (__this->fields).JBLIGNDDFLK != 0);
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<BaseDialog>_Dispose__);
LAB_03173068:
      BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


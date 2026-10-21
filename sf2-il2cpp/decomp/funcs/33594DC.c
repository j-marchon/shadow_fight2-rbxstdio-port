// FMKJPMHJENJ$$MAHFCKJGBPP @ RVA 0x33594DC

void FMKJPMHJENJ__MAHFCKJGBPP(FMKJPMHJENJ_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_DateTime_o OLFIPBLKDAH;
  bool bVar2;
  bool bVar3;
  int64_t CJNHFNHJHPE;
  DNELIPCHKLK_o *__this_00;
  OOMHDDBCBJP_o *BANHBMINMMP;
  OLKPEJMEBPJ_o *pOVar4;
  ACHLOMELAJE_o *pAVar5;
  NLPJLHOEAOE_o *__this_01;
  MEJIKMPNBNL_o *pMVar6;
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this_02;
  long lVar7;
  System_String_o *pSVar8;
  Nekki_SF2_GUI_Map_MapScene_o *__this_03;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  System_DateTime_o local_48;
  
  if ((DAT_04567a52 & 1) == 0) {
    FUN_01bab630(&DNELIPCHKLK_TypeInfo);
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_get_Current__);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    FUN_01bab630(&StringLiteral_4172);
    DAT_04567a52 = 1;
  }
  local_60.fields._current = (Il2CppObject *)0x0;
  local_48.fields._dateData = (System_DateTime_Fields)0;
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  pSVar8 = (__this->fields).OIJNHBIFOAM;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar8 = MFBNFJGBPBB__HAKLDDOPIAF(AAJBIMFNMBB,pSVar8,(MethodInfo *)0x0);
  if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_DateTime_TypeInfo);
  }
  bVar2 = System_DateTime__TryParse(pSVar8,&local_48,(MethodInfo *)0x0);
  OLFIPBLKDAH.fields._dateData = local_48.fields._dateData;
  if (bVar2) {
    if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    CJNHFNHJHPE = Nekki_Utils_GlobalTimer__TotalSeconds(OLFIPBLKDAH,(MethodInfo *)0x0);
  }
  else {
    CJNHFNHJHPE = FPOFDNLHFID__HNIGPBMJJOL((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
  }
  pSVar8 = (__this->fields).BKFBFHHEJMI;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar8 = MFBNFJGBPBB__HAKLDDOPIAF(AAJBIMFNMBB,pSVar8,(MethodInfo *)0x0);
  __this_00 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo);
  DNELIPCHKLK___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (DNELIPCHKLK_o *)0x0) goto LAB_034599b8;
  DNELIPCHKLK__LGOFNFEIKFB(__this_00,pSVar8,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  BANHBMINMMP = NLPJLHOEAOE__JIOEHAPGADN(__this_00,(MethodInfo *)0x0);
  if (BANHBMINMMP == (OOMHDDBCBJP_o *)0x0) {
    pSVar8 = (System_String_o *)
             (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                       (__this_00,(__this_00->klass->vtable)._3_ToString.method);
    pSVar8 = System_String__Concat(StringLiteral_4172,pSVar8,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
    goto LAB_03459990;
  }
  pOVar4 = (BANHBMINMMP->fields).LFJPDELEIHG;
  if (pOVar4 == (OLKPEJMEBPJ_o *)0x0) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar5 == (ACHLOMELAJE_o *)0x0) goto LAB_034599b8;
    ACHLOMELAJE__OIMBEHKPFIC(pAVar5,__this_00,false,true,false,false,0,(MethodInfo *)0x0);
    pOVar4 = (BANHBMINMMP->fields).LFJPDELEIHG;
    if (pOVar4 == (OLKPEJMEBPJ_o *)0x0) goto LAB_034599b8;
  }
  OLKPEJMEBPJ__KCPGEFEMHJB(pOVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar5 != (ACHLOMELAJE_o *)0x0) {
    CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar5,false,(MethodInfo *)0x0);
    __this_01 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_01 != (NLPJLHOEAOE_o *)0x0) {
      NLPJLHOEAOE__FDFHMHPOHKA(__this_01,(MethodInfo *)0x0);
      pOVar4 = (BANHBMINMMP->fields).LFJPDELEIHG;
      if (pOVar4 != (OLKPEJMEBPJ_o *)0x0) {
        bVar2 = OLKPEJMEBPJ__EFLKILFFJKH(pOVar4,(MethodInfo *)0x0);
        if (!bVar2) {
          pSVar8 = (__this_00->fields).GDPFBDIJNHA;
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pMVar6 = NLPJLHOEAOE__KHHBHBLIANB(pSVar8,(MethodInfo *)0x0);
          if (pMVar6 != (MEJIKMPNBNL_o *)0x0) {
            __this_02 = (pMVar6->fields).BDCBJJGNPMC;
            if (__this_02 == (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0)
            goto LAB_034599b8;
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_78,(System_Collections_Generic_List_object__o *)__this_02,
                       Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
            local_60.fields._index = local_78.fields._index;
            local_60.fields._version = local_78.fields._version;
            local_60.fields._list = local_78.fields._list;
            local_60.fields._current = local_78.fields._current;
            while( true ) {
              bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (&local_60,
                                 Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__
                                );
              pIVar1 = local_60.fields._current;
              if (!bVar3) break;
              if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              bVar3 = System_String__op_Equality
                                (local_60.fields._current[1].monitor,(__this_00->fields).GJFJPLHCBKJ
                                 ,(MethodInfo *)0x0);
              if (bVar3) {
                *(undefined1 *)&pIVar1[0xb].klass = 1;
              }
            }
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
          }
        }
        lVar7 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01b81620();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01b81620();
        }
        __this_03 = (Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar7 + 0xb8);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar3) {
          if (__this_03 == (Nekki_SF2_GUI_Map_MapScene_o *)0x0) goto LAB_034599b8;
          Nekki_SF2_GUI_Map_MapScene__ActiveBattleByFightIDS
                    (__this_03,__this_00,(bool)(~bVar2 & 1),true,true,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Map_MapScene__UpdateBattleButtonHidden
                    (__this_03,BANHBMINMMP,(MethodInfo *)0x0);
        }
LAB_03459990:
        BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_034599b8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


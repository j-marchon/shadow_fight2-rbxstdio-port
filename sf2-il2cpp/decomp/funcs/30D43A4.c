// MKIBNAAANPO$$CMHINFFLEDJ @ RVA 0x30D43A4

void MKIBNAAANPO__CMHINFFLEDJ
               (MKIBNAAANPO_o *__this,int32_t AEDJMMHJIEH,bool GEOCJFAJLHD,MethodInfo *method)

{
  Il2CppObject *BHHBEIACGPB;
  bool bVar1;
  System_Collections_Generic_List_MEJIKMPNBNL__o *__this_00;
  ACHLOMELAJE_o *pAVar2;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar3;
  System_String_o *CJNHFNHJHPE;
  MethodInfo *in_x5;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  DNELIPCHKLK_o *local_48;
  
  if ((DAT_0456631e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    FUN_01bab630(&StringLiteral_5623);
    FUN_01bab630(&StringLiteral_15957);
    DAT_0456631e = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  local_48 = (DNELIPCHKLK_o *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE__BLNDKLMBIPN((MethodInfo *)0x0);
  if (__this_00 != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__);
      BHHBEIACGPB = local_70.fields._current;
      if (!bVar1) break;
      bVar1 = MKIBNAAANPO__BHNHPKAALOC((MethodInfo *)(ulong)bVar1);
      MKIBNAAANPO__FMELMDFPPHI
                (__this,(MEJIKMPNBNL_o *)BHHBEIACGPB,bVar1,&local_48,AEDJMMHJIEH,in_x5);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
    if (local_48 == (DNELIPCHKLK_o *)0x0) {
      return;
    }
    if (!GEOCJFAJLHD) {
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
      pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar2 == (ACHLOMELAJE_o *)0x0) goto LAB_031d4608;
      pMVar3 = ACHLOMELAJE__HKIEGNBOFCD(pAVar2,StringLiteral_15957,0,(MethodInfo *)0x0);
      if ((pMVar3 != (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) &&
         (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((pMVar3->fields).JAICMIMBIOA,(MethodInfo *)0x0), !bVar1))
      {
        return;
      }
    }
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
    if (local_48 != (DNELIPCHKLK_o *)0x0) {
      pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      CJNHFNHJHPE = (System_String_o *)
                    (*(local_48->klass->vtable)._3_ToString.methodPtr)
                              (local_48,(local_48->klass->vtable)._3_ToString.method);
      if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
        ACHLOMELAJE__LMJFPPDAPBF(pAVar2,StringLiteral_5623,CJNHFNHJHPE,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_031d4608:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


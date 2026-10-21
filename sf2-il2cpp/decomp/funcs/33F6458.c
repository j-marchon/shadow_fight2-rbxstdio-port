// DEENPPDACAD$$DIGLGKAPOAB @ RVA 0x33F6458

/* WARNING: Removing unreachable block (ram,0x034f6698) */

void DEENPPDACAD__DIGLGKAPOAB(DEENPPDACAD_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_ECENNHNBAME__o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  MDAPDLLMOMF_NHJGACDEAGK_o *pMVar4;
  Il2CppObject *extraout_x1;
  System_Collections_Generic_List_T__o *local_e8 [3];
  System_Collections_Generic_List_T__o *local_d0 [4];
  System_Collections_Generic_List_Enumerator_T__o local_b0;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04567f97 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
    FUN_01bab630(&MDAPDLLMOMF_TypeInfo);
    DAT_04567f97 = 1;
    IMMNELPBGIF = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).super.KOFLFFPDOMO;
  if (__this_01 == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,IMMNELPBGIF);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_b0,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
  local_70.fields._current =
       (Il2CppObject *)CONCAT44(local_b0.fields._current._4_4_,local_b0.fields._current._0_4_);
  local_70.fields._index = local_b0.fields._index;
  local_70.fields._version = local_b0.fields._version;
  local_70.fields._list = local_b0.fields._list;
  do {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__);
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__)
      ;
      return;
    }
    if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (local_70.fields._current[7].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_02 = *(System_Collections_Generic_List_object__o **)
                 ((long)local_70.fields._current[7].monitor + 0x28);
    if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b0,__this_02,
               Method_System_Collections_Generic_List<JADGCGOJLJB>_GetEnumerator__);
    local_90.fields._current =
         (Il2CppObject *)CONCAT44(local_b0.fields._current._4_4_,local_b0.fields._current._0_4_);
    local_90.fields._index = local_b0.fields._index;
    local_90.fields._version = local_b0.fields._version;
    local_90.fields._list = local_b0.fields._list;
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_90,
                              Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_MoveNext__
                             ), __this_00 = local_90.fields._current, bVar2) {
      if ((MDAPDLLMOMF_o *)local_90.fields._current == (MDAPDLLMOMF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar3 = JADGCGOJLJB__NHGGBEACKBD((JADGCGOJLJB_o *)local_90.fields._current,(MethodInfo *)0x0);
      if (iVar3 == 4) {
        bVar1 = (MDAPDLLMOMF_TypeInfo->_2).naturalAligment;
        if (((((MDAPDLLMOMF_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
           ((((MDAPDLLMOMF_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)MDAPDLLMOMF_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(__this_00);
        }
        pMVar4 = MDAPDLLMOMF__BFDKONCCAJB
                           ((MDAPDLLMOMF_o *)__this_00,(__this->fields).super.super.JGJNBILDCHK,
                            (MethodInfo *)0x0);
        if (pMVar4 == (MDAPDLLMOMF_NHJGACDEAGK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (((pMVar4->fields).FPMLNJLCOGA != false) || ((pMVar4->fields).ENADIBNCOMI != false))
        break;
        (pMVar4->fields).FPMLNJLCOGA = true;
        CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                  ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)local_d0,
                   (__this->fields).DCGPDDJFMKE,(MethodInfo *)0x0);
        local_b0.fields._8_8_ = local_d0[1];
        local_b0.fields._list = local_d0[0];
        local_b0.fields._current._0_1_ = local_d0[2]._0_1_;
        local_b0.fields._current._1_1_ = local_d0[2]._1_1_;
        local_b0.fields._current._2_2_ = local_d0[2]._2_2_;
        (pMVar4->fields).JHLJELAKADM.fields.fakeValueActive = local_d0[2]._0_1_;
        (pMVar4->fields).JHLJELAKADM.fields.inited = local_d0[2]._1_1_;
        *(undefined2 *)&(pMVar4->fields).JHLJELAKADM.fields.field_0x12 = local_d0[2]._2_2_;
        *(System_Collections_Generic_List_T__o **)
         &(pMVar4->fields).JHLJELAKADM.fields.hiddenValueOldByte4 = local_d0[1];
        *(System_Collections_Generic_List_T__o **)&(pMVar4->fields).JHLJELAKADM.fields = local_d0[0]
        ;
        (pMVar4->fields).ENADIBNCOMI = true;
        CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                  ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)local_e8,
                   (__this->fields).KIOEADKABMP,(MethodInfo *)0x0);
        local_d0[1] = local_e8[1];
        local_d0[0] = local_e8[0];
        local_d0[2]._0_1_ = local_e8[2]._0_1_;
        local_d0[2]._1_1_ = local_e8[2]._1_1_;
        local_d0[2]._2_2_ = local_e8[2]._2_2_;
        (pMVar4->fields).HKPPIFKAFMP.fields.fakeValueActive = local_e8[2]._0_1_;
        (pMVar4->fields).HKPPIFKAFMP.fields.inited = local_e8[2]._1_1_;
        *(undefined2 *)&(pMVar4->fields).HKPPIFKAFMP.fields.field_0x12 = local_e8[2]._2_2_;
        *(System_Collections_Generic_List_T__o **)
         &(pMVar4->fields).HKPPIFKAFMP.fields.hiddenValueOldByte4 = local_e8[1];
        *(System_Collections_Generic_List_T__o **)&(pMVar4->fields).HKPPIFKAFMP.fields = local_e8[0]
        ;
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_90,Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_Dispose__);
  } while( true );
}


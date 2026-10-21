// TypeDefIndex 2751
// Namespace: 
// public class DEENPPDACAD : COFFJADEMJF
// Fields:
//   public const float IPEGOPCLFID = 1;
//   public const float KGCCDEICMMO = 1;
//   private float DCGPDDJFMKE; // 0x78
//   private float KIOEADKABMP; // 0x7C

// ===== public override void DIGLGKAPOAB(object IMMNELPBGIF)  [RVA 0x33F6458]
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


// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x33F67DC]
// DEENPPDACAD$$HNIHOIAMDPC @ RVA 0x33F67DC

void DEENPPDACAD__HNIHOIAMDPC
               (DEENPPDACAD_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *KGLJICLJHEL;
  System_Collections_Generic_List_ECENNHNBAME__o *KENFFDHLNDA;
  float fVar3;
  
  if ((DAT_04567f98 & 1) == 0) {
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&StringLiteral_6197/*"Factor"*/);
    FUN_01bab630(&StringLiteral_2968/*"Animation"*/);
    FUN_01bab630(&StringLiteral_11233/*"RepeatFactor"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567f98 = 1;
  }
  AJNNHGGLGIF__HNIHOIAMDPC((AJNNHGGLGIF_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_2968/*"Animation"*/,(MethodInfo *)0x0);
      KGLJICLJHEL = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      KENFFDHLNDA = (__this->fields).super.KOFLFFPDOMO;
      if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(LDHBHPILNMA_TypeInfo);
      }
      LDHBHPILNMA__CADFKPKODCI(KGLJICLJHEL,KENFFDHLNDA,(MethodInfo *)0x0);
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_6197/*"Factor"*/,(MethodInfo *)0x0);
        fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,1.0,(MethodInfo *)0x0);
        (__this->fields).DCGPDDJFMKE = fVar3;
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_11233/*"RepeatFactor"*/,(MethodInfo *)0x0);
          fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,1.0,(MethodInfo *)0x0);
          (__this->fields).KIOEADKABMP = fVar3;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void NDNPGAKJLHM()  [RVA 0x33F6954]
// DEENPPDACAD$$NDNPGAKJLHM @ RVA 0x33F6954

/* WARNING: Removing unreachable block (ram,0x034f6b94) */

void DEENPPDACAD__NDNPGAKJLHM(DEENPPDACAD_o *__this,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_ECENNHNBAME__o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  MDAPDLLMOMF_NHJGACDEAGK_o *pMVar4;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_T__o *local_f8 [3];
  System_Collections_Generic_List_T__o *local_e0 [4];
  System_Collections_Generic_List_Enumerator_T__o local_c0;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04567f99 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
    FUN_01bab630(&MDAPDLLMOMF_TypeInfo);
    DAT_04567f99 = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).super.KOFLFFPDOMO;
  if (__this_01 == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_c0,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
  local_80.fields._current =
       (Il2CppObject *)CONCAT44(local_c0.fields._current._4_4_,local_c0.fields._current._0_4_);
  local_80.fields._index = local_c0.fields._index;
  local_80.fields._version = local_c0.fields._version;
  local_80.fields._list = local_c0.fields._list;
  while( true ) {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__);
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__)
      ;
      return;
    }
    if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (local_80.fields._current[7].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_02 = *(System_Collections_Generic_List_object__o **)
                 ((long)local_80.fields._current[7].monitor + 0x28);
    if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) break;
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_c0,__this_02,
               Method_System_Collections_Generic_List<JADGCGOJLJB>_GetEnumerator__);
    local_a0.fields._current =
         (Il2CppObject *)CONCAT44(local_c0.fields._current._4_4_,local_c0.fields._current._0_4_);
    local_a0.fields._index = local_c0.fields._index;
    local_a0.fields._version = local_c0.fields._version;
    local_a0.fields._list = local_c0.fields._list;
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_a0,
                              Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_MoveNext__
                             ), __this_00 = local_a0.fields._current, bVar2) {
      if ((MDAPDLLMOMF_o *)local_a0.fields._current == (MDAPDLLMOMF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar3 = JADGCGOJLJB__NHGGBEACKBD((JADGCGOJLJB_o *)local_a0.fields._current,(MethodInfo *)0x0);
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
        if (((pMVar4->fields).FPMLNJLCOGA != false) || ((pMVar4->fields).ENADIBNCOMI != false)) {
          (pMVar4->fields).FPMLNJLCOGA = false;
          CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)local_e0,1.0,
                     (MethodInfo *)0x0);
          local_c0.fields._8_8_ = local_e0[1];
          local_c0.fields._list = local_e0[0];
          local_c0.fields._current._0_1_ = local_e0[2]._0_1_;
          local_c0.fields._current._1_1_ = local_e0[2]._1_1_;
          local_c0.fields._current._2_2_ = local_e0[2]._2_2_;
          (pMVar4->fields).JHLJELAKADM.fields.fakeValueActive = local_e0[2]._0_1_;
          (pMVar4->fields).JHLJELAKADM.fields.inited = local_e0[2]._1_1_;
          *(undefined2 *)&(pMVar4->fields).JHLJELAKADM.fields.field_0x12 = local_e0[2]._2_2_;
          *(System_Collections_Generic_List_T__o **)
           &(pMVar4->fields).JHLJELAKADM.fields.hiddenValueOldByte4 = local_e0[1];
          *(System_Collections_Generic_List_T__o **)&(pMVar4->fields).JHLJELAKADM.fields =
               local_e0[0];
          (pMVar4->fields).ENADIBNCOMI = false;
          CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)local_f8,1.0,
                     (MethodInfo *)0x0);
          local_e0[1] = local_f8[1];
          local_e0[0] = local_f8[0];
          local_e0[2]._0_1_ = local_f8[2]._0_1_;
          local_e0[2]._1_1_ = local_f8[2]._1_1_;
          local_e0[2]._2_2_ = local_f8[2]._2_2_;
          (pMVar4->fields).HKPPIFKAFMP.fields.fakeValueActive = local_f8[2]._0_1_;
          (pMVar4->fields).HKPPIFKAFMP.fields.inited = local_f8[2]._1_1_;
          *(undefined2 *)&(pMVar4->fields).HKPPIFKAFMP.fields.field_0x12 = local_f8[2]._2_2_;
          *(System_Collections_Generic_List_T__o **)
           &(pMVar4->fields).HKPPIFKAFMP.fields.hiddenValueOldByte4 = local_f8[1];
          *(System_Collections_Generic_List_T__o **)&(pMVar4->fields).HKPPIFKAFMP.fields =
               local_f8[0];
        }
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_a0,Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_Dispose__);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override bool DFBPBPPNIBC(JMIFGHKOLCL LDOOMGABFME)  [RVA 0x33F6CE0]
// DEENPPDACAD$$DFBPBPPNIBC @ RVA 0x33F6CE0

bool DEENPPDACAD__DFBPBPPNIBC(DEENPPDACAD_o *__this,JMIFGHKOLCL_o *LDOOMGABFME,MethodInfo *method)

{
  bool bVar1;
  
  if (LDOOMGABFME != (JMIFGHKOLCL_o *)0x0) {
    bVar1 = COFFJADEMJF__EFLLMOAINGJ
                      ((COFFJADEMJF_o *)__this,(LDOOMGABFME->fields).CLHGGBABJPG,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void DGLJCGNHLIG()  [RVA 0x33F6CFC]
// DEENPPDACAD$$DGLJCGNHLIG @ RVA 0x33F6CFC

void DEENPPDACAD__DGLJCGNHLIG(DEENPPDACAD_o *__this,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0x034f6d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._18_NDNPGAKJLHM.methodPtr)
            (__this,(__this->klass->vtable)._18_NDNPGAKJLHM.method);
  return;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB, HEDFKJBDBFN HEHMPFLAEGE)  [RVA 0x33F6D0C]
// DEENPPDACAD$$.ctor @ RVA 0x33F6D0C

void DEENPPDACAD___ctor(DEENPPDACAD_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t HEHMPFLAEGE,
                       MethodInfo *method)

{
  COFFJADEMJF___ctor((COFFJADEMJF_o *)__this,0xb,HEHMPFLAEGE,AHDGNOJPPIB,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x034f6d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._12_HNIHOIAMDPC.method);
  return;
}


// TypeDefIndex 2410
// Namespace: 
// public class OHDDKGHEEPA : OOMHDDBCBJP
// Fields:
//   public const int HMFDOEEKHOL = 0;
//   public const int JIAPJAMPJNE = 1;
//   public const int BGCGFDAMKBD = 2;
//   private OHDDKGHEEPA.PKBJJBGAIGC OJPLGFNIGBC; // 0xC8
//   private OHDDKGHEEPA.NHCNEOLLGHG <FHGDHAIAPBG>k__BackingField; // 0xD0
//   private int <DNENMENCFFI>k__BackingField; // 0xD8
//   private bool <MHOHOBABBNK>k__BackingField; // 0xDC
//   private bool <PLEKIDHFFPB>k__BackingField; // 0xDD

// ===== public OHDDKGHEEPA.PKBJJBGAIGC ANKGPINLBCD()  [RVA 0x3335E6C]
// OHDDKGHEEPA$$ANKGPINLBCD @ RVA 0x3335E6C

OHDDKGHEEPA_PKBJJBGAIGC_o * OHDDKGHEEPA__ANKGPINLBCD(OHDDKGHEEPA_o *__this,MethodInfo *method)

{
  return (__this->fields).OJPLGFNIGBC;
}


// ===== private void OPCAEOLHCMC(OHDDKGHEEPA.NHCNEOLLGHG CJNHFNHJHPE)  [RVA 0x3335E74]
// OHDDKGHEEPA$$OPCAEOLHCMC @ RVA 0x3335E74

void OHDDKGHEEPA__OPCAEOLHCMC
               (OHDDKGHEEPA_o *__this,OHDDKGHEEPA_NHCNEOLLGHG_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._FHGDHAIAPBG_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public override void RandomizeObscuredVars()  [RVA 0x3335E7C]
// OHDDKGHEEPA$$RandomizeObscuredVars @ RVA 0x3335E7C

void OHDDKGHEEPA__RandomizeObscuredVars(OHDDKGHEEPA_o *__this,MethodInfo *method)

{
  OHDDKGHEEPA_PKBJJBGAIGC_o *__this_00;
  MethodInfo *method_00;
  
  OOMHDDBCBJP__RandomizeObscuredVars((OOMHDDBCBJP_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).OJPLGFNIGBC;
  if (__this_00 != (OHDDKGHEEPA_PKBJJBGAIGC_o *)0x0) {
    OHDDKGHEEPA_PKBJJBGAIGC__RandomizeObscuredVars(__this_00,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public OHDDKGHEEPA.NHCNEOLLGHG GIOKJMMAJCO()  [RVA 0x3336010]
// OHDDKGHEEPA$$GIOKJMMAJCO @ RVA 0x3336010

OHDDKGHEEPA_NHCNEOLLGHG_o * OHDDKGHEEPA__GIOKJMMAJCO(OHDDKGHEEPA_o *__this,MethodInfo *method)

{
  return (__this->fields)._FHGDHAIAPBG_k__BackingField;
}


// ===== protected override FightList PLMHPLMOBIO(XmlNode AHDGNOJPPIB, int DPJIDNBJIBG)  [RVA 0x3336018]
// OHDDKGHEEPA$$PLMHPLMOBIO @ RVA 0x3336018

FightList_o *
OHDDKGHEEPA__PLMHPLMOBIO
          (OHDDKGHEEPA_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t DPJIDNBJIBG,
          MethodInfo *method)

{
  bool_conflict bVar1;
  int32_t ACCIHBHMFPN;
  NLPJLHOEAOE_o *pNVar2;
  CNLGMNIEGFG_o *__this_00;
  
  if ((DAT_0456794d & 1) == 0) {
    FUN_01bab630(&CNLGMNIEGFG_TypeInfo,AHDGNOJPPIB,(ulong)(uint)DPJIDNBJIBG);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456794d = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar2 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pNVar2 != (NLPJLHOEAOE_o *)0x0) {
    bVar1 = (pNVar2->fields).PJLHMJHKJOA;
    pNVar2 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pNVar2 != (NLPJLHOEAOE_o *)0x0) {
      (pNVar2->fields).PJLHMJHKJOA = false;
      __this_00 = (CNLGMNIEGFG_o *)thunk_FUN_01bda818(CNLGMNIEGFG_TypeInfo);
      CNLGMNIEGFG___ctor(__this_00,(MethodInfo *)0x0);
      pNVar2 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
      ACCIHBHMFPN = OOMHDDBCBJP__NHGGBEACKBD((OOMHDDBCBJP_o *)__this,(MethodInfo *)0x0);
      if (pNVar2 != (NLPJLHOEAOE_o *)0x0) {
        NLPJLHOEAOE__GKHEJJOADCD
                  (pNVar2,(FightList_o *)__this_00,AHDGNOJPPIB,ACCIHBHMFPN,
                   (__this->fields).super.CNHHLPPHNCO,(__this->fields).super.EEENDKPCOPF,
                   (OOMHDDBCBJP_o *)__this,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._21_GOLLEBBHEHE.methodPtr)
                  (__this,__this_00,(ulong)(uint)DPJIDNBJIBG,
                   (__this->klass->vtable)._21_GOLLEBBHEHE.method);
        pNVar2 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pNVar2 != (NLPJLHOEAOE_o *)0x0) {
          (pNVar2->fields).PJLHMJHKJOA = bVar1;
          return (FightList_o *)__this_00;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OLDJGDDJMDH(bool CJNHFNHJHPE)  [RVA 0x3336138]
// OHDDKGHEEPA$$OLDJGDDJMDH @ RVA 0x3336138

void OHDDKGHEEPA__OLDJGDDJMDH(OHDDKGHEEPA_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._PLEKIDHFFPB_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private void OMALNDDEMGI(int CJNHFNHJHPE)  [RVA 0x3336144]
// OHDDKGHEEPA$$OMALNDDEMGI @ RVA 0x3336144

void OHDDKGHEEPA__OMALNDDEMGI(OHDDKGHEEPA_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._DNENMENCFFI_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public List<NHPEALHAHOA> MHNPMBLALOJ()  [RVA 0x333614C]
// OHDDKGHEEPA$$MHNPMBLALOJ @ RVA 0x333614C

System_Collections_Generic_List_NHPEALHAHOA__o *
OHDDKGHEEPA__MHNPMBLALOJ(OHDDKGHEEPA_o *__this,MethodInfo *method)

{
  OHDDKGHEEPA_PKBJJBGAIGC_o *pOVar1;
  
  pOVar1 = (__this->fields).OJPLGFNIGBC;
  if (pOVar1 != (OHDDKGHEEPA_PKBJJBGAIGC_o *)0x0) {
    return (pOVar1->fields).FFJAKJDNFAM;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void PEOJNPEINED()  [RVA 0x3336168]
// OHDDKGHEEPA$$PEOJNPEINED @ RVA 0x3336168

void OHDDKGHEEPA__PEOJNPEINED(OHDDKGHEEPA_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  OOMHDDBCBJP__PEOJNPEINED((OOMHDDBCBJP_o *)__this,(MethodInfo *)0x0);
  OHDDKGHEEPA__OHADPGELNKJ(__this,method_00);
  return;
}


// ===== public int DCAKAGILMOF()  [RVA 0x3336374]
// OHDDKGHEEPA$$DCAKAGILMOF @ RVA 0x3336374

int32_t OHDDKGHEEPA__DCAKAGILMOF(OHDDKGHEEPA_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  OHDDKGHEEPA_PKBJJBGAIGC_o *pOVar2;
  
  pOVar2 = (__this->fields).OJPLGFNIGBC;
  if (pOVar2 != (OHDDKGHEEPA_PKBJJBGAIGC_o *)0x0) {
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pOVar2->fields).NLPOCKANMGL.fields,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool NPCLIFPKKNI()  [RVA 0x3336394]
// OHDDKGHEEPA$$NPCLIFPKKNI @ RVA 0x3336394

bool OHDDKGHEEPA__NPCLIFPKKNI(OHDDKGHEEPA_o *__this,MethodInfo *method)

{
  return (__this->fields)._PLEKIDHFFPB_k__BackingField;
}


// ===== public int NLMMJCACKPC()  [RVA 0x333639C]
// OHDDKGHEEPA$$NLMMJCACKPC @ RVA 0x333639C

int32_t OHDDKGHEEPA__NLMMJCACKPC(OHDDKGHEEPA_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  OHDDKGHEEPA_PKBJJBGAIGC_o *pOVar2;
  
  pOVar2 = (__this->fields).OJPLGFNIGBC;
  if (pOVar2 != (OHDDKGHEEPA_PKBJJBGAIGC_o *)0x0) {
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pOVar2->fields).BPAGMAPDNEJ.fields,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GNNDIGOBFOG(bool CJNHFNHJHPE)  [RVA 0x33363BC]
// OHDDKGHEEPA$$GNNDIGOBFOG @ RVA 0x33363BC

void OHDDKGHEEPA__GNNDIGOBFOG(OHDDKGHEEPA_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._MHOHOBABBNK_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public bool MEEIDKJHKKP()  [RVA 0x33363C8]
// OHDDKGHEEPA$$MEEIDKJHKKP @ RVA 0x33363C8

bool OHDDKGHEEPA__MEEIDKJHKKP(OHDDKGHEEPA_o *__this,MethodInfo *method)

{
  return (__this->fields)._MHOHOBABBNK_k__BackingField;
}


// ===== public bool BIFOFLHLABM(int GAEEGJENPLA)  [RVA 0x33363D0]
// OHDDKGHEEPA$$BIFOFLHLABM @ RVA 0x33363D0

bool OHDDKGHEEPA__BIFOFLHLABM(OHDDKGHEEPA_o *__this,int32_t GAEEGJENPLA,MethodInfo *method)

{
  int32_t iVar1;
  OHDDKGHEEPA_PKBJJBGAIGC_o *pOVar2;
  
  pOVar2 = (__this->fields).OJPLGFNIGBC;
  if (pOVar2 != (OHDDKGHEEPA_PKBJJBGAIGC_o *)0x0) {
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pOVar2->fields).LLOOLLFFDKI.fields,(MethodInfo *)0x0);
    return iVar1 <= GAEEGJENPLA;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int MFPFLDMMJII()  [RVA 0x3336400]
// OHDDKGHEEPA$$MFPFLDMMJII @ RVA 0x3336400

int32_t OHDDKGHEEPA__MFPFLDMMJII(OHDDKGHEEPA_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  OHDDKGHEEPA_PKBJJBGAIGC_o *pOVar2;
  
  pOVar2 = (__this->fields).OJPLGFNIGBC;
  if (pOVar2 != (OHDDKGHEEPA_PKBJJBGAIGC_o *)0x0) {
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pOVar2->fields).LLNNLGDGJHE.fields,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int EOIPNAEIIJJ()  [RVA 0x3336420]
// OHDDKGHEEPA$$EOIPNAEIIJJ @ RVA 0x3336420

int32_t OHDDKGHEEPA__EOIPNAEIIJJ(OHDDKGHEEPA_o *__this,MethodInfo *method)

{
  return (__this->fields)._DNENMENCFFI_k__BackingField;
}


// ===== public void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x3336428]
// OHDDKGHEEPA$$HNIHOIAMDPC @ RVA 0x3336428

void OHDDKGHEEPA__HNIHOIAMDPC
               (OHDDKGHEEPA_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_Xml_XmlNode_o *pSVar5;
  OHDDKGHEEPA_NHCNEOLLGHG_o *__this_00;
  MethodInfo *pMVar6;
  OHDDKGHEEPA_PKBJJBGAIGC_o *__this_01;
  OHDDKGHEEPA_NHCNEOLLGHG_o **ppOVar7;
  
  if ((DAT_0456794e & 1) == 0) {
    FUN_01bab630(&OHDDKGHEEPA_NHCNEOLLGHG_TypeInfo);
    FUN_01bab630(&StringLiteral_8580/*"LobbyRaidInfo"*/);
    FUN_01bab630(&StringLiteral_10933/*"RaidMode"*/);
    FUN_01bab630(&StringLiteral_5253/*"DefaultHide"*/);
    FUN_01bab630(&StringLiteral_10837/*"RaidData"*/);
    FUN_01bab630(&StringLiteral_2751/*"AdSkipFightCooldown"*/);
    DAT_0456794e = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_10933/*"RaidMode"*/,(MethodInfo *)0x0);
      iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
      (__this->fields)._DNENMENCFFI_k__BackingField = iVar2;
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_5253/*"DefaultHide"*/,(MethodInfo *)0x0);
        bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
        (__this->fields)._MHOHOBABBNK_k__BackingField = bVar1;
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_2751/*"AdSkipFightCooldown"*/,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
          (__this->fields)._PLEKIDHFFPB_k__BackingField = bVar1;
          pMVar6 = (AHDGNOJPPIB->klass->vtable)._51_get_Item.method;
          pSVar5 = (System_Xml_XmlNode_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                             (AHDGNOJPPIB,StringLiteral_10837/*"RaidData"*/);
          __this_01 = (__this->fields).OJPLGFNIGBC;
          if (__this_01 != (OHDDKGHEEPA_PKBJJBGAIGC_o *)0x0) {
            OHDDKGHEEPA_PKBJJBGAIGC__HNIHOIAMDPC(__this_01,pSVar5,pMVar6);
            pMVar6 = (AHDGNOJPPIB->klass->vtable)._51_get_Item.method;
            pSVar5 = (System_Xml_XmlNode_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                               (AHDGNOJPPIB,StringLiteral_8580/*"LobbyRaidInfo"*/);
            if (pSVar5 != (System_Xml_XmlNode_o *)0x0) {
              __this_00 = (OHDDKGHEEPA_NHCNEOLLGHG_o *)
                          thunk_FUN_01bda818(OHDDKGHEEPA_NHCNEOLLGHG_TypeInfo);
              OHDDKGHEEPA_NHCNEOLLGHG___ctor(__this_00,pSVar5,pMVar6);
              ppOVar7 = &(__this->fields)._FHGDHAIAPBG_k__BackingField;
              *ppOVar7 = __this_00;
              thunk_FUN_01c20e04(ppOVar7,__this_00);
              return;
            }
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CDBFOAFMDML(XmlNode AHDGNOJPPIB)  [RVA 0x33365F4]
// OHDDKGHEEPA$$CDBFOAFMDML @ RVA 0x33365F4

void OHDDKGHEEPA__CDBFOAFMDML
               (OHDDKGHEEPA_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  OHDDKGHEEPA_PKBJJBGAIGC_o *__this_00;
  
  __this_00 = (__this->fields).OJPLGFNIGBC;
  if (__this_00 != (OHDDKGHEEPA_PKBJJBGAIGC_o *)0x0) {
    OHDDKGHEEPA_PKBJJBGAIGC__HNIHOIAMDPC(__this_00,AHDGNOJPPIB,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OHADPGELNKJ()  [RVA 0x3336184]
// OHDDKGHEEPA$$OHADPGELNKJ @ RVA 0x3336184

void OHDDKGHEEPA__OHADPGELNKJ(OHDDKGHEEPA_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_List_AFFHKININGD__o *__this_01;
  System_Collections_Generic_List_T__o *CJNHFNHJHPE;
  FPLOLKHJIAF_o *__this_02;
  undefined8 uVar2;
  MethodInfo *method_00;
  OHDDKGHEEPA_PKBJJBGAIGC_o *pOVar3;
  FPLOLKHJIAF_o *GOAHBPBJCKC;
  undefined1 auVar4 [16];
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_0456794f & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<NIAFDKHDBMA>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FightList>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FightList>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FightList>_get_Current__);
    FUN_01bab630(&FPLOLKHJIAF_TypeInfo);
    auVar4 = FUN_01bab630(&Method_System_Collections_Generic_List<FightList>_GetEnumerator__);
    DAT_0456794f = 1;
  }
  uVar2 = auVar4._0_8_;
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  pOVar3 = (__this->fields).OJPLGFNIGBC;
  if (pOVar3 != (OHDDKGHEEPA_PKBJJBGAIGC_o *)0x0) {
    if ((pOVar3->fields).KMANGLPAOJM != (FPLOLKHJIAF_o *)0x0) {
      __this_01 = (__this->fields).super.HDDNEKLMLMF;
      uVar2 = 0;
      if (__this_01 == (System_Collections_Generic_List_AFFHKININGD__o *)0x0) goto LAB_034362f8;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<FightList>_GetEnumerator__);
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._list = local_88.fields._list;
      local_70.fields._current = local_88.fields._current;
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_70,
                           Method_System_Collections_Generic_List_Enumerator<FightList>_MoveNext__
                          );
        __this_00 = local_70.fields._current;
        if (!bVar1) break;
        if ((FightList_o *)local_70.fields._current == (FightList_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        CJNHFNHJHPE = (System_Collections_Generic_List_T__o *)
                      (*(((FightList_c *)(local_70.fields._current)->klass)->vtable).
                        _4_NIKCNPMKAFK.methodPtr)
                                (local_70.fields._current,
                                 (((FightList_c *)(local_70.fields._current)->klass)->vtable).
                                 _4_NIKCNPMKAFK.method);
        bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                          (CJNHFNHJHPE,Method_DJNBJHPDKDP_OBECCOPBADO<NIAFDKHDBMA>__);
        if (bVar1) {
          pOVar3 = (__this->fields).OJPLGFNIGBC;
          if (pOVar3 == (OHDDKGHEEPA_PKBJJBGAIGC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          GOAHBPBJCKC = (pOVar3->fields).KMANGLPAOJM;
          __this_02 = (FPLOLKHJIAF_o *)thunk_FUN_01bda818(FPLOLKHJIAF_TypeInfo);
          method_00 = (MethodInfo *)0x0;
          FPLOLKHJIAF___ctor(__this_02,GOAHBPBJCKC,(MethodInfo *)0x0);
          FightList__ANCGCCEOBAA((FightList_o *)__this_00,(Rule_o *)__this_02,method_00);
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<FightList>_Dispose__)
      ;
    }
    return;
  }
LAB_034362f8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar2,auVar4._8_8_);
}


// ===== public Color LHDLKKJCILP()  [RVA 0x3337570]
// OHDDKGHEEPA$$LHDLKKJCILP @ RVA 0x3337570

UnityEngine_Color_o OHDDKGHEEPA__LHDLKKJCILP(OHDDKGHEEPA_o *__this,MethodInfo *method)

{
  OHDDKGHEEPA_PKBJJBGAIGC_o *pOVar1;
  
  pOVar1 = (__this->fields).OJPLGFNIGBC;
  if (pOVar1 != (OHDDKGHEEPA_PKBJJBGAIGC_o *)0x0) {
    return (UnityEngine_Color_o)(pOVar1->fields).CDHDDNHHJIH.fields;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(string ACCIHBHMFPN, Vector2 BLEOKMIDGIK, string KGLJICLJHEL, string NEJHIEOHMCF, string FNLBOLFNLPP, string ONLOEDAIEOJ, ushort JDIHKNKFJMK, ushort EHEFEIEKHJO, string JCLPIKHEKBB, string JEHFOBHMGJM, string LBKOHHHPNIP, string FNLFDPAJACB, string OAJJFDIDFKC, string JOPFAAGCIOI, bool MENLMNJNMMO)  [RVA 0x3337590]
// OHDDKGHEEPA$$.ctor @ RVA 0x3337590

void OHDDKGHEEPA___ctor(OHDDKGHEEPA_o *__this,System_String_o *ACCIHBHMFPN,
                       UnityEngine_Vector2_o BLEOKMIDGIK,System_String_o *KGLJICLJHEL,
                       System_String_o *NEJHIEOHMCF,System_String_o *FNLBOLFNLPP,
                       System_String_o *ONLOEDAIEOJ,uint16_t JDIHKNKFJMK,uint16_t EHEFEIEKHJO,
                       System_String_o *JCLPIKHEKBB,System_String_o *JEHFOBHMGJM,
                       System_String_o *LBKOHHHPNIP,System_String_o *FNLFDPAJACB,
                       System_String_o *OAJJFDIDFKC,System_String_o *JOPFAAGCIOI,bool MENLMNJNMMO,
                       MethodInfo *method)

{
  OHDDKGHEEPA_PKBJJBGAIGC_o *__this_00;
  FPLOLKHJIAF_o **ppFVar1;
  OHDDKGHEEPA_PKBJJBGAIGC_o **ppOVar2;
  undefined1 auVar3 [16];
  
  if ((DAT_04567950 & 1) == 0) {
    FUN_01bab630(&OHDDKGHEEPA_PKBJJBGAIGC_TypeInfo);
    DAT_04567950 = 1;
  }
  OOMHDDBCBJP___ctor((OOMHDDBCBJP_o *)__this,ACCIHBHMFPN,BLEOKMIDGIK,KGLJICLJHEL,NEJHIEOHMCF,
                     FNLBOLFNLPP,ONLOEDAIEOJ,JDIHKNKFJMK,EHEFEIEKHJO,JCLPIKHEKBB,JEHFOBHMGJM,
                     LBKOHHHPNIP,FNLFDPAJACB,OAJJFDIDFKC,JOPFAAGCIOI,MENLMNJNMMO,
                     (System_String_o *)0x0,(MethodInfo *)0x0);
  auVar3 = thunk_FUN_01bda818(OHDDKGHEEPA_PKBJJBGAIGC_TypeInfo);
  __this_00 = auVar3._0_8_;
  OHDDKGHEEPA_PKBJJBGAIGC___ctor(__this_00,auVar3._8_8_);
  ppOVar2 = &(__this->fields).OJPLGFNIGBC;
  *ppOVar2 = __this_00;
  thunk_FUN_01c20e04(ppOVar2,__this_00);
  if (*ppOVar2 != (OHDDKGHEEPA_PKBJJBGAIGC_o *)0x0) {
    ppFVar1 = &((*ppOVar2)->fields).KMANGLPAOJM;
    *ppFVar1 = (FPLOLKHJIAF_o *)0x0;
    thunk_FUN_01c20e04(ppFVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int GOKIINPLKFL()  [RVA 0x333781C]
// OHDDKGHEEPA$$GOKIINPLKFL @ RVA 0x333781C

int32_t OHDDKGHEEPA__GOKIINPLKFL(OHDDKGHEEPA_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  OHDDKGHEEPA_PKBJJBGAIGC_o *pOVar2;
  
  pOVar2 = (__this->fields).OJPLGFNIGBC;
  if (pOVar2 != (OHDDKGHEEPA_PKBJJBGAIGC_o *)0x0) {
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pOVar2->fields).LLOOLLFFDKI.fields,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public long BKDPJMOCMOI()  [RVA 0x333783C]
// OHDDKGHEEPA$$BKDPJMOCMOI @ RVA 0x333783C

int64_t OHDDKGHEEPA__BKDPJMOCMOI(OHDDKGHEEPA_o *__this,MethodInfo *method)

{
  int64_t iVar1;
  OHDDKGHEEPA_PKBJJBGAIGC_o *pOVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_30;
  
  pOVar2 = (__this->fields).OJPLGFNIGBC;
  if (pOVar2 != (OHDDKGHEEPA_PKBJJBGAIGC_o *)0x0) {
    local_30.fields.hiddenValue = (pOVar2->fields).DLMFBBKAALO.fields.hiddenValue;
    local_30.fields.currentCryptoKey = (pOVar2->fields).DLMFBBKAALO.fields.currentCryptoKey;
    local_30.fields.fakeValueActive = (pOVar2->fields).DLMFBBKAALO.fields.fakeValueActive;
    local_30.fields.inited = (pOVar2->fields).DLMFBBKAALO.fields.inited;
    local_30.fields._26_6_ = *(undefined6 *)&(pOVar2->fields).DLMFBBKAALO.fields.field_0x1a;
    local_30.fields.fakeValue = (pOVar2->fields).DLMFBBKAALO.fields.fakeValue;
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_30,(MethodInfo *)0x0)
    ;
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool EPLDDILOPAJ(FightList FBFPLEFCDOK)  [RVA 0x3337870]
// OHDDKGHEEPA$$EPLDDILOPAJ @ RVA 0x3337870

/* WARNING: Removing unreachable block (ram,0x03437adc) */
/* WARNING: Removing unreachable block (ram,0x03437a30) */

bool OHDDKGHEEPA__EPLDDILOPAJ(OHDDKGHEEPA_o *__this,FightList_o *FBFPLEFCDOK,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_object__o *__this_00;
  PlayerData_o *__this_01;
  System_String_o *CJNHFNHJHPE;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04567951 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NIAFDKHDBMA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NIAFDKHDBMA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NIAFDKHDBMA>_get_Current__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>_GetEnumerator__);
    __this = (OHDDKGHEEPA_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Count__);
    DAT_04567951 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  if (FBFPLEFCDOK != (FightList_o *)0x0) {
    __this_00 = (System_Collections_Generic_List_object__o *)
                (*(FBFPLEFCDOK->klass->vtable)._4_NIKCNPMKAFK.methodPtr)
                          (FBFPLEFCDOK,(FBFPLEFCDOK->klass->vtable)._4_NIKCNPMKAFK.method);
    __this = (OHDDKGHEEPA_o *)0x0;
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      if ((__this_00->fields)._size == 0) {
        bVar2 = true;
      }
      else {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_a8,__this_00,
                   Method_System_Collections_Generic_List<NIAFDKHDBMA>_GetEnumerator__);
        local_70.fields._index = local_a8.fields._index;
        local_70.fields._version = local_a8.fields._version;
        local_70.fields._list = local_a8.fields._list;
        local_70.fields._current = local_a8.fields._current;
        do {
          do {
            bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (&local_70,
                               Method_System_Collections_Generic_List_Enumerator<NIAFDKHDBMA>_MoveNext__
                              );
            if (!bVar2) {
              iVar4 = 9;
              goto LAB_03437a80;
            }
            if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            CJNHFNHJHPE = local_70.fields._current[5].monitor;
            bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
          } while (bVar2);
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
          if (__this_01 == (PlayerData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          iVar3 = PlayerData__APFFEAJBAEK(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_a8,__this_00,
                     Method_System_Collections_Generic_List<NIAFDKHDBMA>_GetEnumerator__);
          iVar4 = 0;
          local_90.fields._index = local_a8.fields._index;
          local_90.fields._version = local_a8.fields._version;
          local_90.fields._list = local_a8.fields._list;
          local_90.fields._current = local_a8.fields._current;
          while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                   (&local_90,
                                    Method_System_Collections_Generic_List_Enumerator<NIAFDKHDBMA>_MoveNext__
                                   ), pIVar1 = local_90.fields._current, bVar2) {
            if (local_90.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar2 = System_String__op_Equality
                              (local_90.fields._current[5].monitor,CJNHFNHJHPE,(MethodInfo *)0x0);
            if (bVar2) {
              iVar4 = *(int *)&pIVar1[6].klass + iVar4;
            }
          }
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_90,
                     Method_System_Collections_Generic_List_Enumerator<NIAFDKHDBMA>_Dispose__);
        } while (iVar4 <= iVar3);
        iVar4 = 8;
LAB_03437a80:
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_70,
                   Method_System_Collections_Generic_List_Enumerator<NIAFDKHDBMA>_Dispose__);
        bVar2 = iVar4 != 8;
      }
      return bVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


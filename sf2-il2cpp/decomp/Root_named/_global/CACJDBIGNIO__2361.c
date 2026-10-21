// TypeDefIndex 2361
// Namespace: 
// public class CACJDBIGNIO : LMJFCEPILNI
// Fields:
//   private GameUtils.LGLCMNNLHMI <IMMACMPCAKK>k__BackingField; // 0x60
//   private NILLKLHKLHG <GLNFECDJNJJ>k__BackingField; // 0x68

// ===== public NILLKLHKLHG HFHEMLHFGIO()  [RVA 0x332B32C]
// CACJDBIGNIO$$HFHEMLHFGIO @ RVA 0x332B32C

NILLKLHKLHG_o * CACJDBIGNIO__HFHEMLHFGIO(CACJDBIGNIO_o *__this,MethodInfo *method)

{
  return (__this->fields)._GLNFECDJNJJ_k__BackingField;
}


// ===== public void .ctor(CACJDBIGNIO IBKIPBJJCPG)  [RVA 0x332B334]
// CACJDBIGNIO$$.ctor @ RVA 0x332B334

void CACJDBIGNIO___ctor(CACJDBIGNIO_o *__this,CACJDBIGNIO_o *IBKIPBJJCPG,MethodInfo *method)

{
  NILLKLHKLHG_o **ppNVar1;
  
  LMJFCEPILNI___ctor((LMJFCEPILNI_o *)__this,(LMJFCEPILNI_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (CACJDBIGNIO_o *)0x0) {
    ppNVar1 = &(__this->fields)._GLNFECDJNJJ_k__BackingField;
    *ppNVar1 = (IBKIPBJJCPG->fields)._GLNFECDJNJJ_k__BackingField;
    thunk_FUN_01c20e04(ppNVar1);
    (__this->fields)._IMMACMPCAKK_k__BackingField =
         (IBKIPBJJCPG->fields)._IMMACMPCAKK_k__BackingField;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x332B378]
// CACJDBIGNIO$$.ctor @ RVA 0x332B378

void CACJDBIGNIO___ctor(CACJDBIGNIO_o *__this,MethodInfo *method)

{
  LMJFCEPILNI___ctor((LMJFCEPILNI_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected void IANOHAOGCDB(GameUtils.LGLCMNNLHMI CJNHFNHJHPE)  [RVA 0x332B380]
// CACJDBIGNIO$$IANOHAOGCDB @ RVA 0x332B380

void CACJDBIGNIO__IANOHAOGCDB(CACJDBIGNIO_o *__this,uint8_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._IMMACMPCAKK_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== protected void PKEIEMPPFME(NILLKLHKLHG CJNHFNHJHPE)  [RVA 0x332B388]
// CACJDBIGNIO$$PKEIEMPPFME @ RVA 0x332B388

void CACJDBIGNIO__PKEIEMPPFME(CACJDBIGNIO_o *__this,NILLKLHKLHG_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._GLNFECDJNJJ_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x332B390]
// CACJDBIGNIO$$HNIHOIAMDPC @ RVA 0x332B390

void CACJDBIGNIO__HNIHOIAMDPC
               (CACJDBIGNIO_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *CJNHFNHJHPE;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o *JEIGFGPCGMM;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o *FGLEGAOAEAO;
  NILLKLHKLHG_o *__this_00;
  uint8_t uVar4;
  NILLKLHKLHG_o **ppNVar5;
  
  if ((DAT_045678c6 & 1) == 0) {
    FUN_01bab630(&System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
    FUN_01bab630(&Method_HEFOANCOHDC_BJKIFFGGDEE__);
    FUN_01bab630(&Method_HEFOANCOHDC_GLHBJFHGHLC__);
    FUN_01bab630(&NILLKLHKLHG_TypeInfo);
    FUN_01bab630(&StringLiteral_8030/*"IsRulePerk"*/);
    FUN_01bab630(&StringLiteral_12292/*"Speed"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045678c6 = 1;
  }
  HJNEOLCKEMD__HNIHOIAMDPC((HJNEOLCKEMD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  HJNEOLCKEMD__GNLPNKGBAFL((HJNEOLCKEMD_o *)__this,0x1d,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_8030/*"IsRulePerk"*/,(MethodInfo *)0x0);
      bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,false,(MethodInfo *)0x0);
      if (__this != (CACJDBIGNIO_o *)0x0) {
        ppNVar5 = &(__this->fields)._GLNFECDJNJJ_k__BackingField;
        *ppNVar5 = (NILLKLHKLHG_o *)0x0;
        uVar4 = 1;
        if (!bVar1) {
          uVar4 = 2;
        }
        (__this->fields)._IMMACMPCAKK_k__BackingField = uVar4;
        thunk_FUN_01c20e04(ppNVar5,0);
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_12292/*"Speed"*/,(MethodInfo *)0x0);
          CJNHFNHJHPE = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
          if (bVar1) {
            return;
          }
          JEIGFGPCGMM = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                        thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
          System_Action<object>___ctor();
          FGLEGAOAEAO = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                        thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
          System_Action<object>___ctor();
          __this_00 = (NILLKLHKLHG_o *)thunk_FUN_01bda818(NILLKLHKLHG_TypeInfo);
          NILLKLHKLHG___ctor(__this_00,CJNHFNHJHPE,JEIGFGPCGMM,FGLEGAOAEAO,(Il2CppObject *)__this,
                             (MethodInfo *)0x0);
          (__this->fields)._GLNFECDJNJJ_k__BackingField = __this_00;
          thunk_FUN_01c20e04(ppNVar5,__this_00);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void NCKNNHCEADO(MovesInFightVariables.DOCBHLNBECF CPECAEHDDDB, bool LOPENELMPML)  [RVA 0x332B5A0]
// CACJDBIGNIO$$NCKNNHCEADO @ RVA 0x332B5A0

void CACJDBIGNIO__NCKNNHCEADO
               (CACJDBIGNIO_o *__this,MovesInFightVariables_DOCBHLNBECF_o *CPECAEHDDDB,bool LOPENELMPML,
               MethodInfo *method)

{
  int CJNHFNHJHPE;
  NILLKLHKLHG_o *__this_00;
  MMFIDKMDADC_o *__this_01;
  uint8_t uVar1;
  Model_o *__this_02;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CJNHFNHJHPE_00;
  
  if ((DAT_045678c7 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&StringLiteral_12192/*"Slow value cant be lower then 1"*/);
    DAT_045678c7 = 1;
  }
  if (LOPENELMPML) {
    if (CPECAEHDDDB != (MovesInFightVariables_DOCBHLNBECF_o *)0x0) {
      __this_02 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
      uVar1 = (__this->fields)._IMMACMPCAKK_k__BackingField;
      CJNHFNHJHPE_00 =
           (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(1,(MethodInfo *)0x0);
      if (__this_02 != (Model_o *)0x0) goto LAB_0342b704;
    }
  }
  else {
    __this_00 = (__this->fields)._GLNFECDJNJJ_k__BackingField;
    if (__this_00 == (NILLKLHKLHG_o *)0x0) {
      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      CJNHFNHJHPE = GameUtils__PCJHAMFGJLP((MethodInfo *)0x0);
    }
    else {
      __this_01 = NILLKLHKLHG__CHKGAHCDFJF(__this_00,false,(MethodInfo *)0x0);
      if (__this_01 == (MMFIDKMDADC_o *)0x0) goto LAB_0342b728;
      CJNHFNHJHPE = MMFIDKMDADC__JBGCINPPLAC(__this_01,(MethodInfo *)0x0);
    }
    if (CJNHFNHJHPE < 1) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_12192/*"Slow value cant be lower then 1"*/,(MethodInfo *)0x0);
      return;
    }
    uVar1 = (__this->fields)._IMMACMPCAKK_k__BackingField;
    if (uVar1 == 2) {
      if (CPECAEHDDDB != (MovesInFightVariables_DOCBHLNBECF_o *)0x0) {
        __this_02 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
        CJNHFNHJHPE_00 =
             (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
             CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                       (CJNHFNHJHPE,(MethodInfo *)0x0);
        if (__this_02 != (Model_o *)0x0) {
          uVar1 = 2;
          goto LAB_0342b704;
        }
      }
    }
    else {
      if (uVar1 != 1) {
        return;
      }
      if (CPECAEHDDDB != (MovesInFightVariables_DOCBHLNBECF_o *)0x0) {
        __this_02 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
        CJNHFNHJHPE_00 =
             (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
             CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                       (CJNHFNHJHPE,(MethodInfo *)0x0);
        if (__this_02 != (Model_o *)0x0) {
          uVar1 = 1;
LAB_0342b704:
          Model__OOCCDDNDPPG
                    (__this_02,uVar1,(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)CJNHFNHJHPE_00
                     ,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0342b728:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public GameUtils.LGLCMNNLHMI OKJCLKJAELJ()  [RVA 0x332B72C]
// CACJDBIGNIO$$OKJCLKJAELJ @ RVA 0x332B72C

uint8_t CACJDBIGNIO__OKJCLKJAELJ(CACJDBIGNIO_o *__this,MethodInfo *method)

{
  return (__this->fields)._IMMACMPCAKK_k__BackingField;
}


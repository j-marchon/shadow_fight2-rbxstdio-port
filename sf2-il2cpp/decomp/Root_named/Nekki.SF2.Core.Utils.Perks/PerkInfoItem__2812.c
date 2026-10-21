// Original name: Nekki.SF2.Core.Utils.Perks.PerkInfoItem  (obfuscated HEFOANCOHDC)
// TypeDefIndex 2812
// Namespace: 
// public class PerkInfoItem
// Fields:
//   private const float FODPONFEBFH = 0.7;
//   private const float DDIHIIKBHEL = 46;
//   public ObscuredBool ICCBEPAFBFI; // 0x10
//   public ObscuredBool HHDBIGKBMEC; // 0x1C
//   private XmlDocument DHNEDFGMFGM; // 0x28
//   private XmlNode DCDJOJGHJEB; // 0x30
//   public string KPDPJONADPJ; // 0x38
//   public string JIJLBFGKNJK; // 0x40
//   public string BPCADJLKKGA; // 0x48
//   public string JMGIACHBIKG; // 0x50
//   public string FFDAPDCFBDO; // 0x58
//   public string EHLKHAKJGGH; // 0x60
//   public string JJONOCGMEMK; // 0x68
//   public string AKBDHOEGNNG; // 0x70
//   public int AEIJFFBOBCP; // 0x78
//   private ObscuredInt <MDAJFAPLLOH>k__BackingField; // 0x7C
//   public ObscuredInt NOPGBJNLFHM; // 0x8C
//   public ObscuredInt EAGEGPKAEKI; // 0x9C
//   public ObscuredInt EMLGCOFGNKH; // 0xAC
//   public ObscuredBool CHLMHEGKKNH; // 0xBC
//   public ObscuredBool JFMAEFOHLDF; // 0xC8
//   public PerkInfoItem.JIDALCNODNB OCABLLPNEGL; // 0xD4
//   private Model <BGCNGEAHHFN>k__BackingField; // 0xD8
//   public FPLCEOJCPOD ACHJNNOKEDK; // 0xE0
//   public List<ACCKJOAAEKB> NLHLDLBGAKK; // 0xE8
//   private readonly Dictionary<string, ObscuredString> NBOMAJCMIIL; // 0xF0
//   private readonly List<string> FMFKGEJLDGO; // 0xF8
//   private readonly List<NJPBBPOABKP> EMNOFACFIBF; // 0x100
//   private static readonly Dictionary<string, PerkInfoItem.BLLOEEDBDEO> MHONJANODKB; // 0x0

// ===== private void GOJPPGEGLBM(Model BCKBBGCOMJD, NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, HDBNGIBFEBA LOFMIFGLIKN, MMFIDKMDADC HPACPFLKHPK)  [RVA 0x341A610]
// PerkInfoItem$$GOJPPGEGLBM @ RVA 0x341A610

void PerkInfoItem__GOJPPGEGLBM
               (PerkInfoItem_o *__this,Model_o *BCKBBGCOMJD,
               NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,HDBNGIBFEBA_o *LOFMIFGLIKN,
               MMFIDKMDADC_o *HPACPFLKHPK,MethodInfo *method)

{
  System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *pSVar1;
  NILLKLHKLHG_DIPIFJPCFOE_o *pNVar2;
  System_String_o *pSVar3;
  System_String_o *FOBBLEELKOM;
  System_String_o *JNBKCMLPDAE;
  DistancePoint_o *__this_00;
  ModelObject_o *pGVar4;
  ModelNode_o *pIVar5;
  int iVar6;
  Vector3f_o *pCVar7;
  Model_o *pOVar8;
  float extraout_s0;
  float __this_01;
  float local_34;
  
  if ((DAT_045680c5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    FUN_01bab630(&DistancePoint_TypeInfo);
    FUN_01bab630(&StringLiteral_1324/*"-10000"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045680c5 = 1;
  }
  if ((ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) ||
     (pSVar1 = (ACCIJLGMHOO->fields).EEFPBGNAFFI,
     pSVar1 == (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0))
  goto LAB_0351a848;
  pSVar3 = StringLiteral_1324/*"-10000"*/;
  if (1 < (pSVar1->fields)._size) {
    pNVar2 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar1,0,
                        Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    if (pNVar2 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0) goto LAB_0351a848;
    pSVar3 = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(pNVar2,(MethodInfo *)0x0);
    pSVar1 = (ACCIJLGMHOO->fields).EEFPBGNAFFI;
    if ((pSVar1 == (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0) ||
       (pNVar2 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,1,
                            Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__
                           ), pNVar2 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0)) goto LAB_0351a848;
    FOBBLEELKOM = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(pNVar2,(MethodInfo *)0x0);
    pSVar1 = (ACCIJLGMHOO->fields).EEFPBGNAFFI;
    if (pSVar1 == (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0)
    goto LAB_0351a848;
    JNBKCMLPDAE = StringLiteral_1/*""*/;
    if (2 < (pSVar1->fields)._size) {
      pNVar2 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,2,
                          Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__
                         );
      if (pNVar2 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0) goto LAB_0351a848;
      JNBKCMLPDAE = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(pNVar2,(MethodInfo *)0x0);
    }
    __this_00 = (DistancePoint_o *)thunk_FUN_01bda818(DistancePoint_TypeInfo);
    DistancePoint___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 == (DistancePoint_o *)0x0) goto LAB_0351a848;
    DistancePoint__EOHMFJFFFIN(__this_00,pSVar3,FOBBLEELKOM,JNBKCMLPDAE,(MethodInfo *)0x0);
    local_34 = 0.0;
    if ((__this_00->fields).AKBDFFLEINL == 1) {
      iVar6 = (__this_00->fields).LOAFPIOGJAF;
      __this_01 = extraout_s0;
      if (iVar6 == 1) {
        if ((((BCKBBGCOMJD == (Model_o *)0x0) ||
             (pGVar4 = (BCKBBGCOMJD->fields).HMIAFJALFCJ, pGVar4 == (ModelObject_o *)0x0)) ||
            (pIVar5 = ModelObject__OCJAHBKIFNO(pGVar4,JNBKCMLPDAE,(MethodInfo *)0x0),
            pIVar5 == (ModelNode_o *)0x0)) ||
           (pCVar7 = (pIVar5->fields).CNMHHKAMGPI, pCVar7 == (Vector3f_o *)0x0))
        goto LAB_0351a848;
        __this_01 = (pCVar7->fields).PPOPAMHBMGG;
        iVar6 = (__this_00->fields).LOAFPIOGJAF;
        local_34 = __this_01;
      }
      if (iVar6 == 2) {
        if (((BCKBBGCOMJD == (Model_o *)0x0) ||
            (pOVar8 = (BCKBBGCOMJD->fields).BPJMMBGIMNC, pOVar8 == (Model_o *)0x0)) ||
           ((pGVar4 = (pOVar8->fields).HMIAFJALFCJ, pGVar4 == (ModelObject_o *)0x0 ||
            ((pIVar5 = ModelObject__OCJAHBKIFNO(pGVar4,JNBKCMLPDAE,(MethodInfo *)0x0),
             pIVar5 == (ModelNode_o *)0x0 ||
             (pCVar7 = (pIVar5->fields).CNMHHKAMGPI, pCVar7 == (Vector3f_o *)0x0))))))
        goto LAB_0351a848;
        __this_01 = (pCVar7->fields).PPOPAMHBMGG;
        local_34 = __this_01;
      }
    }
    else {
      if (BCKBBGCOMJD == (Model_o *)0x0) goto LAB_0351a848;
      __this_01 = (float)(*(__this_00->klass->vtable)._5_HKDKDDHELEB.methodPtr)
                                   (__this_00,(BCKBBGCOMJD->fields).FNEAAHOOHAA,
                                    (__this_00->klass->vtable)._5_HKDKDDHELEB.method);
      local_34 = __this_01;
    }
    pSVar3 = System_Single__ToString(__this_01,(MethodInfo *)&local_34);
  }
  if (HPACPFLKHPK != (MMFIDKMDADC_o *)0x0) {
    (HPACPFLKHPK->fields).HPACPFLKHPK = pSVar3;
    thunk_FUN_01c20e04(&HPACPFLKHPK->fields);
    return;
  }
LAB_0351a848:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LOLJOGPOOAH(Model BCKBBGCOMJD, NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, HDBNGIBFEBA LOFMIFGLIKN, MMFIDKMDADC HPACPFLKHPK)  [RVA 0x341A84C]
// PerkInfoItem$$LOLJOGPOOAH @ RVA 0x341A84C

void PerkInfoItem__LOLJOGPOOAH
               (PerkInfoItem_o *__this,Model_o *BCKBBGCOMJD,
               NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,HDBNGIBFEBA_o *LOFMIFGLIKN,
               MMFIDKMDADC_o *HPACPFLKHPK,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  int32_t iVar3;
  NILLKLHKLHG_DIPIFJPCFOE_o *pNVar4;
  PerkInfoItem_o *pHVar5;
  System_String_o *DIHAKADKIKM;
  Roster_o *__this_00;
  DEKKGJNMFEB_o *__this_01;
  System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *__this_02;
  int local_24;
  
  if ((DAT_045680c6 & 1) == 0) {
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    __this = (PerkInfoItem_o *)FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_045680c6 = 1;
  }
  if ((ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) ||
     (__this = (PerkInfoItem_o *)(ACCIJLGMHOO->fields).EEFPBGNAFFI, __this == (PerkInfoItem_o *)0x0))
  goto LAB_0351aa68;
  iVar1._0_1_ = (__this->fields).ICCBEPAFBFI.fields.fakeValue;
  iVar1._1_1_ = (__this->fields).ICCBEPAFBFI.fields.inited;
  iVar1._2_1_ = (__this->fields).ICCBEPAFBFI.fields.fakeValueActive;
  iVar1._3_1_ = (__this->fields).ICCBEPAFBFI.fields.field_0xb;
  pHVar5 = StringLiteral_1567/*"0"*/;
  if (1 < iVar1) {
    pNVar4 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this,0,
                        Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    __this = (PerkInfoItem_o *)0x0;
    if (pNVar4 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0) goto LAB_0351aa68;
    pHVar5 = (PerkInfoItem_o *)NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(pNVar4,(MethodInfo *)0x0);
    __this_02 = (ACCIJLGMHOO->fields).EEFPBGNAFFI;
    __this = pHVar5;
    if (__this_02 == (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0)
    goto LAB_0351aa68;
    pNVar4 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_02,1,
                        Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    __this = (PerkInfoItem_o *)0x0;
    if (pNVar4 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0) goto LAB_0351aa68;
    DIHAKADKIKM = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(pNVar4,(MethodInfo *)0x0);
    iVar2 = PCOEHCPGBBG__JBGCINPPLAC((System_String_o *)pHVar5,0,(MethodInfo *)0x0);
    iVar3 = PCOEHCPGBBG__JBGCINPPLAC(DIHAKADKIKM,0,(MethodInfo *)0x0);
    if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LIIFLGALGNK_TypeInfo);
    }
    LIIFLGALGNK__DHPFKHMDEDG((MethodInfo *)0x0);
    iVar2 = LIIFLGALGNK__HLMBDJOGONJ(iVar2,iVar3 + 1,(MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    __this = (PerkInfoItem_o *)0x0;
    if (__this_00 == (Roster_o *)0x0) goto LAB_0351aa68;
    iVar3 = Roster__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
    if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(DEKKGJNMFEB_TypeInfo);
    }
    __this_01 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
    __this = (PerkInfoItem_o *)0x0;
    if (__this_01 == (DEKKGJNMFEB_o *)0x0) goto LAB_0351aa68;
    iVar3 = DEKKGJNMFEB__HNBCOIJFCCA(__this_01,iVar3,(MethodInfo *)0x0);
    local_24 = iVar3 + iVar2;
    __this = (PerkInfoItem_o *)System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
    pHVar5 = __this;
  }
  if (HPACPFLKHPK != (MMFIDKMDADC_o *)0x0) {
    (HPACPFLKHPK->fields).HPACPFLKHPK = (System_String_o *)pHVar5;
    thunk_FUN_01c20e04(&HPACPFLKHPK->fields);
    return;
  }
LAB_0351aa68:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== private void NFBKOCDCCMJ(bool ONHICMGHLIH, Model BCKBBGCOMJD, NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, HDBNGIBFEBA LOFMIFGLIKN, MMFIDKMDADC HPACPFLKHPK)  [RVA 0x341AA6C]
// PerkInfoItem$$NFBKOCDCCMJ @ RVA 0x341AA6C

void PerkInfoItem__NFBKOCDCCMJ
               (PerkInfoItem_o *__this,bool ONHICMGHLIH,Model_o *BCKBBGCOMJD,
               NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,HDBNGIBFEBA_o *LOFMIFGLIKN,
               MMFIDKMDADC_o *HPACPFLKHPK,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  System_Text_StringBuilder_o *__this_00;
  System_String_o *CJNHFNHJHPE;
  MMFIDKMDADC_Fields *pMVar3;
  
  if ((DAT_045680c7 & 1) == 0) {
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_1154/*","*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_045680c7 = 1;
  }
  if (HPACPFLKHPK == (MMFIDKMDADC_o *)0x0) {
    return;
  }
  __this_00 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
    pMVar3 = &HPACPFLKHPK->fields;
    System_Text_StringBuilder__Append(__this_00,pMVar3->HPACPFLKHPK,(MethodInfo *)0x0);
    if (!ONHICMGHLIH) {
      System_Text_StringBuilder__Append(__this_00,StringLiteral_1154/*","*/,(MethodInfo *)0x0);
      if (ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) goto LAB_0351ab88;
      System_Text_StringBuilder__Append
                (__this_00,(ACCIJLGMHOO->fields).IHJHOFMNAOA,(MethodInfo *)0x0);
    }
    CJNHFNHJHPE = (System_String_o *)
                  (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                            (__this_00,(__this_00->klass->vtable)._3_ToString.method);
    bVar2 = NILLKLHKLHG__IIPMBCPINCC(CJNHFNHJHPE,(MethodInfo *)0x0);
    puVar1 = &StringLiteral_1606/*"1"*/;
    if (!bVar2) {
      puVar1 = &StringLiteral_1567/*"0"*/;
    }
    pMVar3->HPACPFLKHPK = (System_String_o *)*puVar1;
    thunk_FUN_01c20e04(pMVar3);
    return;
  }
LAB_0351ab88:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GNJJNIFJNKF(Model BCKBBGCOMJD, NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, HDBNGIBFEBA LOFMIFGLIKN, MMFIDKMDADC HPACPFLKHPK)  [RVA 0x341AB8C]
// PerkInfoItem$$GNJJNIFJNKF @ RVA 0x341AB8C

void PerkInfoItem__GNJJNIFJNKF
               (PerkInfoItem_o *__this,Model_o *BCKBBGCOMJD,
               NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,HDBNGIBFEBA_o *LOFMIFGLIKN,
               MMFIDKMDADC_o *HPACPFLKHPK,MethodInfo *method)

{
  bool bVar1;
  NILLKLHKLHG_DIPIFJPCFOE_o *pNVar2;
  System_String_array *pSVar3;
  System_String_array *value;
  int iVar4;
  System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *__this_00;
  undefined8 *puVar5;
  uint uVar6;
  
  if ((DAT_045680c8 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    __this = (PerkInfoItem_o *)FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_045680c8 = 1;
  }
  if ((ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) ||
     (__this = (PerkInfoItem_o *)(ACCIJLGMHOO->fields).EEFPBGNAFFI,
     (System_String_array *)__this == (System_String_array *)0x0)) goto LAB_0351acec;
  if (1 < *(int *)&((System_String_array *)__this)->max_length) {
    pNVar2 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this,0,
                        Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    __this = (PerkInfoItem_o *)(System_String_array *)0x0;
    if (pNVar2 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0) goto LAB_0351acec;
    pSVar3 = (System_String_array *)NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(pNVar2,(MethodInfo *)0x0);
    __this_00 = (ACCIJLGMHOO->fields).EEFPBGNAFFI;
    __this = (PerkInfoItem_o *)pSVar3;
    if ((((__this_00 == (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0) ||
         (pNVar2 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,1,
                              Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__
                             ), __this = (PerkInfoItem_o *)(System_String_array *)0x0,
         pNVar2 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0)) ||
        (value = (System_String_array *)
                 NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(pNVar2,(MethodInfo *)0x0),
        __this = (PerkInfoItem_o *)value, pSVar3 == (System_String_array *)0x0)) ||
       (pSVar3 = System_String__Split((System_String_o *)pSVar3,0x7c,0,(MethodInfo *)0x0),
       __this = (PerkInfoItem_o *)pSVar3, pSVar3 == (System_String_array *)0x0)) goto LAB_0351acec;
    iVar4 = (int)pSVar3->max_length;
    if (0 < iVar4) {
      if (iVar4 != 0) {
        uVar6 = 0;
        do {
          __this = (PerkInfoItem_o *)0x0;
          if (pSVar3->m_Items[(int)uVar6] == (System_String_o *)0x0) goto LAB_0351acec;
          bVar1 = System_String__Equals
                            (pSVar3->m_Items[(int)uVar6],(System_String_o *)value,(MethodInfo *)0x0)
          ;
          __this = (PerkInfoItem_o *)(ulong)bVar1;
          if (bVar1) {
            if (HPACPFLKHPK == (MMFIDKMDADC_o *)0x0) goto LAB_0351acec;
            puVar5 = &StringLiteral_1606/*"1"*/;
            goto LAB_0351acc0;
          }
          if (iVar4 - 1U == uVar6) goto LAB_0351acb4;
          uVar6 = uVar6 + 1;
        } while (uVar6 < (uint)pSVar3->max_length);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
LAB_0351acb4:
  if (HPACPFLKHPK != (MMFIDKMDADC_o *)0x0) {
    puVar5 = &StringLiteral_1567/*"0"*/;
LAB_0351acc0:
    (HPACPFLKHPK->fields).HPACPFLKHPK = (System_String_o *)*puVar5;
    thunk_FUN_01c20e04(&HPACPFLKHPK->fields);
    return;
  }
LAB_0351acec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== public void BHGINKNAHEG(List<NJPBBPOABKP> HPACPFLKHPK, NKPJLEMPIKD.FDGCEBFPIOP ACCIHBHMFPN)  [RVA 0x341ACF0]
// PerkInfoItem$$BHGINKNAHEG @ RVA 0x341ACF0

/* WARNING: Removing unreachable block (ram,0x0351aed8) */

void PerkInfoItem__BHGINKNAHEG
               (PerkInfoItem_o *__this,System_Collections_Generic_List_NJPBBPOABKP__o *HPACPFLKHPK,
               int32_t ACCIHBHMFPN,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_List_NJPBBPOABKP__o *__this_00;
  System_Collections_Generic_List_NKPJLEMPIKD__o *__this_01;
  NJPBBPOABKP_array *pNVar5;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_045680c9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NKPJLEMPIKD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NKPJLEMPIKD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NKPJLEMPIKD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBBPOABKP>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NKPJLEMPIKD>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBBPOABKP>_GetEnumerator__);
    DAT_045680c9 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).EMNOFACFIBF;
  if (__this_00 == (System_Collections_Generic_List_NJPBBPOABKP__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_a8,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<NJPBBPOABKP>_GetEnumerator__);
  local_70.fields._index = local_a8.fields._index;
  local_70.fields._version = local_a8.fields._version;
  local_70.fields._list = local_a8.fields._list;
  local_70.fields._current = local_a8.fields._current;
  do {
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_MoveNext__);
    item = local_70.fields._current;
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_Dispose__)
      ;
      return;
    }
    if ((NJPBBPOABKP_o *)local_70.fields._current == (NJPBBPOABKP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = ((NJPBBPOABKP_Fields *)((long)local_70.fields._current + 0x10))->
                _NAGALBFLGCA_k__BackingField;
    if (__this_01 == (System_Collections_Generic_List_NKPJLEMPIKD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_a8,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<NKPJLEMPIKD>_GetEnumerator__);
    local_90.fields._index = local_a8.fields._index;
    local_90.fields._version = local_a8.fields._version;
    local_90.fields._list = local_a8.fields._list;
    local_90.fields._current = local_a8.fields._current;
    do {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_90,
                         Method_System_Collections_Generic_List_Enumerator<NKPJLEMPIKD>_MoveNext__);
      if (!bVar3) goto LAB_0351aec4;
      if ((NJPBBPOABKP_o *)local_90.fields._current == (NJPBBPOABKP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar4 = NKPJLEMPIKD__NHGGBEACKBD((NKPJLEMPIKD_o *)local_90.fields._current,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<NJPBBPOABKP>_Add__;
    } while (iVar4 != ACCIHBHMFPN);
    if (HPACPFLKHPK == (System_Collections_Generic_List_NJPBBPOABKP__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pNVar5 = (HPACPFLKHPK->fields)._items;
    (HPACPFLKHPK->fields)._version = (HPACPFLKHPK->fields)._version + 1;
    if (pNVar5 == (NJPBBPOABKP_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar1 = (HPACPFLKHPK->fields)._size;
    if (uVar1 < (uint)pNVar5->max_length) {
      (HPACPFLKHPK->fields)._size = uVar1 + 1;
      pNVar5->m_Items[(int)uVar1] = (NJPBBPOABKP_o *)item;
      thunk_FUN_01c20e04(pNVar5->m_Items + (int)uVar1,item);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)HPACPFLKHPK,item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
LAB_0351aec4:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_90,Method_System_Collections_Generic_List_Enumerator<NKPJLEMPIKD>_Dispose__);
  } while( true );
}


// ===== private void JJHBIPGAPPG(XmlNode AHDGNOJPPIB)  [RVA 0x341B000]
// PerkInfoItem$$JJHBIPGAPPG @ RVA 0x341B000

/* WARNING: Removing unreachable block (ram,0x0351b294) */

void PerkInfoItem__JJHBIPGAPPG
               (PerkInfoItem_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  Il2CppObject *key;
  System_String_o *CJNHFNHJHPE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *value;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if ((DAT_045680ca & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredString>_set_Item__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlAttribute_TypeInfo);
    DAT_045680ca = 1;
  }
  if ((AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) ||
     (plVar2 = (long *)(*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 ), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar2 = (long *)(**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0351b100;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,0);
LAB_0351b100:
    uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      plVar2 = (long *)thunk_FUN_01bda71c(plVar2,System_IDisposable_TypeInfo);
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_0351b234;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_0351b160;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,1);
LAB_0351b160:
    plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlAttribute_TypeInfo->_2).naturalAligment;
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(System_Xml_XmlAttribute_c **)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
        System_Xml_XmlAttribute_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(plVar4);
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields).NBOMAJCMIIL;
    key = (Il2CppObject *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    CJNHFNHJHPE = (System_String_o *)
                  (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
    value = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                      (CJNHFNHJHPE,(MethodInfo *)0x0);
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_Dictionary<object,_object>__set_Item
              (__this_00,key,(Il2CppObject *)value,
               Method_System_Collections_Generic_Dictionary<string,_ObscuredString>_set_Item__);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(System_IDisposable_c **)(piVar7 + -2) == System_IDisposable_TypeInfo) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0351b250;
    }
  }
LAB_0351b234:
  puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_IDisposable_TypeInfo,0);
LAB_0351b250:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}


// ===== private void IAPPOPBLBHP(XmlNode AHDGNOJPPIB)  [RVA 0x341B368]
// PerkInfoItem$$IAPPOPBLBHP @ RVA 0x341B368

void PerkInfoItem__IAPPOPBLBHP
               (PerkInfoItem_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  NJPBBPOABKP_o *__this_00;
  PerkInfoItem_o **ppHVar3;
  System_Collections_Generic_List_NJPBBPOABKP__o *__this_01;
  NJPBBPOABKP_array *pNVar4;
  
  if ((DAT_045680cb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBBPOABKP>_Add__);
    FUN_01bab630(&NJPBBPOABKP_TypeInfo);
    DAT_045680cb = 1;
  }
  __this_00 = (NJPBBPOABKP_o *)thunk_FUN_01bda818(NJPBBPOABKP_TypeInfo);
  NJPBBPOABKP___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (NJPBBPOABKP_o *)0x0) {
    ppHVar3 = &(__this_00->fields)._MEFGNAIILBJ_k__BackingField;
    *ppHVar3 = __this;
    thunk_FUN_01c20e04(ppHVar3,__this);
    NJPBBPOABKP__HNIHOIAMDPC(__this_00,AHDGNOJPPIB,(MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<NJPBBPOABKP>_Add__;
    __this_01 = (__this->fields).EMNOFACFIBF;
    if (__this_01 != (System_Collections_Generic_List_NJPBBPOABKP__o *)0x0) {
      pNVar4 = (__this_01->fields)._items;
      (__this_01->fields)._version = (__this_01->fields)._version + 1;
      if (pNVar4 != (NJPBBPOABKP_array *)0x0) {
        uVar1 = (__this_01->fields)._size;
        if (uVar1 < (uint)pNVar4->max_length) {
          (__this_01->fields)._size = uVar1 + 1;
          pNVar4->m_Items[(int)uVar1] = __this_00;
          thunk_FUN_01c20e04(pNVar4->m_Items + (int)uVar1,__this_00);
          return;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NJEFAIIJLMA(StringBuilder CJFMGFBAMEP, string HHHAAGDPOKH, string GKBNFBINIIP, float EPABIKKLOAP)  [RVA 0x341B46C]
// PerkInfoItem$$NJEFAIIJLMA @ RVA 0x341B46C

/* WARNING: Type propagation algorithm not settling */

void PerkInfoItem__NJEFAIIJLMA
               (PerkInfoItem_o *__this,System_Text_StringBuilder_o *CJFMGFBAMEP,
               System_String_o *HHHAAGDPOKH,System_String_o *GKBNFBINIIP,float EPABIKKLOAP,
               MethodInfo *method)

{
  System_Object_array *args;
  long lVar1;
  Il2CppObject *pIVar2;
  undefined8 uVar3;
  float local_38 [2];
  
  if ((DAT_045680cc & 1) == 0) {
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&float_TypeInfo);
    FUN_01bab630(&StringLiteral_2439/*"<quad name=ShopButtons1.{0} scale={1} color=#{2} offsetx={3} FitText2Bounds=0 >"*/);
    DAT_045680cc = 1;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
  if (args == (System_Object_array *)0x0) {
LAB_0351b628:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((HHHAAGDPOKH != (System_String_o *)0x0) &&
     (lVar1 = thunk_FUN_01bda71c(HHHAAGDPOKH,(((args->obj).klass)->_1).element_class), lVar1 == 0))
  {
LAB_0351b61c:
    uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar3,0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = (Il2CppObject *)HHHAAGDPOKH;
    thunk_FUN_01c20e04(args->m_Items,HHHAAGDPOKH);
    local_38[1] = 0.7;
    pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,local_38 + 1);
    if ((pIVar2 != (Il2CppObject *)0x0) &&
       (lVar1 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar1 == 0))
    goto LAB_0351b61c;
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = pIVar2;
      thunk_FUN_01c20e04(args->m_Items + 1,pIVar2);
      if ((GKBNFBINIIP != (System_String_o *)0x0) &&
         (lVar1 = thunk_FUN_01bda71c(GKBNFBINIIP,(((args->obj).klass)->_1).element_class),
         lVar1 == 0)) goto LAB_0351b61c;
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = (Il2CppObject *)GKBNFBINIIP;
        thunk_FUN_01c20e04(args->m_Items + 2,GKBNFBINIIP);
        local_38[0] = EPABIKKLOAP;
        pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,local_38);
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (lVar1 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar1 == 0))
        goto LAB_0351b61c;
        if (3 < (uint)args->max_length) {
          args->m_Items[3] = pIVar2;
          thunk_FUN_01c20e04(args->m_Items + 3,pIVar2);
          if (CJFMGFBAMEP != (System_Text_StringBuilder_o *)0x0) {
            System_Text_StringBuilder__AppendFormat
                      (CJFMGFBAMEP,StringLiteral_2439/*"<quad name=ShopButtons1.{0} scale={1} color=#{2} offsetx={3} FitText2Bounds=0 >"*/,args,(MethodInfo *)0x0);
            return;
          }
          goto LAB_0351b628;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public void NAHALOPKGBA(Model CJNHFNHJHPE)  [RVA 0x341B62C]
// PerkInfoItem$$NAHALOPKGBA @ RVA 0x341B62C

void PerkInfoItem__NAHALOPKGBA(PerkInfoItem_o *__this,Model_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._BGCNGEAHHFN_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private void FAEPEDPFHBA(Model BCKBBGCOMJD, NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, HDBNGIBFEBA LOFMIFGLIKN, MMFIDKMDADC HPACPFLKHPK)  [RVA 0x341B634]
// PerkInfoItem$$FAEPEDPFHBA @ RVA 0x341B634

void PerkInfoItem__FAEPEDPFHBA
               (PerkInfoItem_o *__this,Model_o *BCKBBGCOMJD,
               NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,HDBNGIBFEBA_o *LOFMIFGLIKN,
               MMFIDKMDADC_o *HPACPFLKHPK,MethodInfo *method)

{
  FPLCEOJCPOD_o *__this_00;
  ModelParameters_o *pPVar1;
  int32_t local_14;
  
  if ((BCKBBGCOMJD != (Model_o *)0x0) &&
     (pPVar1 = (BCKBBGCOMJD->fields).FAPMJJBOFEF, pPVar1 != (ModelParameters_o *)0x0)) {
    local_14 = 0;
    if (ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
      __this_00 = (pPVar1->fields).ACHJNNOKEDK;
      __this = (PerkInfoItem_o *)0x0;
      if (__this_00 != (FPLCEOJCPOD_o *)0x0) {
        FPLCEOJCPOD__KNMENIBLFGF
                  (__this_00,(ACCIJLGMHOO->fields).KCPPJGKAILM,&local_14,true,false,
                   (MethodInfo *)0x0);
        __this = (PerkInfoItem_o *)System_Int32__ToString((int32_t)&local_14,(MethodInfo *)0x0);
        if (HPACPFLKHPK != (MMFIDKMDADC_o *)0x0) {
          (HPACPFLKHPK->fields).HPACPFLKHPK = (System_String_o *)__this;
          thunk_FUN_01c20e04(&HPACPFLKHPK->fields,__this);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  return;
}


// ===== public Model OKNHADOIMCF()  [RVA 0x341B6A4]
// PerkInfoItem$$OKNHADOIMCF @ RVA 0x341B6A4

Model_o * PerkInfoItem__OKNHADOIMCF(PerkInfoItem_o *__this,MethodInfo *method)

{
  return (__this->fields)._BGCNGEAHHFN_k__BackingField;
}


// ===== private void BCJJIEDLKKN(Model BCKBBGCOMJD, NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, HDBNGIBFEBA LOFMIFGLIKN, MMFIDKMDADC HPACPFLKHPK)  [RVA 0x341B6AC]
// PerkInfoItem$$BCJJIEDLKKN @ RVA 0x341B6AC

void PerkInfoItem__BCJJIEDLKKN
               (PerkInfoItem_o *__this,Model_o *BCKBBGCOMJD,
               NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,HDBNGIBFEBA_o *LOFMIFGLIKN,
               MMFIDKMDADC_o *HPACPFLKHPK,MethodInfo *method)

{
  System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *pSVar1;
  NILLKLHKLHG_DIPIFJPCFOE_o *pNVar2;
  System_String_o *pSVar3;
  System_String_o *FOBBLEELKOM;
  System_String_o *JNBKCMLPDAE;
  DistancePoint_o *__this_00;
  ModelObject_o *pGVar4;
  ModelNode_o *pIVar5;
  int iVar6;
  Vector3f_o *pCVar7;
  Model_o *pOVar8;
  float extraout_s0;
  float __this_01;
  float local_34;
  
  if ((DAT_045680cd & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    FUN_01bab630(&DistancePoint_TypeInfo);
    FUN_01bab630(&StringLiteral_1324/*"-10000"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045680cd = 1;
  }
  if ((ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) ||
     (pSVar1 = (ACCIJLGMHOO->fields).EEFPBGNAFFI,
     pSVar1 == (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0))
  goto LAB_0351b8e4;
  pSVar3 = StringLiteral_1324/*"-10000"*/;
  if (1 < (pSVar1->fields)._size) {
    pNVar2 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar1,0,
                        Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    if (pNVar2 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0) goto LAB_0351b8e4;
    pSVar3 = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(pNVar2,(MethodInfo *)0x0);
    pSVar1 = (ACCIJLGMHOO->fields).EEFPBGNAFFI;
    if ((pSVar1 == (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0) ||
       (pNVar2 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,1,
                            Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__
                           ), pNVar2 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0)) goto LAB_0351b8e4;
    FOBBLEELKOM = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(pNVar2,(MethodInfo *)0x0);
    pSVar1 = (ACCIJLGMHOO->fields).EEFPBGNAFFI;
    if (pSVar1 == (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0)
    goto LAB_0351b8e4;
    JNBKCMLPDAE = StringLiteral_1/*""*/;
    if (2 < (pSVar1->fields)._size) {
      pNVar2 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,2,
                          Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__
                         );
      if (pNVar2 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0) goto LAB_0351b8e4;
      JNBKCMLPDAE = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(pNVar2,(MethodInfo *)0x0);
    }
    __this_00 = (DistancePoint_o *)thunk_FUN_01bda818(DistancePoint_TypeInfo);
    DistancePoint___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 == (DistancePoint_o *)0x0) goto LAB_0351b8e4;
    DistancePoint__EOHMFJFFFIN(__this_00,pSVar3,FOBBLEELKOM,JNBKCMLPDAE,(MethodInfo *)0x0);
    local_34 = 0.0;
    if ((__this_00->fields).AKBDFFLEINL == 1) {
      iVar6 = (__this_00->fields).LOAFPIOGJAF;
      __this_01 = extraout_s0;
      if (iVar6 == 1) {
        if ((((BCKBBGCOMJD == (Model_o *)0x0) ||
             (pGVar4 = (BCKBBGCOMJD->fields).HMIAFJALFCJ, pGVar4 == (ModelObject_o *)0x0)) ||
            (pIVar5 = ModelObject__OCJAHBKIFNO(pGVar4,JNBKCMLPDAE,(MethodInfo *)0x0),
            pIVar5 == (ModelNode_o *)0x0)) ||
           (pCVar7 = (pIVar5->fields).CNMHHKAMGPI, pCVar7 == (Vector3f_o *)0x0))
        goto LAB_0351b8e4;
        __this_01 = (pCVar7->fields).super.JOLEIODMLFL;
        iVar6 = (__this_00->fields).LOAFPIOGJAF;
        local_34 = __this_01;
      }
      if (iVar6 == 2) {
        if (((BCKBBGCOMJD == (Model_o *)0x0) ||
            (pOVar8 = (BCKBBGCOMJD->fields).BPJMMBGIMNC, pOVar8 == (Model_o *)0x0)) ||
           ((pGVar4 = (pOVar8->fields).HMIAFJALFCJ, pGVar4 == (ModelObject_o *)0x0 ||
            ((pIVar5 = ModelObject__OCJAHBKIFNO(pGVar4,JNBKCMLPDAE,(MethodInfo *)0x0),
             pIVar5 == (ModelNode_o *)0x0 ||
             (pCVar7 = (pIVar5->fields).CNMHHKAMGPI, pCVar7 == (Vector3f_o *)0x0))))))
        goto LAB_0351b8e4;
        __this_01 = (pCVar7->fields).super.JOLEIODMLFL;
        local_34 = __this_01;
      }
    }
    else {
      if (BCKBBGCOMJD == (Model_o *)0x0) goto LAB_0351b8e4;
      __this_01 = (float)(*(__this_00->klass->vtable)._6_LHPFGLOFHBL.methodPtr)
                                   (__this_00,(BCKBBGCOMJD->fields).FNEAAHOOHAA,
                                    (__this_00->klass->vtable)._6_LHPFGLOFHBL.method);
      local_34 = __this_01;
    }
    pSVar3 = System_Single__ToString(__this_01,(MethodInfo *)&local_34);
  }
  if (HPACPFLKHPK != (MMFIDKMDADC_o *)0x0) {
    (HPACPFLKHPK->fields).HPACPFLKHPK = pSVar3;
    thunk_FUN_01c20e04(&HPACPFLKHPK->fields);
    return;
  }
LAB_0351b8e4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string EMGLGFMDMKD()  [RVA 0x341B8E8]
// PerkInfoItem$$EMGLGFMDMKD @ RVA 0x341B8E8

System_String_o * PerkInfoItem__EMGLGFMDMKD(PerkInfoItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  KBCOFHAJOCK_o *__this_00;
  PLCCJCFAFKA_o *pPVar2;
  System_Text_StringBuilder_o *__this_01;
  System_Collections_Generic_HashSet_object__o *__this_02;
  GGHCLMEFIGO_o *__this_03;
  PerkInfoItem_o *__this_04;
  MethodInfo *in_x2;
  MethodInfo *in_x4;
  Item_o *pDVar3;
  Roster_o *pAVar4;
  Il2CppObject **ppIVar5;
  undefined8 *puVar6;
  System_String_o *pSVar7;
  System_Collections_Generic_HashSet_object__o *local_38;
  
  if ((DAT_045680ce & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<string>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_47/*"\n"*/);
    FUN_01bab630(&StringLiteral_10806/*"RaidCharge"*/);
    FUN_01bab630(&StringLiteral_14870/*"Weapon"*/);
    FUN_01bab630(&StringLiteral_10811/*"RaidCharge_pushed"*/);
    FUN_01bab630(&StringLiteral_3076/*"Armor"*/);
    FUN_01bab630(&StringLiteral_8772/*"Magic"*/);
    FUN_01bab630(&StringLiteral_11021/*"Ranged_weapon"*/);
    FUN_01bab630(&StringLiteral_7069/*"Helmet_pushed"*/);
    FUN_01bab630(&StringLiteral_6163/*"FFFFFF68"*/);
    FUN_01bab630(&StringLiteral_8786/*"Magic_pushed"*/);
    FUN_01bab630(&StringLiteral_7068/*"Helmet"*/);
    FUN_01bab630(&StringLiteral_11022/*"Ranged_weapon_pushed"*/);
    FUN_01bab630(&StringLiteral_3078/*"Armor_pushed"*/);
    FUN_01bab630(&StringLiteral_15860/*"^{0}^\n\n\n"*/);
    FUN_01bab630(&StringLiteral_14876/*"Weapon_pushed"*/);
    FUN_01bab630(&StringLiteral_6164/*"FFFFFFFF"*/);
    FUN_01bab630(&StringLiteral_11017/*"Ranged"*/);
    FUN_01bab630(&StringLiteral_7066/*"Helm"*/);
    DAT_045680ce = 1;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).AKBDHOEGNNG,(MethodInfo *)0x0);
  if (bVar1) {
LAB_0351bd68:
    pSVar7 = PerkInfoItem__FBEOHCOEMKH(__this,(__this->fields).BPCADJLKKGA,in_x2);
    return pSVar7;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if ((pDVar3 == (Item_o *)0x0) ||
     (__this_00 = (pDVar3->fields)._GMODBKFPHPN_k__BackingField, __this_00 == (KBCOFHAJOCK_o *)0x0))
  goto LAB_0351be48;
  in_x2 = (MethodInfo *)0x0;
  pPVar2 = KBCOFHAJOCK__JHDDCDEENAK(__this_00,(__this->fields).AKBDHOEGNNG,(MethodInfo *)0x0);
  if (pPVar2 == (PLCCJCFAFKA_o *)0x0) goto LAB_0351bd68;
  __this_01 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this_01,0x400,(MethodInfo *)0x0);
  if (__this_01 == (System_Text_StringBuilder_o *)0x0) {
LAB_0351be48:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Text_StringBuilder__AppendFormat
            (__this_01,StringLiteral_15860/*"^{0}^\n\n\n"*/,(Il2CppObject *)(pPVar2->fields).PEKGAFPPFLP,
             (MethodInfo *)0x0);
  __this_02 = (System_Collections_Generic_HashSet_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_HashSet<string>_TypeInfo);
  System_Collections_Generic_HashSet<object>___ctor
            (__this_02,Method_System_Collections_Generic_HashSet<string>__ctor__);
  local_38 = __this_02;
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
  pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((((pAVar4 == (Roster_o *)0x0) ||
       (__this_03 = (pAVar4->fields).OIDPLCLELEN, __this_03 == (GGHCLMEFIGO_o *)0x0)) ||
      (GGHCLMEFIGO__LEGEKLCFCIA
                 (__this_03,__this,(System_Collections_Generic_HashSet_string__o **)&local_38,
                  (MethodInfo *)0x0),
      local_38 == (System_Collections_Generic_HashSet_object__o *)0x0)) ||
     (bVar1 = System_Collections_Generic_HashSet<object>__Contains
                        (local_38,(Il2CppObject *)StringLiteral_14870/*"Weapon"*/,
                         Method_System_Collections_Generic_HashSet<string>_Contains__),
     local_38 == (System_Collections_Generic_HashSet_object__o *)0x0)) goto LAB_0351be48;
  pSVar7 = StringLiteral_14876/*"Weapon_pushed"*/;
  if (!bVar1) {
    pSVar7 = StringLiteral_14870/*"Weapon"*/;
  }
  bVar1 = System_Collections_Generic_HashSet<object>__Contains
                    (local_38,(Il2CppObject *)StringLiteral_14870/*"Weapon"*/,
                     Method_System_Collections_Generic_HashSet<string>_Contains__);
  puVar6 = &StringLiteral_6164/*"FFFFFFFF"*/;
  if (!bVar1) {
    puVar6 = &StringLiteral_6163/*"FFFFFF68"*/;
  }
  PerkInfoItem__NJEFAIIJLMA
            ((PerkInfoItem_o *)(ulong)bVar1,__this_01,pSVar7,(System_String_o *)*puVar6,92.0,in_x4);
  if ((local_38 == (System_Collections_Generic_HashSet_object__o *)0x0) ||
     (bVar1 = System_Collections_Generic_HashSet<object>__Contains
                        (local_38,(Il2CppObject *)StringLiteral_3076/*"Armor"*/,
                         Method_System_Collections_Generic_HashSet<string>_Contains__),
     local_38 == (System_Collections_Generic_HashSet_object__o *)0x0)) goto LAB_0351be48;
  pSVar7 = StringLiteral_3078/*"Armor_pushed"*/;
  if (!bVar1) {
    pSVar7 = StringLiteral_3076/*"Armor"*/;
  }
  bVar1 = System_Collections_Generic_HashSet<object>__Contains
                    (local_38,(Il2CppObject *)StringLiteral_3076/*"Armor"*/,
                     Method_System_Collections_Generic_HashSet<string>_Contains__);
  puVar6 = &StringLiteral_6164/*"FFFFFFFF"*/;
  if (!bVar1) {
    puVar6 = &StringLiteral_6163/*"FFFFFF68"*/;
  }
  PerkInfoItem__NJEFAIIJLMA
            ((PerkInfoItem_o *)(ulong)bVar1,__this_01,pSVar7,(System_String_o *)*puVar6,46.0,in_x4);
  if ((local_38 == (System_Collections_Generic_HashSet_object__o *)0x0) ||
     (bVar1 = System_Collections_Generic_HashSet<object>__Contains
                        (local_38,StringLiteral_7066/*"Helm"*/,
                         Method_System_Collections_Generic_HashSet<string>_Contains__),
     local_38 == (System_Collections_Generic_HashSet_object__o *)0x0)) goto LAB_0351be48;
  puVar6 = &StringLiteral_7069/*"Helmet_pushed"*/;
  if (!bVar1) {
    puVar6 = &StringLiteral_7068/*"Helmet"*/;
  }
  pSVar7 = (System_String_o *)*puVar6;
  bVar1 = System_Collections_Generic_HashSet<object>__Contains
                    (local_38,StringLiteral_7066/*"Helm"*/,
                     Method_System_Collections_Generic_HashSet<string>_Contains__);
  puVar6 = &StringLiteral_6164/*"FFFFFFFF"*/;
  if (!bVar1) {
    puVar6 = &StringLiteral_6163/*"FFFFFF68"*/;
  }
  PerkInfoItem__NJEFAIIJLMA
            ((PerkInfoItem_o *)(ulong)bVar1,__this_01,pSVar7,(System_String_o *)*puVar6,0.0,in_x4);
  if ((local_38 == (System_Collections_Generic_HashSet_object__o *)0x0) ||
     (bVar1 = System_Collections_Generic_HashSet<object>__Contains
                        (local_38,StringLiteral_11017/*"Ranged"*/,
                         Method_System_Collections_Generic_HashSet<string>_Contains__),
     local_38 == (System_Collections_Generic_HashSet_object__o *)0x0)) goto LAB_0351be48;
  puVar6 = &StringLiteral_11022/*"Ranged_weapon_pushed"*/;
  if (!bVar1) {
    puVar6 = &StringLiteral_11021/*"Ranged_weapon"*/;
  }
  pSVar7 = (System_String_o *)*puVar6;
  bVar1 = System_Collections_Generic_HashSet<object>__Contains
                    (local_38,StringLiteral_11017/*"Ranged"*/,
                     Method_System_Collections_Generic_HashSet<string>_Contains__);
  puVar6 = &StringLiteral_6164/*"FFFFFFFF"*/;
  if (!bVar1) {
    puVar6 = &StringLiteral_6163/*"FFFFFF68"*/;
  }
  PerkInfoItem__NJEFAIIJLMA
            ((PerkInfoItem_o *)(ulong)bVar1,__this_01,pSVar7,(System_String_o *)*puVar6,-46.0,in_x4);
  if (local_38 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_0351be48;
  bVar1 = System_Collections_Generic_HashSet<object>__Contains
                    (local_38,StringLiteral_10806/*"RaidCharge"*/,
                     Method_System_Collections_Generic_HashSet<string>_Contains__);
  if (bVar1) {
    ppIVar5 = (Il2CppObject **)&StringLiteral_10811/*"RaidCharge_pushed"*/;
  }
  else {
    if (local_38 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_0351be48;
    bVar1 = System_Collections_Generic_HashSet<object>__Contains
                      (local_38,StringLiteral_8772/*"Magic"*/,
                       Method_System_Collections_Generic_HashSet<string>_Contains__);
    ppIVar5 = (Il2CppObject **)&StringLiteral_8786/*"Magic_pushed"*/;
    if (!bVar1) {
      ppIVar5 = &StringLiteral_8772/*"Magic"*/;
    }
  }
  if (local_38 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_0351be48;
  pSVar7 = (System_String_o *)*ppIVar5;
  bVar1 = System_Collections_Generic_HashSet<object>__Contains
                    (local_38,StringLiteral_8772/*"Magic"*/,
                     Method_System_Collections_Generic_HashSet<string>_Contains__);
  __this_04 = (PerkInfoItem_o *)(ulong)bVar1;
  if (!bVar1) {
    if (local_38 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_0351be48;
    bVar1 = System_Collections_Generic_HashSet<object>__Contains
                      (local_38,StringLiteral_10806/*"RaidCharge"*/,
                       Method_System_Collections_Generic_HashSet<string>_Contains__);
    __this_04 = (PerkInfoItem_o *)(ulong)bVar1;
    if (!bVar1) {
      puVar6 = &StringLiteral_6163/*"FFFFFF68"*/;
      goto LAB_0351bdf4;
    }
  }
  puVar6 = &StringLiteral_6164/*"FFFFFFFF"*/;
LAB_0351bdf4:
  PerkInfoItem__NJEFAIIJLMA(__this_04,__this_01,pSVar7,(System_String_o *)*puVar6,-92.0,in_x4);
  System_Text_StringBuilder__Append(__this_01,StringLiteral_47/*"\n"*/,(MethodInfo *)0x0);
  pSVar7 = (System_String_o *)
           (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                     (__this_01,(__this_01->klass->vtable)._3_ToString.method);
  return pSVar7;
}


// ===== private void MFMNDEAFPFE(Model BCKBBGCOMJD, NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, HDBNGIBFEBA LOFMIFGLIKN, MMFIDKMDADC HPACPFLKHPK)  [RVA 0x341C284]
// PerkInfoItem$$MFMNDEAFPFE @ RVA 0x341C284

void PerkInfoItem__MFMNDEAFPFE
               (PerkInfoItem_o *__this,Model_o *BCKBBGCOMJD,
               NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,HDBNGIBFEBA_o *LOFMIFGLIKN,
               MMFIDKMDADC_o *HPACPFLKHPK,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  uint32_t uVar3;
  FPLCEOJCPOD_o *pFVar4;
  System_Text_StringBuilder_o *__this_00;
  MethodInfo *method_00;
  char cVar5;
  Fight_o *pFVar6;
  ModelEdge_o *pGVar7;
  GameUtils_GNBEOEJBMKL_o *pMVar8;
  InfoAnimation_o *pEVar9;
  undefined8 *puVar10;
  Model_o *pOVar11;
  ModelParameters_o *pPVar12;
  Model_o *pOVar13;
  undefined8 *puVar14;
  IntervalAttack_o *pMVar15;
  System_String_o *pSVar16;
  System_Collections_Generic_List_string__o *__this_01;
  System_Collections_Generic_List_MGNDHCBAPEN_string__ObscuredFloat___o *EOOKKNIHBEB;
  int index;
  Model_OGCKCABMHLC_o *pOVar17;
  ModelParameters_o *GDKDMLMOKBD;
  float fVar18;
  float fVar19;
  float extraout_s0;
  float fVar20;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_b0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_90;
  undefined8 local_70;
  undefined8 local_68;
  
                    /* try { // try from 0351c2b4 to 0361c2b7 has its CatchHandler @ 0351c2c0 */
                    /* try { // try from 0351c2b8 to 0361c2df has its CatchHandler @ 0351c054 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0351c274 with catch @ 0351c2bc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0351c2b4 with catch @ 0351c2c0
                        */
  if ((DAT_045680cf & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0351c264 with catch @ 0351c2c4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0351c248 with catch @ 0351c2c8
                        */
    FUN_01bab630(&Fight_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
                    /* try { // try from 0351c2e0 to 0361c2e3 has its CatchHandler @ 0351c30c */
                    /* try { // try from 0351c2e4 to 0361c31b has its CatchHandler @ 0351c054 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_5058/*"Damage"*/);
                    /* catch() { ... } // from try @ 0351c2e0 with catch @ 0351c30c */
    FUN_01bab630(&StringLiteral_8907/*"Me"*/);
                    /* try { // try from 0351c31c to 0361c323 has its CatchHandler @ 0351c338 */
    FUN_01bab630(&StringLiteral_5267/*"DefenseAttribute"*/);
                    /* try { // try from 0351c324 to 0361c32f has its CatchHandler @ 0351c054 */
    FUN_01bab630(&StringLiteral_5759/*"Enemy"*/);
                    /* try { // try from 0351c330 to 0361c337 has its CatchHandler @ 0351c338 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0351c31c with catch @ 0351c338
                       catch(type#2 @ 00000000) { ... } // from try @ 0351c330 with catch @ 0351c338
                        */
    FUN_01bab630(&StringLiteral_3508/*"Block"*/);
    FUN_01bab630(&StringLiteral_11996/*"Shock"*/);
    FUN_01bab630(&StringLiteral_4893/*"Critical"*/);
    FUN_01bab630(&StringLiteral_3216/*"AttributesHitMultiplier"*/);
    FUN_01bab630(&StringLiteral_22485/*"|"*/);
    FUN_01bab630(&StringLiteral_3532/*"BodyPart"*/);
    FUN_01bab630(&StringLiteral_10305/*"Player"*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    FUN_01bab630(&StringLiteral_3403/*"BaseDamage"*/);
    FUN_01bab630(&StringLiteral_2983/*"Animations"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_045680cf = 1;
  }
  local_70 = 0;
  local_68 = (Il2CppMethodPointer)0x0;
  if ((Fight_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&Fight_TypeInfo);
    DAT_04565b7f = '\x01';
  }
  if ((Fight_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (Fight_TypeInfo->static_fields->IGABFCCGLCO == (Fight_o *)0x0) {
    return;
  }
  if ((Fight_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&Fight_TypeInfo);
    DAT_04565b7f = '\x01';
  }
  if ((Fight_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pFVar6 = Fight_TypeInfo->static_fields->IGABFCCGLCO;
  if (pFVar6 == (Fight_o *)0x0) goto LAB_0351ca60;
  pOVar17 = (pFVar6->fields).FMGEPLJPLGC;
  if (pOVar17 == (Model_OGCKCABMHLC_o *)0x0) {
    return;
  }
  if (ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) goto LAB_0351ca60;
  pSVar16 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(pSVar16,(MethodInfo *)0x0);
  if (uVar3 < 0x50b2e4d2) {
    if (0x1c70fc20 < uVar3) {
      if (uVar3 == 0x2df7d460) {
                    /* try { // try from 0351c860 to 0361c867 has its CatchHandler @ 0351c8a4 */
                    /* try { // try from 0351c868 to 0361c88b has its CatchHandler @ 0351c784 */
        bVar2 = System_String__op_Equality(pSVar16,StringLiteral_5058/*"Damage"*/,(MethodInfo *)0x0);
        if (!bVar2) {
          return;
        }
        method_00 = (MethodInfo *)&(pOVar17->fields).CEMEJDHDPLL;
        fVar18 = extraout_s0;
        goto LAB_0351c9c0;
      }
      if (uVar3 != 0x47318a8a) {
        if (uVar3 != 0x50b2e4d1) {
          return;
        }
        bVar2 = System_String__op_Equality(pSVar16,StringLiteral_11996/*"Shock"*/,(MethodInfo *)0x0);
        if (!bVar2) {
          return;
        }
        cVar5 = (pOVar17->fields).NLFJFKCJEAC;
        goto LAB_0351c9f0;
      }
                    /* try { // try from 0351c88c to 0361c88f has its CatchHandler @ 0351c89c */
      bVar2 = System_String__op_Equality(pSVar16,StringLiteral_2983/*"Animations"*/,(MethodInfo *)0x0);
                    /* try { // try from 0351c890 to 0361c893 has its CatchHandler @ 0351c898 */
      if (!bVar2) {
        return;
      }
                    /* try { // try from 0351c894 to 0361c8bf has its CatchHandler @ 0351c784 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0351c890 with catch @ 0351c898
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0351c88c with catch @ 0351c89c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0351c844 with catch @ 0351c8a0
                        */
      __this_00 = (System_Text_StringBuilder_o *)
                  thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0351c860 with catch @ 0351c8a4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0351c830 with catch @ 0351c8a8
                        */
      System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
      pEVar9 = (pOVar17->fields).OKMFPICFIAD;
      if ((pEVar9 == (InfoAnimation_o *)0x0) ||
         (__this_01 = (pEVar9->fields)._AHFPJJKEANI_k__BackingField,
         __this_01 == (System_Collections_Generic_List_string__o *)0x0)) goto LAB_0351ca60;
                    /* try { // try from 0351c8c0 to 0361c8c3 has its CatchHandler @ 0351c8e4 */
      iVar1 = (__this_01->fields)._size;
                    /* try { // try from 0351c8c4 to 0361c8eb has its CatchHandler @ 0351c784 */
      if (iVar1 < 1) {
        if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_0351ca60;
      }
      else {
        index = 0;
        do {
                    /* catch() { ... } // from try @ 0351c8c0 with catch @ 0351c8e4 */
                    /* try { // try from 0351c8ec to 0361c8f3 has its CatchHandler @ 0351c908 */
          pSVar16 = (System_String_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_01,index,
                               Method_System_Collections_Generic_List<string>_get_Item__);
          if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_0351ca60;
                    /* try { // try from 0351c8f4 to 0361c8ff has its CatchHandler @ 0351c784 */
                    /* try { // try from 0351c900 to 0361c907 has its CatchHandler @ 0351c908 */
          System_Text_StringBuilder__Append(__this_00,pSVar16,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0351c8ec with catch @ 0351c908
                       catch(type#2 @ 00000000) { ... } // from try @ 0351c900 with catch @ 0351c908
                        */
          if (index < iVar1 + -1) {
            System_Text_StringBuilder__Append(__this_00,StringLiteral_22485/*"|"*/,(MethodInfo *)0x0);
          }
          index = index + 1;
        } while (iVar1 != index);
      }
      pSVar16 = (System_String_o *)
                (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                          (__this_00,(__this_00->klass->vtable)._3_ToString.method);
joined_r0x0351c9c8:
      if (HPACPFLKHPK == (MMFIDKMDADC_o *)0x0) goto LAB_0351ca60;
      goto LAB_0351ca30;
    }
    if (uVar3 == 0x10fb63b9) {
      bVar2 = System_String__op_Equality(pSVar16,StringLiteral_5267/*"DefenseAttribute"*/,(MethodInfo *)0x0);
      if (!bVar2) {
        return;
      }
      if (HPACPFLKHPK == (MMFIDKMDADC_o *)0x0) goto LAB_0351ca60;
      pSVar16 = (pOVar17->fields).LKNOHFANHAE;
      goto LAB_0351ca30;
    }
    if (uVar3 != 0x1c70fc20) {
      return;
    }
    bVar2 = System_String__op_Equality(pSVar16,StringLiteral_10305/*"Player"*/,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    puVar10 = &StringLiteral_8907/*"Me"*/;
    puVar14 = &StringLiteral_5759/*"Enemy"*/;
    bVar2 = (pOVar17->fields).HEMGHNOOJPI == BCKBBGCOMJD;
  }
  else {
    if (0x87d09fa8 < uVar3) {
      if (uVar3 == 0xb9ed616a) {
        bVar2 = System_String__op_Equality(pSVar16,StringLiteral_3216/*"AttributesHitMultiplier"*/,(MethodInfo *)0x0);
        if (!bVar2) {
          return;
        }
        pOVar11 = (pOVar17->fields).PFFLOCBGFCH;
        if (pOVar11 == (Model_o *)0x0) goto LAB_0351ca60;
        bVar2 = Model__HODPOCMNNIN(pOVar11,(MethodInfo *)0x0);
        pOVar11 = (pOVar17->fields).PFFLOCBGFCH;
        if (((pOVar11 == (Model_o *)0x0) ||
            (pOVar13 = (pOVar17->fields).HEMGHNOOJPI, pOVar13 == (Model_o *)0x0)) ||
           (pMVar15 = (pOVar17->fields).GBMBJJOMAID, pMVar15 == (IntervalAttack_o *)0x0))
        goto LAB_0351ca60;
        GDKDMLMOKBD = (pOVar11->fields).FAPMJJBOFEF;
        pPVar12 = (pOVar13->fields).FAPMJJBOFEF;
        EOOKKNIHBEB = (pMVar15->fields).AKKFNCFAPDO;
        pSVar16 = (pOVar17->fields).LKNOHFANHAE;
        if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        fVar18 = GameUtils__NADKBDJLFIL
                           (bVar2,GDKDMLMOKBD,pPVar12,EOOKKNIHBEB,pSVar16,(MethodInfo *)0x0);
        local_68 = (Il2CppMethodPointer)CONCAT44(local_68._4_4_,fVar18);
        method_00 = (MethodInfo *)&local_68;
      }
      else {
        if (uVar3 == 0xbd074002) {
          bVar2 = System_String__op_Equality(pSVar16,StringLiteral_3508/*"Block"*/,(MethodInfo *)0x0);
          if (!bVar2) {
            return;
          }
          cVar5 = (pOVar17->fields).BBFPCBEFOLN;
          goto LAB_0351c9f0;
        }
        if (uVar3 != 0xf104dff9) {
          return;
        }
        bVar2 = System_String__op_Equality(pSVar16,StringLiteral_3403/*"BaseDamage"*/,(MethodInfo *)0x0);
        if (!bVar2) {
          return;
        }
        fVar20 = (pOVar17->fields).ICLMPILAAGC;
        fVar19 = 1.0;
        if ((pOVar17->fields).BBFPCBEFOLN != false) {
          local_70 = local_70 & 0xffffffff;
          if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_0456812c == '\0') {
            FUN_01bab630(&GameUtils_TypeInfo);
            DAT_0456812c = '\x01';
          }
          if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pMVar8 = GameUtils_TypeInfo->static_fields->NMHCNBDHLLL;
          if (((pMVar8 == (GameUtils_GNBEOEJBMKL_o *)0x0) ||
              (pOVar11 = (pOVar17->fields).HEMGHNOOJPI, pOVar11 == (Model_o *)0x0)) ||
             ((pPVar12 = (pOVar11->fields).FAPMJJBOFEF, pPVar12 == (ModelParameters_o *)0x0 ||
              (pFVar4 = (pPVar12->fields).ACHJNNOKEDK, pFVar4 == (FPLCEOJCPOD_o *)0x0))))
          goto LAB_0351ca60;
          FPLCEOJCPOD__KNMENIBLFGF
                    (pFVar4,(pMVar8->fields).NHPDFFAIJMF,(int32_t *)((long)&local_70 + 4),true,false
                     ,(MethodInfo *)0x0);
          if (DAT_0456812c == '\0') {
            FUN_01bab630(&GameUtils_TypeInfo);
            DAT_0456812c = '\x01';
          }
          if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pMVar8 = GameUtils_TypeInfo->static_fields->NMHCNBDHLLL;
          if (pMVar8 == (GameUtils_GNBEOEJBMKL_o *)0x0) goto LAB_0351ca60;
          local_90.fakeValueActive = (pMVar8->fields).MKANNAKGEEC.fields.fakeValueActive;
          local_90.inited = (pMVar8->fields).MKANNAKGEEC.fields.inited;
          local_90._18_2_ = *(undefined2 *)&(pMVar8->fields).MKANNAKGEEC.fields.field_0x12;
          local_90.hiddenValueOldByte4.fields =
               (pMVar8->fields).MKANNAKGEEC.fields.hiddenValueOldByte4.fields;
          local_90.fakeValue = (pMVar8->fields).MKANNAKGEEC.fields.fakeValue;
          local_90.currentCryptoKey = (pMVar8->fields).MKANNAKGEEC.fields.currentCryptoKey;
          local_90.hiddenValue = (pMVar8->fields).MKANNAKGEEC.fields.hiddenValue;
          fVar18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                             ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_90,
                              (MethodInfo *)0x0);
          fVar19 = exp2f(fVar18 * (float)local_70._4_4_);
        }
        fVar18 = 1.0;
        if (((pOVar17->fields).EPPIJIGMFFJ != false) &&
           (fVar18 = 1.0, (pOVar17->fields).PFFLOCBGFCH != (Model_o *)0x0)) {
          local_70 = local_70 & 0xffffffff00000000;
          if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_0456812d == '\0') {
            FUN_01bab630(&GameUtils_TypeInfo);
            DAT_0456812d = '\x01';
          }
          if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pMVar8 = GameUtils_TypeInfo->static_fields->BGAEBBMNCFD;
          if ((((pMVar8 == (GameUtils_GNBEOEJBMKL_o *)0x0) ||
               (pOVar11 = (pOVar17->fields).PFFLOCBGFCH, pOVar11 == (Model_o *)0x0)) ||
              (pPVar12 = (pOVar11->fields).FAPMJJBOFEF, pPVar12 == (ModelParameters_o *)0x0)) ||
             (pFVar4 = (pPVar12->fields).ACHJNNOKEDK, pFVar4 == (FPLCEOJCPOD_o *)0x0))
          goto LAB_0351ca60;
                    /* try { // try from 0351c784 to 0361c82f has its CatchHandler @ 0351c784
                       catch() { ... } // from try @ 0351c784 with catch @ 0351c784
                       catch() { ... } // from try @ 0351c868 with catch @ 0351c784
                       catch() { ... } // from try @ 0351c894 with catch @ 0351c784
                       catch() { ... } // from try @ 0351c8c4 with catch @ 0351c784
                       catch() { ... } // from try @ 0351c8f4 with catch @ 0351c784 */
          FPLCEOJCPOD__KNMENIBLFGF
                    (pFVar4,(pMVar8->fields).NHPDFFAIJMF,(int32_t *)&local_70,true,false,
                     (MethodInfo *)0x0);
          if (DAT_0456812d == '\0') {
            FUN_01bab630(&GameUtils_TypeInfo);
            DAT_0456812d = '\x01';
          }
          if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pMVar8 = GameUtils_TypeInfo->static_fields->BGAEBBMNCFD;
          if (pMVar8 == (GameUtils_GNBEOEJBMKL_o *)0x0) goto LAB_0351ca60;
          local_b0.fakeValueActive = (pMVar8->fields).MKANNAKGEEC.fields.fakeValueActive;
          local_b0.inited = (pMVar8->fields).MKANNAKGEEC.fields.inited;
          local_b0._18_2_ = *(undefined2 *)&(pMVar8->fields).MKANNAKGEEC.fields.field_0x12;
          local_b0.hiddenValueOldByte4.fields =
               (pMVar8->fields).MKANNAKGEEC.fields.hiddenValueOldByte4.fields;
          local_b0.fakeValue = (pMVar8->fields).MKANNAKGEEC.fields.fakeValue;
          local_b0.currentCryptoKey = (pMVar8->fields).MKANNAKGEEC.fields.currentCryptoKey;
          local_b0.hiddenValue = (pMVar8->fields).MKANNAKGEEC.fields.hiddenValue;
          fVar18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                             ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_b0,
                              (MethodInfo *)0x0);
          fVar18 = exp2f(fVar18 * (float)(int)local_70);
        }
        fVar18 = fVar19 * fVar20 * fVar18;
        local_68 = (Il2CppMethodPointer)CONCAT44(fVar18,(undefined4)local_68);
        method_00 = (MethodInfo *)((long)&local_68 + 4);
      }
LAB_0351c9c0:
                    /* try { // try from 0351c9c4 to 0361cac7 has its CatchHandler @ 0351c9c4
                       catch() { ... } // from try @ 0351c9c4 with catch @ 0351c9c4
                       catch() { ... } // from try @ 0351cb04 with catch @ 0351c9c4
                       catch() { ... } // from try @ 0351cb44 with catch @ 0351c9c4
                       catch() { ... } // from try @ 0351cb70 with catch @ 0351c9c4
                       catch() { ... } // from try @ 0351cb78 with catch @ 0351c9c4
                       catch() { ... } // from try @ 0351cba0 with catch @ 0351c9c4
                       catch() { ... } // from try @ 0351cbec with catch @ 0351c9c4
                       catch() { ... } // from try @ 0351cc0c with catch @ 0351c9c4
                       catch() { ... } // from try @ 0351cc3c with catch @ 0351c9c4 */
      pSVar16 = System_Single__ToString(fVar18,method_00);
      goto joined_r0x0351c9c8;
    }
    if (uVar3 != 0x87d09fa8) {
      if (uVar3 != 0x56478e64) {
        return;
      }
      bVar2 = System_String__op_Equality(pSVar16,StringLiteral_3532/*"BodyPart"*/,(MethodInfo *)0x0);
      if (!bVar2) {
        return;
      }
      pGVar7 = (pOVar17->fields).POPNNGCHBML;
      if ((pGVar7 != (ModelEdge_o *)0x0) && (HPACPFLKHPK != (MMFIDKMDADC_o *)0x0)) {
        pSVar16 = (pGVar7->fields).JLLJJPLJDMD;
        goto LAB_0351ca30;
      }
      goto LAB_0351ca60;
    }
                    /* try { // try from 0351c830 to 0361c837 has its CatchHandler @ 0351c8a8 */
                    /* try { // try from 0351c844 to 0361c84f has its CatchHandler @ 0351c8a0 */
    bVar2 = System_String__op_Equality(pSVar16,StringLiteral_4893/*"Critical"*/,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    cVar5 = (pOVar17->fields).EPPIJIGMFFJ;
LAB_0351c9f0:
    puVar10 = &StringLiteral_1567/*"0"*/;
    puVar14 = &StringLiteral_1606/*"1"*/;
    bVar2 = cVar5 == '\0';
  }
  if (!bVar2) {
    puVar10 = puVar14;
  }
  if (HPACPFLKHPK == (MMFIDKMDADC_o *)0x0) {
LAB_0351ca60:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar16 = (System_String_o *)*puVar10;
LAB_0351ca30:
  (HPACPFLKHPK->fields).HPACPFLKHPK = pSVar16;
  thunk_FUN_01c20e04(&HPACPFLKHPK->fields);
  return;
}


// ===== private void EIINLMAFNOL(Model BCKBBGCOMJD, NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC HPACPFLKHPK)  [RVA 0x341CA64]
// PerkInfoItem$$EIINLMAFNOL @ RVA 0x341CA64

void PerkInfoItem__EIINLMAFNOL
               (PerkInfoItem_o *__this,Model_o *BCKBBGCOMJD,
               NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,MMFIDKMDADC_o *HPACPFLKHPK,MethodInfo *method)

{
  System_Func_CNDPAJOLKFN__float__o **ppSVar1;
  MethodInfo *in_x5;
  System_Func_CNDPAJOLKFN__float__o *HECFKGPGKPF;
  
  if ((DAT_045680d0 & 1) == 0) {
    FUN_01bab630(&System_Func<Vector3f,_float>_TypeInfo);
    FUN_01bab630(&Method_HEFOANCOHDC_<>c_BIBIKIEFNPF__);
    FUN_01bab630(&PerkInfoItem_<>c_TypeInfo);
    DAT_045680d0 = 1;
  }
                    /* try { // try from 0351cac8 to 0361cacf has its CatchHandler @ 0351cb84 */
  if ((PerkInfoItem_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  HECFKGPGKPF = PerkInfoItem_<>c_TypeInfo->static_fields->__9__70_0;
  if (HECFKGPGKPF == (System_Func_CNDPAJOLKFN__float__o *)0x0) {
    if ((PerkInfoItem_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0351cafc to 0361cb03 has its CatchHandler @ 0351cb78 */
                    /* try { // try from 0351cb04 to 0361cb2b has its CatchHandler @ 0351c9c4 */
    HECFKGPGKPF = (System_Func_CNDPAJOLKFN__float__o *)
                  thunk_FUN_01bda818(System_Func<Vector3f,_float>_TypeInfo);
    System_Func<object,_float>___ctor();
                    /* try { // try from 0351cb2c to 0361cb33 has its CatchHandler @ 0351cbf0 */
    ppSVar1 = &PerkInfoItem_<>c_TypeInfo->static_fields->__9__70_0;
    *ppSVar1 = HECFKGPGKPF;
    thunk_FUN_01c20e04(ppSVar1,HECFKGPGKPF);
  }
                    /* try { // try from 0351cb3c to 0361cb43 has its CatchHandler @ 0351cbec */
  if (__this != (PerkInfoItem_o *)0x0) {
                    /* try { // try from 0351cb44 to 0361cb6b has its CatchHandler @ 0351c9c4 */
    PerkInfoItem__DEGNJDCECLI(__this,BCKBBGCOMJD,ACCIJLGMHOO,HPACPFLKHPK,HECFKGPGKPF,in_x5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private Model DDFBGPFCLHF(string KGLJICLJHEL, bool FOFCAILEKJD)  [RVA 0x341CC80]
// PerkInfoItem$$DDFBGPFCLHF @ RVA 0x341CC80

Model_o *
PerkInfoItem__DDFBGPFCLHF
          (PerkInfoItem_o *__this,System_String_o *KGLJICLJHEL,bool FOFCAILEKJD,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *arg2;
  Fight_o *pFVar2;
  System_String_o *pSVar3;
  Model_o *pOVar4;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_00;
  undefined1 local_5c [4];
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_045680d1 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Model>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Model>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Model>_get_Current__);
    FUN_01bab630(&Fight_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Model>_GetEnumerator__);
    FUN_01bab630(&PNCLBBMPHKB_TypeInfo);
    FUN_01bab630(&StringLiteral_20195/*"perk {0}. model {1} not found in battle. isPlayer:{2}"*/);
    DAT_045680d1 = 1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  if ((Fight_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&Fight_TypeInfo);
                    /* try { // try from 0351cd50 to 0361cd57 has its CatchHandler @ 0351ce84 */
    DAT_04565b7f = '\x01';
  }
  if ((Fight_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pFVar2 = Fight_TypeInfo->static_fields->IGABFCCGLCO;
  if (pFVar2 != (Fight_o *)0x0) {
                    /* try { // try from 0351cd78 to 0361cd7f has its CatchHandler @ 0351ce6c */
    __this_00 = (pFVar2->fields).IILLHHPGGKA;
    if (DAT_04565b7f == '\0') {
      FUN_01bab630(&Fight_TypeInfo);
      DAT_04565b7f = '\x01';
    }
                    /* try { // try from 0351cd94 to 0361cd9b has its CatchHandler @ 0351cde0 */
    if ((Fight_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0351cda8 to 0361cdb3 has its CatchHandler @ 0351cddc */
    if (Fight_TypeInfo->static_fields->IGABFCCGLCO == (Fight_o *)0x0) {
LAB_0351ceb0:
      pOVar4 = (Model_o *)0x0;
    }
    else {
      if (__this_00 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) goto LAB_0351ced4;
                    /* try { // try from 0351cdc0 to 0361cdc7 has its CatchHandler @ 0351ce80 */
                    /* try { // try from 0351cdd0 to 0361cdd3 has its CatchHandler @ 0351cdd8 */
                    /* try { // try from 0351cdd4 to 0361cdef has its CatchHandler @ 0351cc5c */
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_58,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<Model>_GetEnumerator__);
      do {
                    /* catch() { ... } // from try @ 0351cdd0 with catch @ 0351cdd8 */
                    /* catch() { ... } // from try @ 0351cda8 with catch @ 0351cddc */
                    /* catch() { ... } // from try @ 0351cd94 with catch @ 0351cde0 */
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_58,
                           Method_System_Collections_Generic_List_Enumerator<Model>_MoveNext__
                          );
        pOVar4 = (Model_o *)local_58.fields._current;
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_58,
                     Method_System_Collections_Generic_List_Enumerator<Model>_Dispose__);
                    /* try { // try from 0351ce48 to 0361ce4b has its CatchHandler @ 0351ce7c */
          pSVar3 = (__this->fields).JIJLBFGKNJK;
                    /* try { // try from 0351ce4c to 0361ce53 has its CatchHandler @ 0351ce78 */
          local_5c[0] = FOFCAILEKJD;
                    /* try { // try from 0351ce54 to 0361ce57 has its CatchHandler @ 0351ce74 */
                    /* try { // try from 0351ce58 to 0361ce5b has its CatchHandler @ 0351ce70 */
                    /* try { // try from 0351ce5c to 0361ce93 has its CatchHandler @ 0351cc5c */
          arg2 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_5c);
                    /* catch() { ... } // from try @ 0351cdf0 with catch @ 0351ce60 */
                    /* catch() { ... } // from try @ 0351cd78 with catch @ 0351ce6c */
                    /* catch() { ... } // from try @ 0351ce58 with catch @ 0351ce70 */
                    /* catch() { ... } // from try @ 0351ce54 with catch @ 0351ce74 */
                    /* catch() { ... } // from try @ 0351ce4c with catch @ 0351ce78 */
                    /* catch() { ... } // from try @ 0351ce48 with catch @ 0351ce7c */
                    /* catch() { ... } // from try @ 0351cdc0 with catch @ 0351ce80 */
          pSVar3 = System_String__Format
                             (StringLiteral_20195/*"perk {0}. model {1} not found in battle. isPlayer:{2}"*/,(Il2CppObject *)pSVar3,(Il2CppObject *)KGLJICLJHEL
                              ,arg2,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0351cd50 with catch @ 0351ce84 */
                    /* try { // try from 0351ce94 to 0361ce97 has its CatchHandler @ 0351cebc */
                    /* try { // try from 0351ce98 to 0361cec3 has its CatchHandler @ 0351cc5c */
          if ((PNCLBBMPHKB_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(PNCLBBMPHKB_TypeInfo);
          }
          PNCLBBMPHKB__CPKALHFIAPN(pSVar3,(MethodInfo *)0x0);
          goto LAB_0351ceb0;
        }
        if ((Model_o *)local_58.fields._current == (Model_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 0351cdf0 to 0361cdf3 has its CatchHandler @ 0351ce60 */
                    /* try { // try from 0351cdf4 to 0361ce2b has its CatchHandler @ 0351cc5c */
        bVar1 = Model__HODPOCMNNIN
                          ((Model_o *)local_58.fields._current,(MethodInfo *)0x0);
      } while ((bVar1 != FOFCAILEKJD) ||
              (bVar1 = System_String__op_Inequality
                                 (((Model_Fields *)((long)pOVar4 + 0x10))->NPFMOEOIEKM,
                                  KGLJICLJHEL,(MethodInfo *)0x0), bVar1));
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_58,Method_System_Collections_Generic_List_Enumerator<Model>_Dispose__)
      ;
                    /* try { // try from 0351ce2c to 0361ce47 has its CatchHandler @ 0351cee0 */
    }
                    /* catch() { ... } // from try @ 0351ce94 with catch @ 0351cebc */
                    /* try { // try from 0351cec4 to 0361cecb has its CatchHandler @ 0351cee0 */
                    /* try { // try from 0351cecc to 0361ced7 has its CatchHandler @ 0351cc5c */
    return pOVar4;
  }
LAB_0351ced4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BHHBMJILNLB(Model BCKBBGCOMJD, NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, HDBNGIBFEBA LOFMIFGLIKN, MMFIDKMDADC HPACPFLKHPK)  [RVA 0x341CF58]
// PerkInfoItem$$BHHBMJILNLB @ RVA 0x341CF58

void PerkInfoItem__BHHBMJILNLB
               (PerkInfoItem_o *__this,Model_o *BCKBBGCOMJD,
               NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,HDBNGIBFEBA_o *LOFMIFGLIKN,
               MMFIDKMDADC_o *HPACPFLKHPK,MethodInfo *method)

{
  System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *pSVar1;
  NILLKLHKLHG_DIPIFJPCFOE_o *pNVar2;
  System_String_o *pSVar3;
  System_String_o *FOBBLEELKOM;
  System_String_o *JNBKCMLPDAE;
  DistancePoint_o *__this_00;
  Model_o *pOVar4;
  ModelObject_o *pGVar5;
  ModelNode_o *pIVar6;
  int32_t ACCIHBHMFPN;
  Vector3f_o *pCVar7;
  float extraout_s0;
  float __this_01;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float local_34;
  
                    /* try { // try from 0351cf78 to 0361cf7f has its CatchHandler @ 0351cfd0 */
  if ((DAT_045680d2 & 1) == 0) {
                    /* try { // try from 0351cf80 to 0361cfc3 has its CatchHandler @ 0351cee4 */
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    FUN_01bab630(&DistancePoint_TypeInfo);
    FUN_01bab630(&StringLiteral_1324/*"-10000"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045680d2 = 1;
  }
                    /* try { // try from 0351cfc4 to 0361cfc7 has its CatchHandler @ 0351cfcc */
                    /* try { // try from 0351cfc8 to 0361cfe7 has its CatchHandler @ 0351cee4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0351cfc4 with catch @ 0351cfcc
                        */
  if ((ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) ||
     (pSVar1 = (ACCIJLGMHOO->fields).EEFPBGNAFFI,
     pSVar1 == (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0))
  goto LAB_0351d1e8;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0351cf78 with catch @ 0351cfd0
                        */
  if ((pSVar1->fields)._size < 2) {
    pSVar3 = StringLiteral_1324/*"-10000"*/;
    if (HPACPFLKHPK == (MMFIDKMDADC_o *)0x0) goto LAB_0351d1e8;
    goto LAB_0351d1c8;
  }
                    /* try { // try from 0351cfe8 to 0361cfeb has its CatchHandler @ 0351d014 */
                    /* try { // try from 0351cfec to 0361d01b has its CatchHandler @ 0351cee4 */
  pNVar2 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
           System_Collections_Generic_List<object>__get_Item
                     ((System_Collections_Generic_List_object__o *)pSVar1,0,
                      Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
  if (pNVar2 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0) goto LAB_0351d1e8;
  pSVar3 = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(pNVar2,(MethodInfo *)0x0);
  pSVar1 = (ACCIJLGMHOO->fields).EEFPBGNAFFI;
                    /* catch() { ... } // from try @ 0351cfe8 with catch @ 0351d014 */
  if ((pSVar1 == (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0) ||
     (pNVar2 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,1,
                          Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__
                         ), pNVar2 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0)) goto LAB_0351d1e8;
                    /* try { // try from 0351d01c to 0361d023 has its CatchHandler @ 0351d038 */
  FOBBLEELKOM = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(pNVar2,(MethodInfo *)0x0);
                    /* try { // try from 0351d024 to 0361d02f has its CatchHandler @ 0351cee4 */
  pSVar1 = (ACCIJLGMHOO->fields).EEFPBGNAFFI;
  if (pSVar1 == (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0)
  goto LAB_0351d1e8;
                    /* try { // try from 0351d030 to 0361d037 has its CatchHandler @ 0351d038 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0351d01c with catch @ 0351d038
                       catch(type#2 @ 00000000) { ... } // from try @ 0351d030 with catch @ 0351d038
                        */
  JNBKCMLPDAE = StringLiteral_1/*""*/;
  if (2 < (pSVar1->fields)._size) {
    pNVar2 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar1,2,
                        Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    if (pNVar2 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0) goto LAB_0351d1e8;
    JNBKCMLPDAE = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(pNVar2,(MethodInfo *)0x0);
  }
  __this_00 = (DistancePoint_o *)thunk_FUN_01bda818(DistancePoint_TypeInfo);
  DistancePoint___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (DistancePoint_o *)0x0) goto LAB_0351d1e8;
  DistancePoint__EOHMFJFFFIN(__this_00,pSVar3,FOBBLEELKOM,JNBKCMLPDAE,(MethodInfo *)0x0);
  local_34 = 0.0;
  if ((__this_00->fields).AKBDFFLEINL != 1) {
    if (BCKBBGCOMJD == (Model_o *)0x0) goto LAB_0351d1e8;
    __this_01 = (float)(*(__this_00->klass->vtable)._8_CJHJMGGINHP.methodPtr)
                                 (__this_00,(BCKBBGCOMJD->fields).FNEAAHOOHAA,
                                  (__this_00->klass->vtable)._8_CJHJMGGINHP.method);
    local_34 = __this_01;
    goto switchD_0351d0ec_caseD_5;
  }
  __this_01 = extraout_s0;
  switch((__this_00->fields).LOAFPIOGJAF) {
  case 1:
    if (BCKBBGCOMJD == (Model_o *)0x0) goto LAB_0351d1e8;
    pGVar5 = (BCKBBGCOMJD->fields).HMIAFJALFCJ;
    break;
  case 2:
    if ((BCKBBGCOMJD == (Model_o *)0x0) ||
       (pOVar4 = (BCKBBGCOMJD->fields).BPJMMBGIMNC, pOVar4 == (Model_o *)0x0))
    goto LAB_0351d1e8;
    pGVar5 = (pOVar4->fields).HMIAFJALFCJ;
    break;
  case 3:
    if (BCKBBGCOMJD == (Model_o *)0x0) goto LAB_0351d1e8;
    pOVar4 = (BCKBBGCOMJD->fields).NFMBPIPEKGF;
    if (pOVar4 == (Model_o *)0x0) goto switchD_0351d0ec_caseD_5;
    pGVar5 = (pOVar4->fields).HMIAFJALFCJ;
    if (pGVar5 == (ModelObject_o *)0x0) goto LAB_0351d1e8;
    pIVar6 = ModelObject__OCJAHBKIFNO(pGVar5,JNBKCMLPDAE,(MethodInfo *)0x0);
    __this_01 = extraout_s0_00;
    goto joined_r0x0351d1a0;
  case 4:
    if (BCKBBGCOMJD == (Model_o *)0x0) goto LAB_0351d1e8;
    ACCIHBHMFPN = 4;
    goto LAB_0351d180;
  default:
    goto switchD_0351d0ec_caseD_5;
  case 6:
    if (BCKBBGCOMJD == (Model_o *)0x0) goto LAB_0351d1e8;
    ACCIHBHMFPN = 6;
LAB_0351d180:
    pOVar4 = Model__GMBBOANEBJJ(BCKBBGCOMJD,ACCIHBHMFPN,(MethodInfo *)0x0);
    __this_01 = extraout_s0_01;
    if (pOVar4 != (Model_o *)0x0) {
      pGVar5 = (pOVar4->fields).HMIAFJALFCJ;
      if (pGVar5 == (ModelObject_o *)0x0) goto LAB_0351d1e8;
      pIVar6 = ModelObject__ILECMJOENMK(pGVar5,(MethodInfo *)0x0);
      __this_01 = extraout_s0_02;
joined_r0x0351d1a0:
      if (pIVar6 == (ModelNode_o *)0x0) goto switchD_0351d0ec_caseD_5;
      goto LAB_0351d1a4;
    }
    goto switchD_0351d0ec_caseD_5;
  }
  if ((pGVar5 != (ModelObject_o *)0x0) &&
     (pIVar6 = ModelObject__OCJAHBKIFNO(pGVar5,JNBKCMLPDAE,(MethodInfo *)0x0),
     pIVar6 != (ModelNode_o *)0x0)) {
LAB_0351d1a4:
    pCVar7 = (pIVar6->fields).CNMHHKAMGPI;
    if (pCVar7 != (Vector3f_o *)0x0) {
      __this_01 = (pCVar7->fields).super.OHHDBINAJCB;
      local_34 = __this_01;
switchD_0351d0ec_caseD_5:
      pSVar3 = System_Single__ToString(__this_01,(MethodInfo *)&local_34);
      if (HPACPFLKHPK != (MMFIDKMDADC_o *)0x0) {
LAB_0351d1c8:
        (HPACPFLKHPK->fields).HPACPFLKHPK = pSVar3;
        thunk_FUN_01c20e04(&HPACPFLKHPK->fields);
        return;
      }
    }
  }
LAB_0351d1e8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool ECODHNNKEBC(string KGLJICLJHEL, out string CJNHFNHJHPE)  [RVA 0x341D1EC]
// PerkInfoItem$$ECODHNNKEBC @ RVA 0x341D1EC

bool PerkInfoItem__ECODHNNKEBC
               (PerkInfoItem_o *__this,System_String_o *KGLJICLJHEL,System_String_o **CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_o *pSVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *local_28;
  
  if ((DAT_045680d3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredString>_TryGetValue__
                );
    DAT_045680d3 = 1;
  }
  local_28 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).NBOMAJCMIIL;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (__this_00,(Il2CppObject *)KGLJICLJHEL,(Il2CppObject **)&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_ObscuredString>_TryGetValue__
                      );
    pSVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                       (local_28,(MethodInfo *)0x0);
    *CJNHFNHJHPE = pSVar2;
    thunk_FUN_01c20e04(CJNHFNHJHPE,pSVar2);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FICAPACFMIA(Model BCKBBGCOMJD, NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, HDBNGIBFEBA LOFMIFGLIKN, MMFIDKMDADC HPACPFLKHPK)  [RVA 0x341D284]
// PerkInfoItem$$FICAPACFMIA @ RVA 0x341D284

void PerkInfoItem__FICAPACFMIA
               (PerkInfoItem_o *__this,Model_o *BCKBBGCOMJD,
               NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,HDBNGIBFEBA_o *LOFMIFGLIKN,
               MMFIDKMDADC_o *HPACPFLKHPK,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t EMFGEOPENPI;
  int32_t iVar3;
  System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *pSVar4;
  NILLKLHKLHG_DIPIFJPCFOE_o *pNVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  System_Collections_Generic_Dictionary_string__HEFOANCOHDC_BLLOEEDBDEO__o *pSVar8;
  undefined8 *puVar9;
  float CJNHFNHJHPE;
  float local_34;
  
  if ((DAT_045680d4 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_HEFOANCOHDC_BLLOEEDBDEO>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_HEFOANCOHDC_BLLOEEDBDEO>_get_Item__
                );
    FUN_01bab630(&PerkInfoItem_TypeInfo);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    FUN_01bab630(&StringLiteral_11444/*"RoundingError"*/);
    FUN_01bab630(&StringLiteral_21606/*"trunc"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045680d4 = 1;
  }
  pSVar7 = StringLiteral_21606/*"trunc"*/;
  local_34 = 0.0;
  if ((ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) ||
     (pSVar4 = (ACCIJLGMHOO->fields).EEFPBGNAFFI,
     pSVar4 == (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0))
  goto LAB_0351d5a0;
  iVar1 = (pSVar4->fields)._size;
  if ((iVar1 < 1) || (3 < iVar1)) {
LAB_0351d4c0:
    if (HPACPFLKHPK == (MMFIDKMDADC_o *)0x0) goto LAB_0351d5a0;
                    /* try { // try from 0351d4c4 to 0361d55f has its CatchHandler @ 0351d4c4
                       catch() { ... } // from try @ 0351d4c4 with catch @ 0351d4c4
                       catch() { ... } // from try @ 0351d568 with catch @ 0351d4c4
                       catch() { ... } // from try @ 0351d5a8 with catch @ 0351d4c4
                       catch() { ... } // from try @ 0351d5cc with catch @ 0351d4c4
                       catch() { ... } // from try @ 0351d5fc with catch @ 0351d4c4 */
    puVar9 = &StringLiteral_11444/*"RoundingError"*/;
LAB_0351d4cc:
    pSVar7 = (System_String_o *)*puVar9;
  }
  else {
    pNVar5 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar4,0,
                        Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    if (pNVar5 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0) goto LAB_0351d5a0;
    pSVar6 = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(pNVar5,(MethodInfo *)0x0);
    CJNHFNHJHPE = PCOEHCPGBBG__OFFODGKLGOP(pSVar6,0.0,(MethodInfo *)0x0);
    pSVar4 = (ACCIJLGMHOO->fields).EEFPBGNAFFI;
    if (pSVar4 == (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0)
    goto LAB_0351d5a0;
    if ((pSVar4->fields)._size < 2) {
      EMFGEOPENPI = 0;
    }
    else {
      pNVar5 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar4,1,
                          Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__
                         );
      if (pNVar5 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0) goto LAB_0351d5a0;
      pSVar6 = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(pNVar5,(MethodInfo *)0x0);
      EMFGEOPENPI = PCOEHCPGBBG__JBGCINPPLAC(pSVar6,0,(MethodInfo *)0x0);
      pSVar4 = (ACCIJLGMHOO->fields).EEFPBGNAFFI;
      if (pSVar4 == (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0)
      goto LAB_0351d5a0;
    }
    if ((pSVar4->fields)._size == 3) {
      pNVar5 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar4,2,
                          Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__
                         );
      if (pNVar5 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0) goto LAB_0351d5a0;
      pSVar7 = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(pNVar5,(MethodInfo *)0x0);
    }
    if ((PerkInfoItem_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar8 = PerkInfoItem_TypeInfo->static_fields->MHONJANODKB;
    if (pSVar8 == (System_Collections_Generic_Dictionary_string__HEFOANCOHDC_BLLOEEDBDEO__o *)0x0)
    goto LAB_0351d5a0;
    bVar2 = System_Collections_Generic_Dictionary<object,_Int32Enum>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8,
                       (Il2CppObject *)pSVar7,
                       Method_System_Collections_Generic_Dictionary<string,_HEFOANCOHDC_BLLOEEDBDEO>_ContainsKey__
                      );
    if (!bVar2) goto LAB_0351d4c0;
    if ((PerkInfoItem_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar8 = PerkInfoItem_TypeInfo->static_fields->MHONJANODKB;
    if (pSVar8 == (System_Collections_Generic_Dictionary_string__HEFOANCOHDC_BLLOEEDBDEO__o *)0x0)
    goto LAB_0351d5a0;
    iVar3 = System_Collections_Generic_Dictionary<object,_Int32Enum>__get_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8,
                       (Il2CppObject *)pSVar7,
                       Method_System_Collections_Generic_Dictionary<string,_HEFOANCOHDC_BLLOEEDBDEO>_get_Item__
                      );
    switch(iVar3) {
    case 0:
      if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      local_34 = LIIFLGALGNK__OCNBCNPMNBC(CJNHFNHJHPE,EMFGEOPENPI,(MethodInfo *)0x0);
      break;
    case 1:
      if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      local_34 = LIIFLGALGNK__ADIGKHKAAKN(CJNHFNHJHPE,EMFGEOPENPI,(MethodInfo *)0x0);
      break;
    case 2:
      if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      local_34 = LIIFLGALGNK__AONJLBECFNG(CJNHFNHJHPE,EMFGEOPENPI,(MethodInfo *)0x0);
      break;
    case 3:
                    /* try { // try from 0351d560 to 0361d567 has its CatchHandler @ 0351d5b0 */
                    /* try { // try from 0351d568 to 0361d5a3 has its CatchHandler @ 0351d4c4 */
      if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      local_34 = LIIFLGALGNK__AHKJACGMFMB(CJNHFNHJHPE,EMFGEOPENPI,(MethodInfo *)0x0);
      break;
    default:
      if (HPACPFLKHPK == (MMFIDKMDADC_o *)0x0) goto LAB_0351d5a0;
      puVar9 = &StringLiteral_1/*""*/;
      goto LAB_0351d4cc;
    }
    pSVar7 = System_Single__ToString(local_34,(MethodInfo *)&local_34);
    if (HPACPFLKHPK == (MMFIDKMDADC_o *)0x0) {
LAB_0351d5a0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  (HPACPFLKHPK->fields).HPACPFLKHPK = pSVar7;
  thunk_FUN_01c20e04(&HPACPFLKHPK->fields);
  return;
}


// ===== public static float EABDBJONHNG(float FBEFHEEKKAP)  [RVA 0x341D5A4]
// PerkInfoItem$$EABDBJONHNG @ RVA 0x341D5A4

float PerkInfoItem__EABDBJONHNG(float FBEFHEEKKAP,MethodInfo *method)

{
  DFONLJGONFN_o *pDVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_d0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_b0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_90;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_70;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_50;
  
                    /* try { // try from 0351d5a4 to 0361d5a7 has its CatchHandler @ 0351d5ac */
                    /* try { // try from 0351d5a8 to 0361d5c7 has its CatchHandler @ 0351d4c4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0351d5a4 with catch @ 0351d5ac
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0351d560 with catch @ 0351d5b0
                        */
                    /* try { // try from 0351d5c8 to 0361d5cb has its CatchHandler @ 0351d5ec */
                    /* try { // try from 0351d5cc to 0361d5f3 has its CatchHandler @ 0351d4c4 */
  if ((DAT_045680d5 & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_045680d5 = 1;
  }
                    /* catch() { ... } // from try @ 0351d5c8 with catch @ 0351d5ec */
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0351d5f4 to 0361d5fb has its CatchHandler @ 0351d610 */
                    /* try { // try from 0351d5fc to 0361d607 has its CatchHandler @ 0351d4c4 */
  if (DAT_04568079 == '\0') {
                    /* try { // try from 0351d608 to 0361d60f has its CatchHandler @ 0351d610 */
    FUN_01bab630(&GameUtils_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0351d5f4 with catch @ 0351d610
                       catch(type#2 @ 00000000) { ... } // from try @ 0351d608 with catch @ 0351d610
                        */
    DAT_04568079 = '\x01';
  }
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar1 = GameUtils_TypeInfo->static_fields->BDOBGMIFOAC;
  if (pDVar1 != (DFONLJGONFN_o *)0x0) {
    if (0.0 <= FBEFHEEKKAP) {
      local_90.fakeValueActive = (pDVar1->fields).FFLNNBLKCCB.fields.fakeValueActive;
      local_90.inited = (pDVar1->fields).FFLNNBLKCCB.fields.inited;
      local_90._18_2_ = *(undefined2 *)&(pDVar1->fields).FFLNNBLKCCB.fields.field_0x12;
      local_90.hiddenValueOldByte4.fields =
           (pDVar1->fields).FFLNNBLKCCB.fields.hiddenValueOldByte4.fields;
      local_90.fakeValue = (pDVar1->fields).FFLNNBLKCCB.fields.fakeValue;
      local_90.currentCryptoKey = (pDVar1->fields).FFLNNBLKCCB.fields.currentCryptoKey;
      local_90.hiddenValue = (pDVar1->fields).FFLNNBLKCCB.fields.hiddenValue;
      fVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_90,
                         (MethodInfo *)0x0);
      if (DAT_04568079 == '\0') {
        FUN_01bab630(&GameUtils_TypeInfo);
        DAT_04568079 = '\x01';
      }
      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pDVar1 = GameUtils_TypeInfo->static_fields->BDOBGMIFOAC;
      if (pDVar1 != (DFONLJGONFN_o *)0x0) {
        local_b0.fakeValueActive = (pDVar1->fields).FFLNNBLKCCB.fields.fakeValueActive;
        local_b0.inited = (pDVar1->fields).FFLNNBLKCCB.fields.inited;
        local_b0._18_2_ = *(undefined2 *)&(pDVar1->fields).FFLNNBLKCCB.fields.field_0x12;
        local_b0.hiddenValueOldByte4.fields =
             (pDVar1->fields).FFLNNBLKCCB.fields.hiddenValueOldByte4.fields;
        local_b0.fakeValue = (pDVar1->fields).FFLNNBLKCCB.fields.fakeValue;
        local_b0.currentCryptoKey = (pDVar1->fields).FFLNNBLKCCB.fields.currentCryptoKey;
        local_b0.hiddenValue = (pDVar1->fields).FFLNNBLKCCB.fields.hiddenValue;
        fVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_b0,
                           (MethodInfo *)0x0);
        if (DAT_04568079 == '\0') {
          FUN_01bab630(&GameUtils_TypeInfo);
          DAT_04568079 = '\x01';
        }
        if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pDVar1 = GameUtils_TypeInfo->static_fields->BDOBGMIFOAC;
        if (pDVar1 != (DFONLJGONFN_o *)0x0) {
          local_d0.fakeValueActive = (pDVar1->fields).CHGOIPBCBDO.fields.fakeValueActive;
          local_d0.inited = (pDVar1->fields).CHGOIPBCBDO.fields.inited;
          local_d0._18_2_ = *(undefined2 *)&(pDVar1->fields).CHGOIPBCBDO.fields.field_0x12;
          local_d0.hiddenValueOldByte4.fields =
               (pDVar1->fields).CHGOIPBCBDO.fields.hiddenValueOldByte4.fields;
          local_d0.fakeValue = (pDVar1->fields).CHGOIPBCBDO.fields.fakeValue;
          local_d0.currentCryptoKey = (pDVar1->fields).CHGOIPBCBDO.fields.currentCryptoKey;
          local_d0.hiddenValue = (pDVar1->fields).CHGOIPBCBDO.fields.hiddenValue;
          fVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_d0,
                             (MethodInfo *)0x0);
          fVar4 = exp2f(-FBEFHEEKKAP / fVar4);
          return fVar2 - (fVar3 + -1.0) * fVar4;
        }
      }
    }
    else {
      local_50.fakeValueActive = (pDVar1->fields).GOBFFOHNAFL.fields.fakeValueActive;
      local_50.inited = (pDVar1->fields).GOBFFOHNAFL.fields.inited;
      local_50._18_2_ = *(undefined2 *)&(pDVar1->fields).GOBFFOHNAFL.fields.field_0x12;
      local_50.hiddenValueOldByte4.fields =
           (pDVar1->fields).GOBFFOHNAFL.fields.hiddenValueOldByte4.fields;
      local_50.fakeValue = (pDVar1->fields).GOBFFOHNAFL.fields.fakeValue;
      local_50.currentCryptoKey = (pDVar1->fields).GOBFFOHNAFL.fields.currentCryptoKey;
      local_50.hiddenValue = (pDVar1->fields).GOBFFOHNAFL.fields.hiddenValue;
      fVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_50,
                         (MethodInfo *)0x0);
      if (DAT_04568079 == '\0') {
        FUN_01bab630(&GameUtils_TypeInfo);
        DAT_04568079 = '\x01';
      }
      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pDVar1 = GameUtils_TypeInfo->static_fields->BDOBGMIFOAC;
      if (pDVar1 != (DFONLJGONFN_o *)0x0) {
        local_70.fakeValueActive = (pDVar1->fields).CHGOIPBCBDO.fields.fakeValueActive;
        local_70.inited = (pDVar1->fields).CHGOIPBCBDO.fields.inited;
        local_70._18_2_ = *(undefined2 *)&(pDVar1->fields).CHGOIPBCBDO.fields.field_0x12;
        local_70.hiddenValueOldByte4.fields =
             (pDVar1->fields).CHGOIPBCBDO.fields.hiddenValueOldByte4.fields;
        local_70.fakeValue = (pDVar1->fields).CHGOIPBCBDO.fields.fakeValue;
        local_70.currentCryptoKey = (pDVar1->fields).CHGOIPBCBDO.fields.currentCryptoKey;
        local_70.hiddenValue = (pDVar1->fields).CHGOIPBCBDO.fields.hiddenValue;
        fVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_70,
                           (MethodInfo *)0x0);
        fVar3 = exp2f(FBEFHEEKKAP / fVar3);
        return fVar2 + fVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AEBKCLNFHDI(Model BCKBBGCOMJD, NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC HPACPFLKHPK)  [RVA 0x341D7D0]
// PerkInfoItem$$AEBKCLNFHDI @ RVA 0x341D7D0

void PerkInfoItem__AEBKCLNFHDI
               (PerkInfoItem_o *__this,Model_o *BCKBBGCOMJD,
               NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,MMFIDKMDADC_o *HPACPFLKHPK,MethodInfo *method)

{
  System_Func_CNDPAJOLKFN__float__o **ppSVar1;
  MethodInfo *in_x5;
  System_Func_CNDPAJOLKFN__float__o *HECFKGPGKPF;
  
  if ((DAT_045680d6 & 1) == 0) {
    FUN_01bab630(&System_Func<Vector3f,_float>_TypeInfo);
    FUN_01bab630(&Method_HEFOANCOHDC_<>c_KOFMAKGKBKK__);
    FUN_01bab630(&PerkInfoItem_<>c_TypeInfo);
    DAT_045680d6 = 1;
  }
  if ((PerkInfoItem_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  HECFKGPGKPF = PerkInfoItem_<>c_TypeInfo->static_fields->__9__72_0;
  if (HECFKGPGKPF == (System_Func_CNDPAJOLKFN__float__o *)0x0) {
    if ((PerkInfoItem_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    HECFKGPGKPF = (System_Func_CNDPAJOLKFN__float__o *)
                  thunk_FUN_01bda818(System_Func<Vector3f,_float>_TypeInfo);
    System_Func<object,_float>___ctor();
    ppSVar1 = &PerkInfoItem_<>c_TypeInfo->static_fields->__9__72_0;
    *ppSVar1 = HECFKGPGKPF;
    thunk_FUN_01c20e04(ppSVar1,HECFKGPGKPF);
  }
  if (__this != (PerkInfoItem_o *)0x0) {
    PerkInfoItem__DEGNJDCECLI(__this,BCKBBGCOMJD,ACCIJLGMHOO,HPACPFLKHPK,HECFKGPGKPF,in_x5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PBMDELGDHPJ(Model BCKBBGCOMJD, NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, HDBNGIBFEBA LOFMIFGLIKN, MMFIDKMDADC HPACPFLKHPK)  [RVA 0x341D8D8]
// PerkInfoItem$$PBMDELGDHPJ @ RVA 0x341D8D8

void PerkInfoItem__PBMDELGDHPJ
               (PerkInfoItem_o *__this,Model_o *BCKBBGCOMJD,
               NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,HDBNGIBFEBA_o *LOFMIFGLIKN,
               MMFIDKMDADC_o *HPACPFLKHPK,MethodInfo *method)

{
  bool bVar1;
  Fight_o *pFVar2;
  Model_o *extraout_x1;
  Model_o *extraout_x1_00;
  Model_o *extraout_x1_01;
  System_String_o *pSVar3;
  int32_t local_24;
  
  if ((DAT_045680d7 & 1) == 0) {
    FUN_01bab630(&Fight_TypeInfo);
    FUN_01bab630(&StringLiteral_13797/*"TimeLeft"*/);
    FUN_01bab630(&StringLiteral_11442/*"RoundTime"*/);
    FUN_01bab630(&StringLiteral_9653/*"Number"*/);
    FUN_01bab630(&StringLiteral_13803/*"TimePassed"*/);
    DAT_045680d7 = 1;
    BCKBBGCOMJD = extraout_x1;
  }
  local_24 = 0;
  if ((Fight_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Fight_TypeInfo,BCKBBGCOMJD);
    BCKBBGCOMJD = extraout_x1_00;
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&Fight_TypeInfo);
    DAT_04565b7f = '\x01';
    BCKBBGCOMJD = extraout_x1_01;
  }
  if ((Fight_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Fight_TypeInfo,BCKBBGCOMJD);
  }
  if (Fight_TypeInfo->static_fields->IGABFCCGLCO == (Fight_o *)0x0) {
    return;
  }
  if (ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
    pSVar3 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
    bVar1 = System_String__op_Equality(pSVar3,StringLiteral_9653/*"Number"*/,(MethodInfo *)0x0);
    if (bVar1) {
      if ((Fight_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7f == '\0') {
        FUN_01bab630(&Fight_TypeInfo);
        DAT_04565b7f = '\x01';
      }
      if ((Fight_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pFVar2 = Fight_TypeInfo->static_fields->IGABFCCGLCO;
      if (pFVar2 == (Fight_o *)0x0) goto LAB_0351dba0;
      local_24 = Fight__KHNMPEFMNFN(pFVar2,(MethodInfo *)0x0);
    }
    else {
      bVar1 = System_String__op_Equality(pSVar3,StringLiteral_13797/*"TimeLeft"*/,(MethodInfo *)0x0);
      if (bVar1) {
        if ((Fight_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7f == '\0') {
          FUN_01bab630(&Fight_TypeInfo);
          DAT_04565b7f = '\x01';
        }
        if ((Fight_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pFVar2 = Fight_TypeInfo->static_fields->IGABFCCGLCO;
        if (pFVar2 == (Fight_o *)0x0) goto LAB_0351dba0;
        local_24 = Fight__EJLDPOFMFGE(pFVar2,(MethodInfo *)0x0);
      }
      else {
        bVar1 = System_String__op_Equality(pSVar3,StringLiteral_13803/*"TimePassed"*/,(MethodInfo *)0x0);
        if (bVar1) {
          if ((Fight_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b7f == '\0') {
            FUN_01bab630(&Fight_TypeInfo);
            DAT_04565b7f = '\x01';
          }
          if ((Fight_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pFVar2 = Fight_TypeInfo->static_fields->IGABFCCGLCO;
          if (pFVar2 == (Fight_o *)0x0) goto LAB_0351dba0;
          local_24 = Fight__OCBCAFNHINO(pFVar2,(MethodInfo *)0x0);
        }
        else {
          bVar1 = System_String__op_Equality(pSVar3,StringLiteral_11442/*"RoundTime"*/,(MethodInfo *)0x0);
          if (!bVar1) {
            return;
          }
          if ((Fight_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b7f == '\0') {
            FUN_01bab630(&Fight_TypeInfo);
            DAT_04565b7f = '\x01';
          }
          if ((Fight_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pFVar2 = Fight_TypeInfo->static_fields->IGABFCCGLCO;
          if (pFVar2 == (Fight_o *)0x0) goto LAB_0351dba0;
          local_24 = Fight__DDCDLNIBKJP(pFVar2,(MethodInfo *)0x0);
        }
      }
    }
    pSVar3 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
    if (HPACPFLKHPK != (MMFIDKMDADC_o *)0x0) {
      (HPACPFLKHPK->fields).HPACPFLKHPK = pSVar3;
      thunk_FUN_01c20e04(&HPACPFLKHPK->fields,pSVar3);
      return;
    }
  }
LAB_0351dba0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public PerkInfoItem FAOBHLCDKJI(List<MGNDHCBAPEN<string, string>> PCIHAENKBGL, XmlNode KDMPIDEEPMP)  [RVA 0x341DBA4]
// PerkInfoItem$$FAOBHLCDKJI @ RVA 0x341DBA4

PerkInfoItem_o *
PerkInfoItem__FAOBHLCDKJI
          (PerkInfoItem_o *__this,
          System_Collections_Generic_List_MGNDHCBAPEN_string__string___o *PCIHAENKBGL,
          System_Xml_XmlNode_o *KDMPIDEEPMP,MethodInfo *method)

{
  Il2CppClass *name;
  void *pvVar1;
  bool bVar2;
  FOKJBDHLIMG_o *__this_00;
  PerkInfoItem_o *pHVar3;
  System_Xml_XmlDocument_o *__this_01;
  long lVar4;
  long *plVar5;
  System_Xml_XmlElement_o *pSVar6;
  System_Xml_XmlAttributeCollection_o *pSVar7;
  System_Xml_XmlAttribute_o *node;
  System_Xml_XmlDocument_o *__this_02;
  System_Xml_XmlNode_o **ppSVar8;
  System_Xml_XmlDocument_o **ppSVar9;
  System_Xml_XmlNode_o *pSVar10;
  MethodInfo *method_00;
  undefined1 auVar11 [16];
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar12;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_045680d8 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<MGNDHCBAPEN<string,_string>>__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_string>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_string>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_string>>_get_Current__
                );
    FUN_01bab630(&PerkInfoItem_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_string>>_GetEnumerator__
                );
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    FUN_01bab630(&StringLiteral_11876/*"Set"*/);
    FUN_01bab630(&StringLiteral_11030/*"RatingEvaluation"*/);
    FUN_01bab630(&StringLiteral_10213/*"Perk"*/);
    DAT_045680d8 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = GameUtils_TypeInfo->static_fields->DDMMFEDBMCC;
  if (__this_00 == (FOKJBDHLIMG_o *)0x0) goto LAB_0351e018;
  pHVar3 = FOKJBDHLIMG__JMMDGEOBMOC(__this_00,(__this->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
  __this_01 = (System_Xml_XmlDocument_o *)thunk_FUN_01bda818(System_Xml_XmlDocument_TypeInfo);
  System_Xml_XmlDocument___ctor(__this_01,(MethodInfo *)0x0);
  if ((pHVar3 != (PerkInfoItem_o *)0x0) &&
     (pSVar10 = (pHVar3->fields).DCDJOJGHJEB, pSVar10 != (System_Xml_XmlNode_o *)0x0)) {
    EIABCPKDEBD__DGPOFACHGMP((System_Xml_XmlNode_o *)__this_01,pSVar10,(MethodInfo *)0x0);
  }
  bVar2 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)PCIHAENKBGL,
                     Method_DJNBJHPDKDP_OBECCOPBADO<MGNDHCBAPEN<string,_string>>__);
  if (!bVar2) {
    if (__this_01 == (System_Xml_XmlDocument_o *)0x0) goto LAB_0351e018;
    lVar4 = (*(__this_01->klass->vtable)._51_get_Item.methodPtr)
                      (__this_01,StringLiteral_10213/*"Perk"*/,(__this_01->klass->vtable)._51_get_Item.method)
    ;
    if (lVar4 == 0) {
LAB_0351dd58:
      lVar4 = (*(__this_01->klass->vtable)._51_get_Item.methodPtr)
                        (__this_01,StringLiteral_10213/*"Perk"*/,
                         (__this_01->klass->vtable)._51_get_Item.method);
      if (lVar4 == 0) {
        EIABCPKDEBD__BHPIHHJHELJ(__this_01,StringLiteral_10213/*"Perk"*/,(MethodInfo *)0x0);
      }
      pSVar10 = (System_Xml_XmlNode_o *)
                (*(__this_01->klass->vtable)._51_get_Item.methodPtr)
                          (__this_01,StringLiteral_10213/*"Perk"*/,
                           (__this_01->klass->vtable)._51_get_Item.method);
      pSVar6 = EIABCPKDEBD__BHPIHHJHELJ(pSVar10,StringLiteral_11876/*"Set"*/,(MethodInfo *)0x0);
    }
    else {
      plVar5 = (long *)(*(__this_01->klass->vtable)._51_get_Item.methodPtr)
                                 (__this_01,StringLiteral_10213/*"Perk"*/,
                                  (__this_01->klass->vtable)._51_get_Item.method);
      if (plVar5 == (long *)0x0) goto LAB_0351e018;
      pSVar6 = (System_Xml_XmlElement_o *)
               (**(code **)(*plVar5 + 0x468))
                         (plVar5,StringLiteral_11876/*"Set"*/,*(undefined8 *)(*plVar5 + 0x470));
      if (pSVar6 == (System_Xml_XmlElement_o *)0x0) goto LAB_0351dd58;
    }
    if (PCIHAENKBGL == (System_Collections_Generic_List_MGNDHCBAPEN_string__string___o *)0x0)
    goto LAB_0351e018;
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)PCIHAENKBGL,
               Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_string>>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_string>>_MoveNext__
                        );
      if (!bVar2) break;
      if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (pSVar6 == (System_Xml_XmlElement_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      name = local_70.fields._current[1].klass;
      pvVar1 = local_70.fields._current[1].monitor;
      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
               (*(pSVar6->klass->vtable)._16_get_Attributes.methodPtr)
                         (pSVar6,(pSVar6->klass->vtable)._16_get_Attributes.method);
      if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      node = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar7,(System_String_o *)name,(MethodInfo *)0x0);
      if (node == (System_Xml_XmlAttribute_o *)0x0) {
        __this_02 = (System_Xml_XmlDocument_o *)
                    (*(pSVar6->klass->vtable)._17_get_OwnerDocument.methodPtr)
                              (pSVar6,(pSVar6->klass->vtable)._17_get_OwnerDocument.method);
        if (__this_02 == (System_Xml_XmlDocument_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        node = System_Xml_XmlDocument__CreateAttribute
                         (__this_02,(System_String_o *)name,(MethodInfo *)0x0);
        pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar6->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar6,(pSVar6->klass->vtable)._16_get_Attributes.method);
        if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Xml_XmlAttributeCollection__Append(pSVar7,node,(MethodInfo *)0x0);
        if (node == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
      (*(node->klass->vtable)._10_set_Value.methodPtr)
                (node,pvVar1,(node->klass->vtable)._10_set_Value.method);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,
               Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_string>>_Dispose__
              );
  }
  if (KDMPIDEEPMP != (System_Xml_XmlNode_o *)0x0) {
    if (__this_01 == (System_Xml_XmlDocument_o *)0x0) goto LAB_0351e018;
    lVar4 = (*(__this_01->klass->vtable)._51_get_Item.methodPtr)
                      (__this_01,StringLiteral_10213/*"Perk"*/,(__this_01->klass->vtable)._51_get_Item.method)
    ;
    if (lVar4 != 0) {
      plVar5 = (long *)(*(__this_01->klass->vtable)._51_get_Item.methodPtr)
                                 (__this_01,StringLiteral_10213/*"Perk"*/,
                                  (__this_01->klass->vtable)._51_get_Item.method);
      if (plVar5 == (long *)0x0) goto LAB_0351e018;
      lVar4 = (**(code **)(*plVar5 + 0x468))
                        (plVar5,StringLiteral_11030/*"RatingEvaluation"*/,*(undefined8 *)(*plVar5 + 0x470));
      if (lVar4 != 0) goto LAB_0351df60;
    }
    lVar4 = (*(__this_01->klass->vtable)._51_get_Item.methodPtr)
                      (__this_01,StringLiteral_10213/*"Perk"*/,(__this_01->klass->vtable)._51_get_Item.method)
    ;
    if (lVar4 == 0) {
      EIABCPKDEBD__BHPIHHJHELJ(__this_01,StringLiteral_10213/*"Perk"*/,(MethodInfo *)0x0);
    }
    pSVar10 = (System_Xml_XmlNode_o *)
              (*(__this_01->klass->vtable)._51_get_Item.methodPtr)
                        (__this_01,StringLiteral_10213/*"Perk"*/,
                         (__this_01->klass->vtable)._51_get_Item.method);
    EIABCPKDEBD__DGPOFACHGMP(pSVar10,KDMPIDEEPMP,(MethodInfo *)0x0);
  }
LAB_0351df60:
  auVar11 = thunk_FUN_01bda818(PerkInfoItem_TypeInfo);
  pHVar3 = auVar11._0_8_;
  PerkInfoItem___ctor(pHVar3,auVar11._8_8_);
  if (__this_01 != (System_Xml_XmlDocument_o *)0x0) {
    method_00 = (__this_01->klass->vtable)._51_get_Item.method;
    pSVar10 = (System_Xml_XmlNode_o *)
              (*(__this_01->klass->vtable)._51_get_Item.methodPtr)(__this_01,StringLiteral_10213/*"Perk"*/);
    if (pHVar3 != (PerkInfoItem_o *)0x0) {
      PerkInfoItem__HNIHOIAMDPC(pHVar3,pSVar10,method_00);
      (pHVar3->fields).AEIJFFBOBCP = (__this->fields).AEIJFFBOBCP;
      CVar12 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
               CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(true,(MethodInfo *)0x0);
      (pHVar3->fields).JFMAEFOHLDF.fields = CVar12;
      ppSVar8 = &(pHVar3->fields).DCDJOJGHJEB;
      *ppSVar8 = (System_Xml_XmlNode_o *)0x0;
      thunk_FUN_01c20e04(ppSVar8,0);
      ppSVar9 = &(pHVar3->fields).DHNEDFGMFGM;
      *ppSVar9 = (System_Xml_XmlDocument_o *)0x0;
      thunk_FUN_01c20e04(ppSVar9,0);
      return pHVar3;
    }
  }
LAB_0351e018:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GAKBKBOMKHP(Model BCKBBGCOMJD, NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, HDBNGIBFEBA LOFMIFGLIKN, MMFIDKMDADC HPACPFLKHPK)  [RVA 0x341F1A0]
// PerkInfoItem$$GAKBKBOMKHP @ RVA 0x341F1A0

void PerkInfoItem__GAKBKBOMKHP
               (PerkInfoItem_o *__this,Model_o *BCKBBGCOMJD,
               NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,HDBNGIBFEBA_o *LOFMIFGLIKN,
               MMFIDKMDADC_o *HPACPFLKHPK,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  Roster_o *__this_00;
  InfoAnimation_o *pEVar5;
  System_Text_StringBuilder_o *__this_01;
  ModelObject_o *pGVar6;
  System_String_StaticFields *pSVar7;
  System_Collections_Generic_List_string__o *__this_02;
  System_String_o *pSVar8;
  int index;
  float fVar9;
  int32_t local_54;
  
  if ((DAT_045680d9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_2968/*"Animation"*/);
    FUN_01bab630(&StringLiteral_9292/*"NHeel_2"*/);
    FUN_01bab630(&StringLiteral_22485/*"|"*/);
    FUN_01bab630(&StringLiteral_8409/*"Level"*/);
    FUN_01bab630(&StringLiteral_9291/*"NHeel_1"*/);
    FUN_01bab630(&StringLiteral_7361/*"InAir"*/);
    FUN_01bab630(&StringLiteral_8024/*"IsPhysical"*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    __this = (PerkInfoItem_o *)FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_045680d9 = 1;
  }
  if (BCKBBGCOMJD == (Model_o *)0x0) goto LAB_0351f450;
  if (ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) goto LAB_0351f55c;
  pSVar8 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
  bVar4 = System_String__op_Equality(pSVar8,StringLiteral_8409/*"Level"*/,(MethodInfo *)0x0);
  if (bVar4) {
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
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    __this = (PerkInfoItem_o *)0x0;
    if (__this_00 == (Roster_o *)0x0) goto LAB_0351f55c;
    local_54 = Roster__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
    __this = (PerkInfoItem_o *)System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
joined_r0x0351f528:
    if (HPACPFLKHPK == (MMFIDKMDADC_o *)0x0) {
LAB_0351f55c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(__this);
    }
  }
  else {
    bVar4 = System_String__op_Equality(pSVar8,StringLiteral_2968/*"Animation"*/,(MethodInfo *)0x0);
    if (bVar4) {
      pEVar5 = Model__FMEOPPFIHCB(BCKBBGCOMJD,(MethodInfo *)0x0);
      __this = (PerkInfoItem_o *)0x0;
      if (pEVar5 != (InfoAnimation_o *)0x0) {
        __this_01 = (System_Text_StringBuilder_o *)
                    thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
        System_Text_StringBuilder___ctor(__this_01,(MethodInfo *)0x0);
        __this = (PerkInfoItem_o *)Model__FMEOPPFIHCB(BCKBBGCOMJD,(MethodInfo *)0x0);
        if (((InfoAnimation_o *)__this == (InfoAnimation_o *)0x0) ||
           (__this_02 = (((InfoAnimation_o *)__this)->fields)._AHFPJJKEANI_k__BackingField,
           __this_02 == (System_Collections_Generic_List_string__o *)0x0)) goto LAB_0351f55c;
        iVar1 = (__this_02->fields)._size;
        if (iVar1 < 1) {
          if (__this_01 == (System_Text_StringBuilder_o *)0x0) goto LAB_0351f55c;
        }
        else {
          index = 0;
          do {
            __this = (PerkInfoItem_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)__this_02,index,
                                Method_System_Collections_Generic_List<string>_get_Item__);
            if (__this_01 == (System_Text_StringBuilder_o *)0x0) goto LAB_0351f55c;
            System_Text_StringBuilder__Append(__this_01,(System_String_o *)__this,(MethodInfo *)0x0)
            ;
            if (index < iVar1 + -1) {
              System_Text_StringBuilder__Append(__this_01,StringLiteral_22485/*"|"*/,(MethodInfo *)0x0);
            }
            index = index + 1;
          } while (iVar1 != index);
        }
        __this = (PerkInfoItem_o *)
                 (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                           (__this_01,(__this_01->klass->vtable)._3_ToString.method);
        goto joined_r0x0351f528;
      }
LAB_0351f450:
      if (HPACPFLKHPK == (MMFIDKMDADC_o *)0x0) goto LAB_0351f55c;
      pSVar7 = string_TypeInfo->static_fields;
    }
    else {
      bVar4 = System_String__op_Equality(pSVar8,StringLiteral_8024/*"IsPhysical"*/,(MethodInfo *)0x0);
      if (bVar4) {
        pEVar5 = Model__FMEOPPFIHCB(BCKBBGCOMJD,(MethodInfo *)0x0);
        __this = (PerkInfoItem_o *)0x0;
        if (pEVar5 == (InfoAnimation_o *)0x0) goto LAB_0351f450;
        __this = (PerkInfoItem_o *)Model__FMEOPPFIHCB(BCKBBGCOMJD,(MethodInfo *)0x0);
        if ((InfoAnimation_o *)__this == (InfoAnimation_o *)0x0) goto LAB_0351f55c;
        pSVar7 = (System_String_StaticFields *)&StringLiteral_1567/*"0"*/;
        if ((((InfoAnimation_o *)__this)->fields).BFMPHOCJIHP != false) {
          pSVar7 = (System_String_StaticFields *)&StringLiteral_1606/*"1"*/;
        }
      }
      else {
        bVar4 = System_String__op_Equality(pSVar8,StringLiteral_7361/*"InAir"*/,(MethodInfo *)0x0);
        if (!bVar4) {
          return;
        }
        pGVar6 = (BCKBBGCOMJD->fields).HMIAFJALFCJ;
        __this = (PerkInfoItem_o *)0x0;
        if (((pGVar6 == (ModelObject_o *)0x0) ||
            (__this = (PerkInfoItem_o *)
                      ModelObject__OCJAHBKIFNO(pGVar6,StringLiteral_9292/*"NHeel_2"*/,(MethodInfo *)0x0),
            (InfoAnimation_o *)__this == (InfoAnimation_o *)0x0)) ||
           (pSVar8 = *(System_String_o **)
                      &(((InfoAnimation_o *)__this)->fields).EAFPDFHFBOM.fields.hiddenValue,
           pSVar8 == (System_String_o *)0x0)) goto LAB_0351f55c;
        pGVar6 = (BCKBBGCOMJD->fields).HMIAFJALFCJ;
        __this = (PerkInfoItem_o *)0x0;
        if (pGVar6 == (ModelObject_o *)0x0) goto LAB_0351f55c;
        fVar9 = *(float *)&(pSVar8->fields)._firstChar;
        __this = (PerkInfoItem_o *)
                 ModelObject__OCJAHBKIFNO(pGVar6,StringLiteral_9291/*"NHeel_1"*/,(MethodInfo *)0x0);
        if (((InfoAnimation_o *)__this == (InfoAnimation_o *)0x0) ||
           (pSVar8 = *(System_String_o **)
                      &(((InfoAnimation_o *)__this)->fields).EAFPDFHFBOM.fields.hiddenValue,
           pSVar8 == (System_String_o *)0x0)) goto LAB_0351f55c;
        fVar9 = 0.0 - fVar9;
        bVar4 = false;
        bVar2 = true;
        bVar3 = false;
        if (30.0 < 0.0 - *(float *)&(pSVar8->fields)._firstChar) {
          bVar4 = false;
          bVar2 = false;
          bVar3 = true;
          if (!NAN(fVar9)) {
            bVar4 = fVar9 < 30.0;
            bVar2 = fVar9 == 30.0;
            bVar3 = false;
          }
        }
        pSVar7 = (System_String_StaticFields *)&StringLiteral_1567/*"0"*/;
        if (!bVar2 && bVar4 == bVar3) {
          pSVar7 = (System_String_StaticFields *)&StringLiteral_1606/*"1"*/;
        }
      }
      if (HPACPFLKHPK == (MMFIDKMDADC_o *)0x0) goto LAB_0351f55c;
    }
    __this = (PerkInfoItem_o *)pSVar7->Empty;
  }
  (HPACPFLKHPK->fields).HPACPFLKHPK = (System_String_o *)__this;
  thunk_FUN_01c20e04(&HPACPFLKHPK->fields);
  return;
}


// ===== public List<NJPBBPOABKP> OMCIJDKNLMB()  [RVA 0x341F560]
// PerkInfoItem$$OMCIJDKNLMB @ RVA 0x341F560

System_Collections_Generic_List_NJPBBPOABKP__o *
PerkInfoItem__OMCIJDKNLMB(PerkInfoItem_o *__this,MethodInfo *method)

{
  return (__this->fields).EMNOFACFIBF;
}


// ===== private void PLEKILLMEEK(XmlNode AHDGNOJPPIB)  [RVA 0x341F568]
// PerkInfoItem$$PLEKILLMEEK @ RVA 0x341F568

/* WARNING: Removing unreachable block (ram,0x0351fa70) */
/* WARNING: Removing unreachable block (ram,0x0351fa5c) */
/* WARNING: Removing unreachable block (ram,0x0351f8b0) */

void PerkInfoItem__PLEKILLMEEK
               (PerkInfoItem_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  long *plVar5;
  System_Xml_XmlAttribute_o *CBCJPCKIOPJ;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_045680da & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlAttribute_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_045680da = 1;
  }
  if ((AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) ||
     (plVar3 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_0351f61c:
  lVar6 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
          System_Collections_IEnumerator_TypeInfo) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0351f668;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  method = (MethodInfo *)0x0;
  puVar4 = (undefined8 *)FUN_01b81914(plVar3);
LAB_0351f668:
  uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
  if ((uVar7 & 1) != 0) {
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_0351f6c8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    method = (MethodInfo *)0x1;
    puVar4 = (undefined8 *)FUN_01b81914(plVar3);
LAB_0351f6c8:
    AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (AHDGNOJPPIB_00 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
    if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
       ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(AHDGNOJPPIB_00);
    }
    plVar5 = (long *)(*(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB_00,
                                (AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.method);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0351f780;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      method = (MethodInfo *)0x0;
      puVar4 = (undefined8 *)FUN_01b81914(plVar5);
LAB_0351f780:
      uVar7 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar7 & 1) == 0) goto LAB_0351f830;
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_0351f7e0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      method = (MethodInfo *)0x1;
      puVar4 = (undefined8 *)FUN_01b81914(plVar5);
LAB_0351f7e0:
      CBCJPCKIOPJ = (System_Xml_XmlAttribute_o *)(*(code *)*puVar4)(plVar5,puVar4[1]);
      if (CBCJPCKIOPJ != (System_Xml_XmlAttribute_o *)0x0) {
        bVar1 = (System_Xml_XmlAttribute_TypeInfo->_2).naturalAligment;
        if (((CBCJPCKIOPJ->klass->_2).naturalAligment < bVar1) ||
           ((CBCJPCKIOPJ->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlAttribute_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(CBCJPCKIOPJ);
        }
      }
      PerkInfoItem__IDNDFIFCOFO(__this,CBCJPCKIOPJ,method);
    } while( true );
  }
  plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
  if (plVar3 == (long *)0x0) {
    return;
  }
  lVar6 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 == 0) goto LAB_0351f978;
  piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
  goto LAB_0351f960;
LAB_0351f830:
  plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar8 + -2) == System_IDisposable_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0351f898;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    method = (MethodInfo *)0x0;
    puVar4 = (undefined8 *)FUN_01b81914(plVar5);
LAB_0351f898:
    (*(code *)*puVar4)(plVar5,puVar4[1]);
  }
  plVar5 = (long *)(*(AHDGNOJPPIB_00->klass->vtable)._13_get_ChildNodes.methodPtr)
                             (AHDGNOJPPIB_00,
                              (AHDGNOJPPIB_00->klass->vtable)._13_get_ChildNodes.method);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0351fa48 with catch @ 0351fa64
                       catch(type#2 @ 00000000) { ... } // from try @ 0351fa5c with catch @ 0351fa64
                        */
    FUN_01bab8c8();
  }
  iVar2 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
  if (0 < iVar2) {
                    /* try { // try from 0351f8e0 to 0361f96b has its CatchHandler @ 0351f8e0
                       catch() { ... } // from try @ 0351f8e0 with catch @ 0351f8e0
                       catch() { ... } // from try @ 0351f9c0 with catch @ 0351f8e0
                       catch() { ... } // from try @ 0351f9e4 with catch @ 0351f8e0
                       catch() { ... } // from try @ 0351fa10 with catch @ 0351f8e0
                       catch() { ... } // from try @ 0351fa50 with catch @ 0351f8e0 */
    PerkInfoItem__PLEKILLMEEK(__this,AHDGNOJPPIB_00,method);
  }
  goto LAB_0351f61c;
  while( true ) {
                    /* try { // try from 0351f96c to 0361f973 has its CatchHandler @ 0351f9f0 */
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_0351f960:
    if (*(System_IDisposable_c **)(piVar8 + -2) == System_IDisposable_TypeInfo) {
                    /* try { // try from 0351f990 to 0361f99f has its CatchHandler @ 0351f9e8 */
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0351f994;
    }
  }
LAB_0351f978:
                    /* try { // try from 0351f980 to 0361f98f has its CatchHandler @ 0351f9ec */
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_0351f994:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
                    /* try { // try from 0351f9a0 to 0361f9bf has its CatchHandler @ 0351f9f4 */
  return;
}


// ===== private void PEMJOKFFAMO(ObscuredInt CJNHFNHJHPE)  [RVA 0x341FE08]
// PerkInfoItem$$PEMJOKFFAMO @ RVA 0x341FE08

void PerkInfoItem__PEMJOKFFAMO
               (PerkInfoItem_o *__this,CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CJNHFNHJHPE,
               MethodInfo *method)

{
  undefined8 uVar1;
  
  uVar1 = CJNHFNHJHPE.fields._8_8_;
  (__this->fields)._MDAJFAPLLOH_k__BackingField.fields.currentCryptoKey =
       (int)CJNHFNHJHPE.fields._0_8_;
  (__this->fields)._MDAJFAPLLOH_k__BackingField.fields.hiddenValue =
       (int)((ulong)CJNHFNHJHPE.fields._0_8_ >> 0x20);
  (__this->fields)._MDAJFAPLLOH_k__BackingField.fields.fakeValue = (int)uVar1;
  (__this->fields)._MDAJFAPLLOH_k__BackingField.fields.fakeValueActive =
       (bool_conflict)(char)((ulong)uVar1 >> 0x20);
  (__this->fields)._MDAJFAPLLOH_k__BackingField.fields.inited =
       (bool_conflict)(char)((ulong)uVar1 >> 0x28);
  *(short *)&(__this->fields)._MDAJFAPLLOH_k__BackingField.fields.field_0xe =
       (short)((ulong)uVar1 >> 0x30);
  return;
}


// ===== private void FNDCCCJMHMI(Model BCKBBGCOMJD, NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, HDBNGIBFEBA LOFMIFGLIKN, MMFIDKMDADC HPACPFLKHPK)  [RVA 0x341FE14]
// PerkInfoItem$$FNDCCCJMHMI @ RVA 0x341FE14

void PerkInfoItem__FNDCCCJMHMI
               (PerkInfoItem_o *__this,Model_o *BCKBBGCOMJD,
               NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,HDBNGIBFEBA_o *LOFMIFGLIKN,
               MMFIDKMDADC_o *HPACPFLKHPK,MethodInfo *method)

{
  bool FOFCAILEKJD;
  System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *__this_00;
  NILLKLHKLHG_DIPIFJPCFOE_o *__this_01;
  System_String_o *pSVar1;
  Fight_o *pFVar2;
  BMMAPANJCEC_o *__this_02;
  float local_34;
  
  if ((DAT_045680db & 1) == 0) {
    FUN_01bab630(&Fight_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_045680db = 1;
  }
  if ((Fight_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&Fight_TypeInfo);
    DAT_04565b7f = '\x01';
  }
  if ((Fight_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = StringLiteral_1567/*"0"*/;
  if (Fight_TypeInfo->static_fields->IGABFCCGLCO != (Fight_o *)0x0) {
    if (((ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) ||
        (__this_00 = (ACCIJLGMHOO->fields).EEFPBGNAFFI,
        __this_00 == (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0)) ||
       (__this_01 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,0,
                               Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__
                              ), __this_01 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0)) goto LAB_0351ffb8;
    pSVar1 = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(__this_01,(MethodInfo *)0x0);
    if ((Fight_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Fight_TypeInfo);
    }
    if (DAT_04565b7f == '\0') {
                    /* try { // try from 0351ff10 to 0361ffb3 has its CatchHandler @ 0351ff10
                       catch() { ... } // from try @ 0351ff10 with catch @ 0351ff10
                       catch() { ... } // from try @ 0351ffe0 with catch @ 0351ff10
                       catch() { ... } // from try @ 03520070 with catch @ 0351ff10
                       catch() { ... } // from try @ 03520098 with catch @ 0351ff10
                       catch() { ... } // from try @ 035200d8 with catch @ 0351ff10 */
      FUN_01bab630(&Fight_TypeInfo);
      DAT_04565b7f = '\x01';
    }
    if ((Fight_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pFVar2 = Fight_TypeInfo->static_fields->IGABFCCGLCO;
    if ((pFVar2 == (Fight_o *)0x0) || (BCKBBGCOMJD == (Model_o *)0x0))
    goto LAB_0351ffb8;
    __this_02 = (pFVar2->fields).HBMCNPFFCHJ;
    FOFCAILEKJD = Model__HODPOCMNNIN(BCKBBGCOMJD,(MethodInfo *)0x0);
    if (__this_02 == (BMMAPANJCEC_o *)0x0) goto LAB_0351ffb8;
    local_34 = BMMAPANJCEC__KNMENIBLFGF(__this_02,FOFCAILEKJD,pSVar1,(MethodInfo *)0x0);
    pSVar1 = System_Single__ToString(local_34,(MethodInfo *)&local_34);
  }
  if (HPACPFLKHPK != (MMFIDKMDADC_o *)0x0) {
    (HPACPFLKHPK->fields).HPACPFLKHPK = pSVar1;
    thunk_FUN_01c20e04(&HPACPFLKHPK->fields);
                    /* try { // try from 0351ffb4 to 0361ffbb has its CatchHandler @ 0352007c */
    return;
  }
LAB_0351ffb8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ObscuredInt NOJELIALAIO()  [RVA 0x341FFBC]
// PerkInfoItem$$NOJELIALAIO @ RVA 0x341FFBC

CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o
PerkInfoItem__NOJELIALAIO(PerkInfoItem_o *__this,MethodInfo *method)

{
  return (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
         (__this->fields)._MDAJFAPLLOH_k__BackingField.fields;
}


// ===== public void .ctor()  [RVA 0x341E0C4]
// PerkInfoItem$$.ctor @ RVA 0x341E0C4

void PerkInfoItem___ctor(PerkInfoItem_o *__this,MethodInfo *method)

{
  System_Xml_XmlDocument_o *__this_00;
  System_Xml_XmlDocument_o **ppSVar1;
  System_Collections_Generic_List_NJPBBPOABKP__o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  System_Collections_Generic_Dictionary_string__ObscuredString__o **ppSVar2;
  FPLCEOJCPOD_o *__this_03;
  FPLCEOJCPOD_o **ppFVar3;
  System_Collections_Generic_List_ACCKJOAAEKB__o *__this_04;
  System_Collections_Generic_List_ACCKJOAAEKB__o **ppSVar4;
  System_Collections_Generic_List_string__o *__this_05;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_string__o **ppSVar5;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar6;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar7;
  
  if ((DAT_045680dc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredString>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_ObscuredString>_TypeInfo);
    FUN_01bab630(&FPLCEOJCPOD_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ACCKJOAAEKB>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBBPOABKP>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ACCKJOAAEKB>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<NJPBBPOABKP>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045680dc = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Xml_XmlDocument_o *)thunk_FUN_01bda818(System_Xml_XmlDocument_TypeInfo,method)
  ;
  System_Xml_XmlDocument___ctor(__this_00,(MethodInfo *)0x0);
  ppSVar1 = &(__this->fields).DHNEDFGMFGM;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_NJPBBPOABKP__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<NJPBBPOABKP>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<NJPBBPOABKP>__ctor__);
  (__this->fields).EMNOFACFIBF = __this_01;
  thunk_FUN_01c20e04(&(__this->fields).EMNOFACFIBF,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  CVar7 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(false,(MethodInfo *)0x0);
  (__this->fields).ICCBEPAFBFI.fields = CVar7;
  CVar7 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(false,(MethodInfo *)0x0);
  (__this->fields).HHDBIGKBMEC.fields = CVar7;
  (__this->fields).JIJLBFGKNJK = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).BPCADJLKKGA = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).JMGIACHBIKG = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).FFDAPDCFBDO = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).EHLKHAKJGGH = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).JJONOCGMEMK = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).AKBDHOEGNNG = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  CVar6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(-1,(MethodInfo *)0x0);
  (__this->fields)._MDAJFAPLLOH_k__BackingField.fields = CVar6;
  CVar6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
  (__this->fields).NOPGBJNLFHM.fields = CVar6;
  CVar6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
  (__this->fields).EAGEGPKAEKI.fields = CVar6;
  CVar6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
  (__this->fields).EMLGCOFGNKH.fields = CVar6;
  (__this->fields).AEIJFFBOBCP = 0;
  CVar7 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(false,(MethodInfo *)0x0);
  (__this->fields).CHLMHEGKKNH.fields = CVar7;
  CVar7 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(false,(MethodInfo *)0x0);
  (__this->fields).JFMAEFOHLDF.fields = CVar7;
  (__this->fields).OCABLLPNEGL = 1;
  __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_Dictionary<string,_ObscuredString>_TypeInfo
                                );
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_02,Method_System_Collections_Generic_Dictionary<string,_ObscuredString>__ctor__)
  ;
  ppSVar2 = &(__this->fields).NBOMAJCMIIL;
  *ppSVar2 = (System_Collections_Generic_Dictionary_string__ObscuredString__o *)__this_02;
  thunk_FUN_01c20e04(ppSVar2,__this_02);
  __this_03 = (FPLCEOJCPOD_o *)thunk_FUN_01bda818(FPLCEOJCPOD_TypeInfo);
  FPLCEOJCPOD___ctor(__this_03,(MethodInfo *)0x0);
  ppFVar3 = &(__this->fields).ACHJNNOKEDK;
  *ppFVar3 = __this_03;
  thunk_FUN_01c20e04(ppFVar3,__this_03);
  __this_04 = (System_Collections_Generic_List_ACCKJOAAEKB__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ACCKJOAAEKB>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_04,
             Method_System_Collections_Generic_List<ACCKJOAAEKB>__ctor__);
  ppSVar4 = &(__this->fields).NLHLDLBGAKK;
  *ppSVar4 = __this_04;
  thunk_FUN_01c20e04(ppSVar4,__this_04);
  __this_05 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_05,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar5 = &(__this->fields).FMFKGEJLDGO;
  *ppSVar5 = __this_05;
  thunk_FUN_01c20e04(ppSVar5,__this_05);
  return;
}


// ===== public void MEGLCKEJIIN()  [RVA 0x341F178]
// PerkInfoItem$$MEGLCKEJIIN @ RVA 0x341F178

void PerkInfoItem__MEGLCKEJIIN(PerkInfoItem_o *__this,MethodInfo *method)

{
  System_Xml_XmlNode_o **ppSVar1;
  System_Xml_XmlDocument_o **ppSVar2;
  
  ppSVar1 = &(__this->fields).DCDJOJGHJEB;
  *ppSVar1 = (System_Xml_XmlNode_o *)0x0;
  thunk_FUN_01c20e04(ppSVar1,0);
  ppSVar2 = &(__this->fields).DHNEDFGMFGM;
  *ppSVar2 = (System_Xml_XmlDocument_o *)0x0;
  thunk_FUN_01c20e04(ppSVar2,0);
  return;
}


// ===== private void OOPHKKNELPB(XmlNode CCIAONEIAII, Dictionary<string, ObscuredString> KGJIMFMKHCD)  [RVA 0x341FFCC]
// PerkInfoItem$$OOPHKKNELPB @ RVA 0x341FFCC

/* WARNING: Removing unreachable block (ram,0x03520368) */

void PerkInfoItem__OOPHKKNELPB
               (PerkInfoItem_o *__this,System_Xml_XmlNode_o *CCIAONEIAII,
               System_Collections_Generic_Dictionary_string__ObscuredString__o *KGJIMFMKHCD,
               MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  System_String_o *__this_00;
  ACCKJOAAEKB_o *__this_01;
  System_Collections_Generic_List_ACCKJOAAEKB__o *pSVar7;
  long lVar8;
  ACCKJOAAEKB_array *pAVar9;
  ulong uVar10;
  int *piVar11;
  
                    /* try { // try from 0351ffd0 to 0361ffdf has its CatchHandler @ 03520074 */
                    /* try { // try from 0351ffe0 to 0362006b has its CatchHandler @ 0351ff10 */
  if ((DAT_045680dd & 1) == 0) {
    FUN_01bab630(&ACCKJOAAEKB_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ACCKJOAAEKB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ACCKJOAAEKB>_Clear__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_11028/*"Rating"*/);
    DAT_045680dd = 1;
  }
                    /* try { // try from 0352006c to 0362006f has its CatchHandler @ 03520078 */
                    /* try { // try from 03520070 to 03620093 has its CatchHandler @ 0351ff10 */
  if ((CCIAONEIAII != (System_Xml_XmlNode_o *)0x0) &&
     (plVar5 = (long *)(*(CCIAONEIAII->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (CCIAONEIAII,(CCIAONEIAII->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar5 != (long *)0x0)) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0351ffd0 with catch @ 03520074
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0352006c with catch @ 03520078
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0351ffb4 with catch @ 0352007c
                        */
    iVar4 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
    if (0 < iVar4) {
      pSVar7 = (__this->fields).NLHLDLBGAKK;
      if (pSVar7 == (System_Collections_Generic_List_ACCKJOAAEKB__o *)0x0) goto LAB_03520360;
      length = (pSVar7->fields)._size;
                    /* try { // try from 03520094 to 03620097 has its CatchHandler @ 035200c0 */
                    /* try { // try from 03520098 to 036200cf has its CatchHandler @ 0351ff10 */
      (pSVar7->fields)._size = 0;
      (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar7->fields)._items,0,length,(MethodInfo *)0x0);
      }
    }
                    /* catch() { ... } // from try @ 03520094 with catch @ 035200c0 */
    plVar5 = (long *)(*(CCIAONEIAII->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (CCIAONEIAII,(CCIAONEIAII->klass->vtable)._13_get_ChildNodes.method);
    if (plVar5 != (long *)0x0) {
                    /* try { // try from 035200d0 to 036200d7 has its CatchHandler @ 035200ec */
                    /* try { // try from 035200d8 to 036200e3 has its CatchHandler @ 0351ff10 */
      plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
                    /* try { // try from 035200e4 to 036200eb has its CatchHandler @ 035200ec */
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar8 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0352015c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_0352015c:
        uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar10 & 1) == 0) {
          plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
          if (plVar5 == (long *)0x0) {
            return;
          }
          lVar8 = *plVar5;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 == 0) goto LAB_035202fc;
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_035202e4;
        }
        lVar8 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_035201bc;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_035201bc:
        AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar1) ||
           ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(AHDGNOJPPIB);
        }
        __this_00 = (System_String_o *)
                    (*(AHDGNOJPPIB->klass->vtable)._8_unknown.methodPtr)
                              (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._8_unknown.method);
        if (__this_00 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar3 = System_String__Equals(__this_00,StringLiteral_11028/*"Rating"*/,(MethodInfo *)0x0);
        if (bVar3) {
          __this_01 = (ACCKJOAAEKB_o *)thunk_FUN_01bda818(ACCKJOAAEKB_TypeInfo);
          ACCKJOAAEKB___ctor(__this_01,(MethodInfo *)0x0);
          if (__this_01 == (ACCKJOAAEKB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          ACCKJOAAEKB__HNIHOIAMDPC(__this_01,AHDGNOJPPIB,KGJIMFMKHCD,(MethodInfo *)0x0);
          lVar8 = Method_System_Collections_Generic_List<ACCKJOAAEKB>_Add__;
          pSVar7 = (__this->fields).NLHLDLBGAKK;
          if (pSVar7 == (System_Collections_Generic_List_ACCKJOAAEKB__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pAVar9 = (pSVar7->fields)._items;
          (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
          if (pAVar9 == (ACCKJOAAEKB_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (pSVar7->fields)._size;
          if (uVar2 < (uint)pAVar9->max_length) {
            (pSVar7->fields)._size = uVar2 + 1;
            pAVar9->m_Items[(int)uVar2] = __this_01;
            thunk_FUN_01c20e04(pAVar9->m_Items + (int)uVar2,__this_01);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)__this_01
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
        }
      } while( true );
    }
  }
LAB_03520360:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_035202e4:
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_03520318;
    }
  }
LAB_035202fc:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_03520318:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


// ===== private void DEGNJDCECLI(Model BCKBBGCOMJD, NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC HPACPFLKHPK, Func<Vector3f, float> HECFKGPGKPF)  [RVA 0x341CB6C]
// PerkInfoItem$$DEGNJDCECLI @ RVA 0x341CB6C

void PerkInfoItem__DEGNJDCECLI
               (PerkInfoItem_o *__this,Model_o *BCKBBGCOMJD,
               NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,MMFIDKMDADC_o *HPACPFLKHPK,
               System_Func_CNDPAJOLKFN__float__o *HECFKGPGKPF,MethodInfo *method)

{
  bool FOFCAILEKJD;
  System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *__this_00;
  NILLKLHKLHG_DIPIFJPCFOE_o *__this_01;
  System_String_o *pSVar1;
  Model_o *__this_02;
  Vector3f_o *pCVar2;
  MethodInfo *method_00;
  float local_34;
  
                    /* try { // try from 0351cb6c to 0361cb6f has its CatchHandler @ 0351cb80 */
                    /* try { // try from 0351cb70 to 0361cb73 has its CatchHandler @ 0351c9c4 */
                    /* try { // try from 0351cb74 to 0361cb77 has its CatchHandler @ 0351cb7c */
                    /* catch() { ... } // from try @ 0351cafc with catch @ 0351cb78
                       try { // try from 0351cb78 to 0361cb9b has its CatchHandler @ 0351c9c4 */
                    /* catch() { ... } // from try @ 0351cb74 with catch @ 0351cb7c */
                    /* catch() { ... } // from try @ 0351cb6c with catch @ 0351cb80 */
                    /* catch() { ... } // from try @ 0351cac8 with catch @ 0351cb84 */
  method_00 = (MethodInfo *)HPACPFLKHPK;
  if ((DAT_045680de & 1) == 0) {
                    /* try { // try from 0351cb9c to 0361cb9f has its CatchHandler @ 0351cbc8 */
                    /* try { // try from 0351cba0 to 0361cbd7 has its CatchHandler @ 0351c9c4 */
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    FUN_01bab630(&StringLiteral_1324/*"-10000"*/);
    DAT_045680de = 1;
  }
  local_34 = 0.0;
                    /* catch() { ... } // from try @ 0351cb9c with catch @ 0351cbc8 */
                    /* try { // try from 0351cbd8 to 0361cbeb has its CatchHandler @ 0351cc50 */
                    /* catch() { ... } // from try @ 0351cb3c with catch @ 0351cbec
                       try { // try from 0351cbec to 0361cc07 has its CatchHandler @ 0351c9c4 */
  if ((((ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) &&
       (__this_00 = (ACCIJLGMHOO->fields).EEFPBGNAFFI,
       __this_00 != (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0)) &&
      (__this_01 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,0,
                              Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__
                             ), __this_01 != (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0)) &&
     (pSVar1 = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(__this_01,(MethodInfo *)0x0),
     BCKBBGCOMJD != (Model_o *)0x0)) {
                    /* catch() { ... } // from try @ 0351cb2c with catch @ 0351cbf0 */
    FOFCAILEKJD = Model__HODPOCMNNIN(BCKBBGCOMJD,(MethodInfo *)0x0);
                    /* try { // try from 0351cc08 to 0361cc0b has its CatchHandler @ 0351cc2c */
                    /* try { // try from 0351cc0c to 0361cc33 has its CatchHandler @ 0351c9c4 */
    __this_02 = PerkInfoItem__DDFBGPFCLHF(__this,pSVar1,FOFCAILEKJD,method_00);
    pSVar1 = StringLiteral_1324/*"-10000"*/;
    if (__this_02 != (Model_o *)0x0) {
      pCVar2 = Model__PLEJOMOEFNE(__this_02,(MethodInfo *)0x0);
      if (HECFKGPGKPF == (System_Func_CNDPAJOLKFN__float__o *)0x0) goto LAB_0351cc7c;
                    /* catch() { ... } // from try @ 0351cc08 with catch @ 0351cc2c */
      local_34 = (float)(*(code *)(HECFKGPGKPF->fields).super.super.invoke_impl)
                                  ((HECFKGPGKPF->fields).super.super.method_code,pCVar2,
                                   (HECFKGPGKPF->fields).super.super.method);
                    /* try { // try from 0351cc34 to 0361cc3b has its CatchHandler @ 0351cc50 */
                    /* try { // try from 0351cc3c to 0361cc47 has its CatchHandler @ 0351c9c4 */
      pSVar1 = System_Single__ToString(local_34,(MethodInfo *)&local_34);
                    /* try { // try from 0351cc48 to 0361cc4f has its CatchHandler @ 0351cc50 */
    }
    if (HPACPFLKHPK != (MMFIDKMDADC_o *)0x0) {
      (HPACPFLKHPK->fields).HPACPFLKHPK = pSVar1;
                    /* catch() { ... } // from try @ 0351cbd8 with catch @ 0351cc50
                       catch() { ... } // from try @ 0351cc34 with catch @ 0351cc50
                       catch() { ... } // from try @ 0351cc48 with catch @ 0351cc50 */
      thunk_FUN_01c20e04(&HPACPFLKHPK->fields);
                    /* try { // try from 0351cc5c to 0361cd4f has its CatchHandler @ 0351cc5c
                       catch() { ... } // from try @ 0351cc5c with catch @ 0351cc5c
                       catch() { ... } // from try @ 0351cdd4 with catch @ 0351cc5c
                       catch() { ... } // from try @ 0351cdf4 with catch @ 0351cc5c
                       catch() { ... } // from try @ 0351ce5c with catch @ 0351cc5c
                       catch() { ... } // from try @ 0351ce98 with catch @ 0351cc5c
                       catch() { ... } // from try @ 0351cecc with catch @ 0351cc5c */
      return;
    }
  }
LAB_0351cc7c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ECNFLHKCENA(Model BCKBBGCOMJD, NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, HDBNGIBFEBA LOFMIFGLIKN, MMFIDKMDADC HPACPFLKHPK)  [RVA 0x3420450]
// PerkInfoItem$$ECNFLHKCENA @ RVA 0x3420450

void PerkInfoItem__ECNFLHKCENA
               (PerkInfoItem_o *__this,Model_o *BCKBBGCOMJD,
               NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,HDBNGIBFEBA_o *LOFMIFGLIKN,
               MMFIDKMDADC_o *HPACPFLKHPK,MethodInfo *method)

{
  int iVar1;
  NILLKLHKLHG_DIPIFJPCFOE_o *__this_00;
  System_String_o *pSVar2;
  PerkInfoItem_c *method_00;
  System_Object_array *args;
  long lVar3;
  undefined8 uVar4;
  MMFIDKMDADC_Fields *pMVar5;
  float FBEFHEEKKAP;
  float local_24;
  
  if ((DAT_045680df & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&PerkInfoItem_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_3115/*"Aspect function error! Number of argument is not 1: {0}"*/);
    __this = (PerkInfoItem_o *)FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_045680df = 1;
  }
  if ((ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) &&
     (__this = (PerkInfoItem_o *)(ACCIJLGMHOO->fields).EEFPBGNAFFI, __this != (PerkInfoItem_o *)0x0))
  {
    iVar1._0_1_ = (__this->fields).ICCBEPAFBFI.fields.fakeValue;
    iVar1._1_1_ = (__this->fields).ICCBEPAFBFI.fields.inited;
    iVar1._2_1_ = (__this->fields).ICCBEPAFBFI.fields.fakeValueActive;
    iVar1._3_1_ = (__this->fields).ICCBEPAFBFI.fields.field_0xb;
    if (iVar1 == 1) {
      __this_00 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this,0,
                             Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__
                            );
      __this = (PerkInfoItem_o *)0x0;
      if (__this_00 != (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0) {
        pSVar2 = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(__this_00,(MethodInfo *)0x0);
        FBEFHEEKKAP = PCOEHCPGBBG__OFFODGKLGOP(pSVar2,0.0,(MethodInfo *)0x0);
        method_00 = PerkInfoItem_TypeInfo;
        if ((PerkInfoItem_TypeInfo->_2).cctor_finished == 0) {
          method_00 = (PerkInfoItem_c *)thunk_FUN_01ba7564();
        }
        local_24 = PerkInfoItem__EABDBJONHNG(FBEFHEEKKAP,(MethodInfo *)method_00);
        __this = (PerkInfoItem_o *)System_Single__ToString(local_24,(MethodInfo *)&local_24);
        if (HPACPFLKHPK != (MMFIDKMDADC_o *)0x0) {
          (HPACPFLKHPK->fields).HPACPFLKHPK = (System_String_o *)__this;
          thunk_FUN_01c20e04(&HPACPFLKHPK->fields,__this);
          return;
        }
      }
    }
    else if (HPACPFLKHPK != (MMFIDKMDADC_o *)0x0) {
      pMVar5 = &HPACPFLKHPK->fields;
      pMVar5->HPACPFLKHPK = StringLiteral_1567/*"0"*/;
      thunk_FUN_01c20e04(pMVar5);
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      __this = (PerkInfoItem_o *)0x0;
      if (args != (System_Object_array *)0x0) {
        pSVar2 = pMVar5->HPACPFLKHPK;
        if ((pSVar2 != (System_String_o *)0x0) &&
           (lVar3 = thunk_FUN_01bda71c(pSVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0))
        {
          uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar4,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = (Il2CppObject *)pSVar2;
          thunk_FUN_01c20e04(args->m_Items,pSVar2);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_3115/*"Aspect function error! Number of argument is not 1: {0}"*/,args,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== public void BJKIFFGGDEE(NILLKLHKLHG.AOBOECPEMLA HPACPFLKHPK)  [RVA 0x342061C]
// PerkInfoItem$$BJKIFFGGDEE @ RVA 0x342061C

void PerkInfoItem__BJKIFFGGDEE
               (PerkInfoItem_o *__this,NILLKLHKLHG_AOBOECPEMLA_o *HPACPFLKHPK,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  uint32_t uVar3;
  int32_t iVar4;
  System_String_o *pSVar5;
  Model_o *BCKBBGCOMJD;
  Model_o *BCKBBGCOMJD_00;
  Model_o *BCKBBGCOMJD_01;
  Model_o *BCKBBGCOMJD_02;
  Model_o *BCKBBGCOMJD_03;
  Model_o *BCKBBGCOMJD_04;
  Model_o *BCKBBGCOMJD_05;
  Model_o *BCKBBGCOMJD_06;
  NILLKLHKLHG_GLEGDBCJEOA_o *pNVar6;
  HDBNGIBFEBA_o *in_x3;
  MethodInfo *in_x4;
  MethodInfo *in_x5;
  MethodInfo *in_x6;
  NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO;
  HDBNGIBFEBA_o *LOFMIFGLIKN;
  MMFIDKMDADC_o *HPACPFLKHPK_00;
  Model_o *pOVar7;
  
  if ((DAT_045680e0 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NILLKLHKLHG_GLEGDBCJEOA_TypeInfo);
    FUN_01bab630(&HDBNGIBFEBA_TypeInfo);
    FUN_01bab630(&StringLiteral_10322/*"PlayerParameter"*/);
    FUN_01bab630(&StringLiteral_11431/*"Round"*/);
    FUN_01bab630(&StringLiteral_4718/*"CoordZCOM"*/);
    FUN_01bab630(&StringLiteral_5759/*"Enemy"*/);
    FUN_01bab630(&StringLiteral_9224/*"MovesVariable"*/);
    FUN_01bab630(&StringLiteral_11005/*"RandomAspect"*/);
    FUN_01bab630(&StringLiteral_4717/*"CoordZ"*/);
    FUN_01bab630(&StringLiteral_4944/*"CurrentFight"*/);
    FUN_01bab630(&StringLiteral_4714/*"CoordXCOM"*/);
    FUN_01bab630(&StringLiteral_14404/*"UniformFloatRandom"*/);
    FUN_01bab630(&StringLiteral_7119/*"Hit"*/);
    FUN_01bab630(&StringLiteral_11436/*"RoundParameter"*/);
    FUN_01bab630(&StringLiteral_4716/*"CoordYCOM"*/);
    FUN_01bab630(&StringLiteral_14750/*"Variable"*/);
    FUN_01bab630(&StringLiteral_3114/*"Aspect"*/);
    FUN_01bab630(&StringLiteral_10311/*"PlayerAttribute"*/);
    FUN_01bab630(&StringLiteral_10305/*"Player"*/);
    FUN_01bab630(&StringLiteral_2685/*"Abs"*/);
    FUN_01bab630(&StringLiteral_4531/*"Compare"*/);
    FUN_01bab630(&StringLiteral_12485/*"StringInArray"*/);
    FUN_01bab630(&StringLiteral_4713/*"CoordX"*/);
    FUN_01bab630(&StringLiteral_4715/*"CoordY"*/);
    FUN_01bab630(&StringLiteral_10228/*"PerkInfoItem::OnCallbackFunction: function == null || perkObj == null"*/);
    DAT_045680e0 = 1;
  }
  if (HPACPFLKHPK == (NILLKLHKLHG_AOBOECPEMLA_o *)0x0) goto LAB_03520f44;
  ACCIJLGMHOO = (NILLKLHKLHG_GLEGDBCJEOA_o *)(HPACPFLKHPK->fields).IMMNELPBGIF;
  if (ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
LAB_035207ac:
    ACCIJLGMHOO = (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0;
  }
  else {
    bVar1 = (NILLKLHKLHG_GLEGDBCJEOA_TypeInfo->_2).naturalAligment;
    if ((((Il2CppClass *)ACCIJLGMHOO->klass)->_2).naturalAligment < bVar1) goto LAB_035207ac;
    if ((((Il2CppClass *)ACCIJLGMHOO->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)NILLKLHKLHG_GLEGDBCJEOA_TypeInfo) {
      ACCIJLGMHOO = (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0;
    }
  }
  LOFMIFGLIKN = (HDBNGIBFEBA_o *)(HPACPFLKHPK->fields).ANGBPBINHBL;
  if (LOFMIFGLIKN == (HDBNGIBFEBA_o *)0x0) {
LAB_035207f0:
    LOFMIFGLIKN = (HDBNGIBFEBA_o *)0x0;
  }
  else {
    bVar1 = (HDBNGIBFEBA_TypeInfo->_2).naturalAligment;
    if ((LOFMIFGLIKN->klass->_2).naturalAligment < bVar1) goto LAB_035207f0;
    if ((LOFMIFGLIKN->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)HDBNGIBFEBA_TypeInfo) {
      LOFMIFGLIKN = (HDBNGIBFEBA_o *)0x0;
    }
  }
  if (ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_10228/*"PerkInfoItem::OnCallbackFunction: function == null || perkObj == null"*/,(MethodInfo *)0x0);
    return;
  }
  pOVar7 = (__this->fields)._BGCNGEAHHFN_k__BackingField;
  HPACPFLKHPK_00 = (HPACPFLKHPK->fields).JDGILABGBGH;
  if (pOVar7 != (Model_o *)0x0) {
    if ((HPACPFLKHPK_00 == (MMFIDKMDADC_o *)0x0) ||
       (pSVar5 = (HPACPFLKHPK_00->fields).HPACPFLKHPK, pSVar5 == (System_String_o *)0x0))
    goto LAB_03520f44;
    bVar2 = System_String__Equals(pSVar5,StringLiteral_5759/*"Enemy"*/,(MethodInfo *)0x0);
    if (bVar2) {
      pOVar7 = (pOVar7->fields).BPJMMBGIMNC;
    }
  }
  pSVar5 = (ACCIJLGMHOO->fields).IHJHOFMNAOA;
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(pSVar5,(MethodInfo *)0x0);
  if (uVar3 < 0xb159d3d9) {
                    /* try { // try from 03520854 to 03620953 has its CatchHandler @ 03520854
                       catch() { ... } // from try @ 03520854 with catch @ 03520854
                       catch() { ... } // from try @ 03520a20 with catch @ 03520854
                       catch() { ... } // from try @ 03520b2c with catch @ 03520854
                       catch() { ... } // from try @ 03520b34 with catch @ 03520854
                       catch() { ... } // from try @ 03520bec with catch @ 03520854 */
    if (uVar3 < 0x7bf59326) {
      if (uVar3 < 0x1db7e503) {
        if (uVar3 == 0x1c70fc20) {
          bVar2 = System_String__op_Equality(pSVar5,StringLiteral_10305/*"Player"*/,(MethodInfo *)0x0);
          if (bVar2) {
            PerkInfoItem__GAKBKBOMKHP
                      ((PerkInfoItem_o *)0x1,pOVar7,ACCIJLGMHOO,in_x3,HPACPFLKHPK_00,in_x5);
            return;
          }
        }
        else if ((uVar3 == 0x1db7e502) &&
                (bVar2 = System_String__op_Equality(pSVar5,StringLiteral_11436/*"RoundParameter"*/,(MethodInfo *)0x0),
                bVar2)) {
          PerkInfoItem__PBMDELGDHPJ
                    ((PerkInfoItem_o *)0x1,BCKBBGCOMJD,ACCIJLGMHOO,in_x3,HPACPFLKHPK_00,in_x5);
          return;
        }
      }
      else if (uVar3 == 0x29e7ca8e) {
        bVar2 = System_String__op_Equality(pSVar5,StringLiteral_4716/*"CoordYCOM"*/,(MethodInfo *)0x0);
        if (bVar2) {
          PerkInfoItem__PBFLEDOEKPK(__this,pOVar7,ACCIJLGMHOO,HPACPFLKHPK_00,in_x4);
          return;
        }
      }
      else if (uVar3 == 0x655d504a) {
        bVar2 = System_String__op_Equality(pSVar5,StringLiteral_7119/*"Hit"*/,(MethodInfo *)0x0);
        if (bVar2) {
          PerkInfoItem__MFMNDEAFPFE
                    ((PerkInfoItem_o *)0x1,pOVar7,ACCIJLGMHOO,in_x3,HPACPFLKHPK_00,in_x5);
          return;
        }
      }
      else if ((uVar3 == 0x7bf59325) &&
              (bVar2 = System_String__op_Equality(pSVar5,StringLiteral_14750/*"Variable"*/,(MethodInfo *)0x0),
              bVar2)) {
        PerkInfoItem__NKAFEPGIFPB((PerkInfoItem_o *)0x1,pOVar7,ACCIJLGMHOO,in_x3,HPACPFLKHPK_00,in_x5)
        ;
        return;
      }
    }
    else if (uVar3 < 0x8cd299dc) {
                    /* try { // try from 035209b0 to 036209db has its CatchHandler @ 03520b40 */
      if (uVar3 == 0x8b904a64) {
        bVar2 = System_String__op_Equality(pSVar5,StringLiteral_4944/*"CurrentFight"*/,(MethodInfo *)0x0);
        if (bVar2) {
          PerkInfoItem__LGNDBPMCEGP
                    ((PerkInfoItem_o *)0x1,BCKBBGCOMJD_03,ACCIJLGMHOO,in_x3,HPACPFLKHPK_00,in_x5);
          return;
        }
      }
      else if (uVar3 == 0x8cd299db) {
        pNVar6 = (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0;
        bVar2 = System_String__op_Equality(pSVar5,StringLiteral_2685/*"Abs"*/,(MethodInfo *)0x0);
        if (bVar2) {
          PerkInfoItem__FIBHAIBCFLG
                    ((PerkInfoItem_o *)0x1,BCKBBGCOMJD_00,pNVar6,in_x3,HPACPFLKHPK_00,in_x5);
          return;
        }
      }
    }
    else {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035209b0 with catch @ 03520b40
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03520954 with catch @ 03520b44
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03520a0c with catch @ 03520b48
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03520b24 with catch @ 03520b4c
                        */
      if (uVar3 == 0x90ab353b) {
        bVar2 = System_String__op_Equality(pSVar5,StringLiteral_4714/*"CoordXCOM"*/,(MethodInfo *)0x0);
        if (bVar2) {
          PerkInfoItem__EIINLMAFNOL(__this,pOVar7,ACCIJLGMHOO,HPACPFLKHPK_00,in_x4);
          return;
        }
      }
      else {
                    /* try { // try from 03520b5c to 03620b5f has its CatchHandler @ 03520b74 */
        if (uVar3 == 0xac56c8ca) {
                    /* try { // try from 03520e34 to 03620e5b has its CatchHandler @ 03521034 */
          bVar2 = System_String__op_Equality(pSVar5,StringLiteral_11005/*"RandomAspect"*/,(MethodInfo *)0x0);
          if (bVar2) {
            PerkInfoItem__LOLJOGPOOAH
                      ((PerkInfoItem_o *)0x1,BCKBBGCOMJD_04,ACCIJLGMHOO,in_x3,HPACPFLKHPK_00,in_x5);
            return;
          }
        }
        else if (uVar3 == 0xb159d3d8) {
                    /* catch() { ... } // from try @ 03520b5c with catch @ 03520b74 */
          pNVar6 = (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0;
                    /* try { // try from 03520b84 to 03620beb has its CatchHandler @ 03520c00 */
          bVar2 = System_String__op_Equality(pSVar5,StringLiteral_14404/*"UniformFloatRandom"*/,(MethodInfo *)0x0);
          if (bVar2) {
            PerkInfoItem__HJCJPFFHFAD
                      ((PerkInfoItem_o *)0x1,BCKBBGCOMJD_01,pNVar6,in_x3,HPACPFLKHPK_00,in_x5);
            return;
          }
        }
      }
    }
  }
  else if (uVar3 < 0xe7e9033d) {
    if (uVar3 < 0xc97d0d30) {
      if (uVar3 == 0xc1ad8325) {
        bVar2 = System_String__op_Equality(pSVar5,StringLiteral_9224/*"MovesVariable"*/,(MethodInfo *)0x0);
        if (bVar2) {
          PerkInfoItem__FNDCCCJMHMI
                    ((PerkInfoItem_o *)0x1,pOVar7,ACCIJLGMHOO,in_x3,HPACPFLKHPK_00,in_x5);
          return;
        }
      }
      else {
                    /* try { // try from 03520954 to 0362097b has its CatchHandler @ 03520b44 */
        if ((uVar3 == 0xc97d0d2f) &&
           (bVar2 = System_String__op_Equality(pSVar5,StringLiteral_10322/*"PlayerParameter"*/,(MethodInfo *)0x0), bVar2)
           ) {
          PerkInfoItem__FFMODBDABFB
                    ((PerkInfoItem_o *)0x1,pOVar7,ACCIJLGMHOO,LOFMIFGLIKN,HPACPFLKHPK_00,in_x5);
          return;
        }
      }
    }
    else if (uVar3 == 0xdece5340) {
      bVar2 = System_String__op_Equality(pSVar5,StringLiteral_10311/*"PlayerAttribute"*/,(MethodInfo *)0x0);
      if (bVar2) {
        PerkInfoItem__FAEPEDPFHBA((PerkInfoItem_o *)0x1,pOVar7,ACCIJLGMHOO,in_x3,HPACPFLKHPK_00,in_x5)
        ;
        return;
      }
    }
    else if (uVar3 == 0xe7166311) {
      bVar2 = System_String__op_Equality(pSVar5,StringLiteral_4718/*"CoordZCOM"*/,(MethodInfo *)0x0);
      if (bVar2) {
        PerkInfoItem__AEBKCLNFHDI(__this,pOVar7,ACCIJLGMHOO,HPACPFLKHPK_00,in_x4);
        return;
      }
    }
    else if ((uVar3 == 0xe7e9033c) &&
            (bVar2 = System_String__op_Equality(pSVar5,StringLiteral_4717/*"CoordZ"*/,(MethodInfo *)0x0), bVar2)
            ) {
                    /* try { // try from 03520b24 to 03620b2b has its CatchHandler @ 03520b4c */
                    /* try { // try from 03520b2c to 03620b2f has its CatchHandler @ 03520854 */
                    /* try { // try from 03520b30 to 03620b33 has its CatchHandler @ 03520b3c */
                    /* try { // try from 03520b34 to 03620b5b has its CatchHandler @ 03520854 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03520b30 with catch @ 03520b3c
                        */
      PerkInfoItem__GOJPPGEGLBM((PerkInfoItem_o *)0x1,pOVar7,ACCIJLGMHOO,in_x3,HPACPFLKHPK_00,in_x5);
      return;
    }
  }
  else if (uVar3 < 0xeae907f6) {
                    /* try { // try from 03520a0c to 03620a1f has its CatchHandler @ 03520b48 */
    if (uVar3 == 0xe9e90662) {
      bVar2 = System_String__op_Equality(pSVar5,StringLiteral_4713/*"CoordX"*/,(MethodInfo *)0x0);
      if (bVar2) {
        PerkInfoItem__BHHBMJILNLB((PerkInfoItem_o *)0x1,pOVar7,ACCIJLGMHOO,in_x3,HPACPFLKHPK_00,in_x5)
        ;
        return;
      }
    }
    else {
                    /* try { // try from 03520a20 to 03620b23 has its CatchHandler @ 03520854 */
      if ((uVar3 == 0xeae907f5) &&
         (bVar2 = System_String__op_Equality(pSVar5,StringLiteral_4715/*"CoordY"*/,(MethodInfo *)0x0), bVar2)) {
        PerkInfoItem__BCJJIEDLKKN((PerkInfoItem_o *)0x1,pOVar7,ACCIJLGMHOO,in_x3,HPACPFLKHPK_00,in_x5)
        ;
        return;
      }
    }
  }
  else if (uVar3 == 0xeb8e40f4) {
    bVar2 = System_String__op_Equality(pSVar5,StringLiteral_12485/*"StringInArray"*/,(MethodInfo *)0x0);
    if (bVar2) {
                    /* try { // try from 03520e90 to 03620eb7 has its CatchHandler @ 03521030 */
      PerkInfoItem__GNJJNIFJNKF
                ((PerkInfoItem_o *)0x1,BCKBBGCOMJD_05,ACCIJLGMHOO,in_x3,HPACPFLKHPK_00,in_x5);
      return;
    }
  }
  else if (uVar3 == 0xf4b94d71) {
    bVar2 = System_String__op_Equality(pSVar5,StringLiteral_3114/*"Aspect"*/,(MethodInfo *)0x0);
    if (bVar2) {
      PerkInfoItem__ECNFLHKCENA
                ((PerkInfoItem_o *)0x1,BCKBBGCOMJD_06,ACCIJLGMHOO,in_x3,HPACPFLKHPK_00,in_x5);
      return;
    }
  }
  else {
                    /* try { // try from 03520bec to 03620bf7 has its CatchHandler @ 03520854 */
    if ((uVar3 == 0xf4c753db) &&
       (bVar2 = System_String__op_Equality(pSVar5,StringLiteral_11431/*"Round"*/,(MethodInfo *)0x0), bVar2)) {
                    /* try { // try from 03520bf8 to 03620bff has its CatchHandler @ 03520c00 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03520b84 with catch @ 03520c00
                       catch(type#2 @ 00000000) { ... } // from try @ 03520bf8 with catch @ 03520c00
                        */
                    /* try { // try from 03520c04 to 03620e33 has its CatchHandler @ 03520c04
                       catch() { ... } // from try @ 03520c04 with catch @ 03520c04
                       catch() { ... } // from try @ 03520f3c with catch @ 03520c04
                       catch() { ... } // from try @ 03521000 with catch @ 03520c04
                       catch() { ... } // from try @ 03521008 with catch @ 03520c04
                       catch() { ... } // from try @ 035210c4 with catch @ 03520c04 */
      PerkInfoItem__FICAPACFMIA
                ((PerkInfoItem_o *)0x1,BCKBBGCOMJD_02,ACCIJLGMHOO,in_x3,HPACPFLKHPK_00,in_x5);
      return;
    }
  }
                    /* try { // try from 03520ed8 to 03620edf has its CatchHandler @ 03521014 */
  iVar4 = NILLKLHKLHG__EOGEJOBHJMC((ACCIJLGMHOO->fields).IHJHOFMNAOA,(MethodInfo *)0x0);
  pSVar5 = (ACCIJLGMHOO->fields).IHJHOFMNAOA;
  if (pSVar5 != (System_String_o *)0x0) {
                    /* try { // try from 03520eec to 03620ef7 has its CatchHandler @ 03521024 */
                    /* try { // try from 03520efc to 03620f0f has its CatchHandler @ 0352102c */
    pOVar7 = (Model_o *)0x0;
    bVar2 = System_String__Equals(pSVar5,StringLiteral_4531/*"Compare"*/,(MethodInfo *)0x0);
    if ((iVar4 == 0) && (!bVar2)) {
                    /* try { // try from 03520f18 to 03620f3b has its CatchHandler @ 03521038 */
      return;
    }
                    /* try { // try from 03520f3c to 03620fef has its CatchHandler @ 03520c04 */
    PerkInfoItem__NFBKOCDCCMJ
              ((PerkInfoItem_o *)(ulong)bVar2,bVar2,pOVar7,ACCIJLGMHOO,(HDBNGIBFEBA_o *)in_x4,
               HPACPFLKHPK_00,in_x6);
    return;
  }
LAB_03520f44:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GLHBJFHGHLC(NILLKLHKLHG.AOBOECPEMLA HPACPFLKHPK)  [RVA 0x34222D4]
// PerkInfoItem$$GLHBJFHGHLC @ RVA 0x34222D4

void PerkInfoItem__GLHBJFHGHLC
               (PerkInfoItem_o *__this,NILLKLHKLHG_AOBOECPEMLA_o *HPACPFLKHPK,MethodInfo *method)

{
  return;
}


// ===== private void FIBHAIBCFLG(Model BCKBBGCOMJD, NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, HDBNGIBFEBA LOFMIFGLIKN, MMFIDKMDADC HPACPFLKHPK)  [RVA 0x3421E14]
// PerkInfoItem$$FIBHAIBCFLG @ RVA 0x3421E14

void PerkInfoItem__FIBHAIBCFLG
               (PerkInfoItem_o *__this,Model_o *BCKBBGCOMJD,
               NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,HDBNGIBFEBA_o *LOFMIFGLIKN,
               MMFIDKMDADC_o *HPACPFLKHPK,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  MDKJJDGLPKO_GMMKNLAKHKL_o *__this_00;
  System_Object_array *args;
  long lVar3;
  Il2CppObject *pIVar4;
  undefined8 uVar5;
  Model_o *extraout_x1;
  MMFIDKMDADC_Fields *pMVar6;
  System_String_o *pSVar7;
  Il2CppMethodPointer pIVar8;
  Il2CppMethodPointer local_48;
  Il2CppMethodPointer local_38;
  
  if ((DAT_045680e1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MDKJJDGLPKO_GMMKNLAKHKL_TypeInfo);
    FUN_01bab630(&MDKJJDGLPKO_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_2686/*"Abs function error! Argument is not valid expression: {0}"*/);
    DAT_045680e1 = 1;
    BCKBBGCOMJD = extraout_x1;
  }
  local_48 = (Il2CppMethodPointer)0x0;
  if (HPACPFLKHPK != (MMFIDKMDADC_o *)0x0) {
    pMVar6 = &HPACPFLKHPK->fields;
    pSVar7 = pMVar6->HPACPFLKHPK;
    local_38 = (Il2CppMethodPointer)0x0;
    if ((MDKJJDGLPKO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MDKJJDGLPKO_TypeInfo,BCKBBGCOMJD);
    }
    MDKJJDGLPKO__GIENGNEGHPJ((MethodInfo *)0x0);
    __this_00 = (MDKJJDGLPKO_GMMKNLAKHKL_o *)thunk_FUN_01bda818(MDKJJDGLPKO_GMMKNLAKHKL_TypeInfo);
    MDKJJDGLPKO_GMMKNLAKHKL___ctor(__this_00,pSVar7,(MethodInfo *)0x0);
    if (__this_00 != (MDKJJDGLPKO_GMMKNLAKHKL_o *)0x0) {
      iVar2 = MDKJJDGLPKO_GMMKNLAKHKL__LIJNDHIAAIP(__this_00,(MethodInfo *)0x0);
      if (iVar2 == 0) {
                    /* catch() { ... } // from try @ 03521f00 with catch @ 03521f74 */
                    /* catch() { ... } // from try @ 03521dac with catch @ 03521f78 */
                    /* catch() { ... } // from try @ 03521cfc with catch @ 03521f7c */
        pIVar4 = MDKJJDGLPKO_GMMKNLAKHKL__MKKOHKJDCFM(__this_00,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03521d78 with catch @ 03521f80 */
        if (pIVar4 != (Il2CppObject *)0x0) {
                    /* catch() { ... } // from try @ 03521934 with catch @ 03521f84 */
                    /* catch() { ... } // from try @ 03521950 with catch @ 03521f88 */
                    /* catch() { ... } // from try @ 03521960 with catch @ 03521f8c */
          pSVar7 = (System_String_o *)
                   (*pIVar4->klass->vtable[3].methodPtr)(pIVar4,pIVar4->klass->vtable[3].method);
                    /* catch() { ... } // from try @ 03521944 with catch @ 03521f90 */
                    /* catch() { ... } // from try @ 03521968 with catch @ 03521f94 */
                    /* catch() { ... } // from try @ 03521bd8 with catch @ 03521f98 */
          bVar1 = BKOHHDBBJML__MEEKIFOGCCL(pSVar7,(double *)&local_48,(MethodInfo *)0x0);
          pIVar8 = local_38;
                    /* catch() { ... } // from try @ 03521efc with catch @ 03521f9c */
          if (bVar1) {
                    /* catch() { ... } // from try @ 03521ef8 with catch @ 03521fa0 */
                    /* catch() { ... } // from try @ 03521bec with catch @ 03521fa4 */
            local_38 = local_48;
            pIVar8 = local_48;
                    /* catch() { ... } // from try @ 03521910 with catch @ 03521fa8 */
          }
          goto LAB_03521fb0;
        }
      }
      else {
                    /* try { // try from 03521ef0 to 03621ef3 has its CatchHandler @ 03521fb4 */
                    /* try { // try from 03521ef4 to 03621ef7 has its CatchHandler @ 03521fb0 */
                    /* try { // try from 03521ef8 to 03621efb has its CatchHandler @ 03521fa0 */
                    /* try { // try from 03521efc to 03621eff has its CatchHandler @ 03521f9c */
        args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
                    /* try { // try from 03521f00 to 03621f03 has its CatchHandler @ 03521f74 */
        if (args != (System_Object_array *)0x0) {
                    /* try { // try from 03521f04 to 03621f07 has its CatchHandler @ 03521f70 */
          pSVar7 = pMVar6->HPACPFLKHPK;
                    /* try { // try from 03521f08 to 03621f0b has its CatchHandler @ 03521f6c */
                    /* try { // try from 03521f0c to 03621f0f has its CatchHandler @ 03521f68 */
                    /* try { // try from 03521f10 to 03621fdf has its CatchHandler @ 035214bc */
                    /* catch() { ... } // from try @ 035219b4 with catch @ 03521f14 */
                    /* catch() { ... } // from try @ 035219c4 with catch @ 03521f18 */
                    /* catch() { ... } // from try @ 03521d38 with catch @ 03521f1c */
                    /* catch() { ... } // from try @ 03521c88 with catch @ 03521f20 */
          if ((pSVar7 != (System_String_o *)0x0) &&
             (lVar3 = thunk_FUN_01bda71c(pSVar7,(((args->obj).klass)->_1).element_class), lVar3 == 0
             )) {
            uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar5,0);
          }
                    /* catch() { ... } // from try @ 03521c78 with catch @ 03521f24 */
                    /* catch() { ... } // from try @ 03521ca4 with catch @ 03521f28 */
          if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03521fe0 with catch @ 03522008 */
            FUN_01bab8d0();
          }
                    /* catch() { ... } // from try @ 03521ce8 with catch @ 03521f2c */
                    /* catch() { ... } // from try @ 03521cc8 with catch @ 03521f30 */
                    /* catch() { ... } // from try @ 03521bd4 with catch @ 03521f34 */
                    /* catch() { ... } // from try @ 03521ce0 with catch @ 03521f38 */
                    /* catch() { ... } // from try @ 03521cbc with catch @ 03521f3c */
                    /* catch() { ... } // from try @ 0352190c with catch @ 03521f40 */
          args->m_Items[0] = (Il2CppObject *)pSVar7;
                    /* catch() { ... } // from try @ 03521d44 with catch @ 03521f44 */
                    /* catch() { ... } // from try @ 03521c48 with catch @ 03521f48 */
          thunk_FUN_01c20e04(args->m_Items,pSVar7);
                    /* catch() { ... } // from try @ 03521c04 with catch @ 03521f4c */
                    /* catch() { ... } // from try @ 03521c28 with catch @ 03521f50 */
                    /* catch() { ... } // from try @ 03521c5c with catch @ 03521f54 */
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03521c40 with catch @ 03521f58 */
            thunk_FUN_01ba7564();
          }
                    /* catch() { ... } // from try @ 03521c1c with catch @ 03521f5c */
                    /* catch() { ... } // from try @ 03521db8 with catch @ 03521f60 */
                    /* catch() { ... } // from try @ 03521d9c with catch @ 03521f64 */
                    /* catch() { ... } // from try @ 03521f0c with catch @ 03521f68 */
          UnityEngine_Debug__LogErrorFormat(StringLiteral_2686/*"Abs function error! Argument is not valid expression: {0}"*/,args,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03521f08 with catch @ 03521f6c */
          pIVar8 = (Il2CppMethodPointer)0x0;
                    /* catch() { ... } // from try @ 03521f04 with catch @ 03521f70 */
LAB_03521fb0:
                    /* catch() { ... } // from try @ 03521ef4 with catch @ 03521fb0 */
                    /* catch() { ... } // from try @ 03521ef0 with catch @ 03521fb4 */
                    /* catch() { ... } // from try @ 03521bb8 with catch @ 03521fb8 */
                    /* catch() { ... } // from try @ 035218f0 with catch @ 03521fbc */
                    /* catch() { ... } // from try @ 03521dd0 with catch @ 03521fc0 */
          if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          local_38 = (Il2CppMethodPointer)ABS((double)pIVar8);
          pSVar7 = System_Double__ToString((double)local_38,(MethodInfo *)&stack0xffffffffffffffc8);
                    /* try { // try from 03521fe0 to 03621fe3 has its CatchHandler @ 03522008 */
          pMVar6->HPACPFLKHPK = pSVar7;
                    /* try { // try from 03521fe4 to 03622017 has its CatchHandler @ 035214bc */
          thunk_FUN_01c20e04(pMVar6,pSVar7);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool EGAHACPKIAG(string CJNHFNHJHPE)  [RVA 0x34222D8]
// PerkInfoItem$$EGAHACPKIAG @ RVA 0x34222D8

bool PerkInfoItem__EGAHACPKIAG(PerkInfoItem_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *a;
  int index;
  
  if ((DAT_045680e2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    DAT_045680e2 = 1;
  }
  bVar2 = System_String__IsNullOrEmpty(CJNHFNHJHPE,(MethodInfo *)0x0);
  if (bVar2) {
    return true;
  }
  __this_00 = (__this->fields).FMFKGEJLDGO;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    index = 0;
    do {
      iVar1 = (__this_00->fields)._size;
      if (iVar1 <= index) {
        return index < iVar1;
      }
      a = (System_String_o *)
          System_Collections_Generic_List<object>__get_Item
                    ((System_Collections_Generic_List_object__o *)__this_00,index,
                     Method_System_Collections_Generic_List<string>_get_Item__);
      bVar2 = System_String__op_Equality(a,CJNHFNHJHPE,(MethodInfo *)0x0);
      if (bVar2) {
        return index < iVar1;
      }
      __this_00 = (__this->fields).FMFKGEJLDGO;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_string__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IDNDFIFCOFO(XmlAttribute CBCJPCKIOPJ)  [RVA 0x341FB64]
// PerkInfoItem$$IDNDFIFCOFO @ RVA 0x341FB64

void PerkInfoItem__IDNDFIFCOFO
               (PerkInfoItem_o *__this,System_Xml_XmlAttribute_o *CBCJPCKIOPJ,MethodInfo *method)

{
  uint length;
  Il2CppObject *__this_00;
  bool bVar1;
  uint16_t uVar2;
  System_String_o *OAPELGIBHGF;
  NILLKLHKLHG_o *__this_01;
  System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *__this_02;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_045680e3 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<NILLKLHKLHG_DIPIFJPCFOE>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<NILLKLHKLHG_DIPIFJPCFOE>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<NILLKLHKLHG_DIPIFJPCFOE>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_GetEnumerator__);
    FUN_01bab630(&NILLKLHKLHG_TypeInfo);
    DAT_045680e3 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if (CBCJPCKIOPJ != (System_Xml_XmlAttribute_o *)0x0) {
                    /* try { // try from 0351fbdc to 0361fbe3 has its CatchHandler @ 0351fc6c */
                    /* try { // try from 0351fbec to 0361fbfb has its CatchHandler @ 0351fc68 */
    (*(CBCJPCKIOPJ->klass->vtable)._8_get_Name.methodPtr)
              (CBCJPCKIOPJ,(CBCJPCKIOPJ->klass->vtable)._8_get_Name.method);
    OAPELGIBHGF = (System_String_o *)
                  (*(CBCJPCKIOPJ->klass->vtable)._9_get_Value.methodPtr)
                            (CBCJPCKIOPJ,(CBCJPCKIOPJ->klass->vtable)._9_get_Value.method);
                    /* try { // try from 0351fc04 to 0361fc17 has its CatchHandler @ 0351fc60 */
    __this_01 = (NILLKLHKLHG_o *)thunk_FUN_01bda818(NILLKLHKLHG_TypeInfo);
                    /* try { // try from 0351fc20 to 0361fc2f has its CatchHandler @ 0351fc64 */
    NILLKLHKLHG___ctor(__this_01,OAPELGIBHGF,(MethodInfo *)0x0);
    if ((__this_01 != (NILLKLHKLHG_o *)0x0) &&
       (__this_02 = (__this_01->fields).PIDHBKCJIHG,
       __this_02 != (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0)) {
                    /* try { // try from 0351fc30 to 0361fc53 has its CatchHandler @ 0351fb44 */
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)__this_02,
                 Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
                    /* try { // try from 0351fc54 to 0361fc57 has its CatchHandler @ 0351fc5c */
                    /* try { // try from 0351fc58 to 0361fc83 has its CatchHandler @ 0351fb44 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0351fc54 with catch @ 0351fc5c
                        */
      local_60.fields._list = local_78.fields._list;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0351fc04 with catch @ 0351fc60
                        */
      local_60.fields._current = local_78.fields._current;
      while( true ) {
        do {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0351fbec with catch @ 0351fc68
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0351fbdc with catch @ 0351fc6c
                        */
          bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_60,
                             Method_System_Collections_Generic_List_Enumerator<NILLKLHKLHG_DIPIFJPCFOE>_MoveNext__
                            );
          __this_00 = local_60.fields._current;
          if (!bVar1) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<NILLKLHKLHG_DIPIFJPCFOE>_Dispose__
                      );
            (*(CBCJPCKIOPJ->klass->vtable)._10_set_Value.methodPtr)
                      (CBCJPCKIOPJ,OAPELGIBHGF,(CBCJPCKIOPJ->klass->vtable)._10_set_Value.method);
            return;
          }
          if ((NILLKLHKLHG_DIPIFJPCFOE_o *)local_60.fields._current ==
              (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* try { // try from 0351fc84 to 0361fc87 has its CatchHandler @ 0351fcb0 */
                    /* try { // try from 0351fc88 to 0361fcbf has its CatchHandler @ 0351fb44 */
          pSVar3 = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK
                             ((NILLKLHKLHG_DIPIFJPCFOE_o *)local_60.fields._current,
                              (MethodInfo *)0x0);
          if (pSVar3 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = System_String__get_Chars(pSVar3,0,(MethodInfo *)0x0);
        } while (uVar2 != 0x5f);
                    /* catch() { ... } // from try @ 0351fc84 with catch @ 0351fcb0 */
        pSVar3 = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK
                           ((NILLKLHKLHG_DIPIFJPCFOE_o *)__this_00,(MethodInfo *)0x0);
                    /* try { // try from 0351fcc0 to 0361fcc7 has its CatchHandler @ 0351fcdc */
        pSVar4 = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK
                           ((NILLKLHKLHG_DIPIFJPCFOE_o *)__this_00,(MethodInfo *)0x0);
        if (pSVar4 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 0351fcc8 to 0361fcd3 has its CatchHandler @ 0351fb44 */
        if (pSVar3 == (System_String_o *)0x0) break;
        length = (pSVar4->fields)._stringLength - 1;
        method_00 = (MethodInfo *)(ulong)length;
                    /* try { // try from 0351fcd4 to 0361fcdb has its CatchHandler @ 0351fcdc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0351fcc0 with catch @ 0351fcdc
                       catch(type#2 @ 00000000) { ... } // from try @ 0351fcd4 with catch @ 0351fcdc
                        */
        pSVar3 = System_String__Substring(pSVar3,1,length,(MethodInfo *)0x0);
        pSVar3 = PerkInfoItem__EOBFJAOLIMH(__this,pSVar3,method_00);
        pSVar4 = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK
                           ((NILLKLHKLHG_DIPIFJPCFOE_o *)__this_00,(MethodInfo *)0x0);
        if (OAPELGIBHGF == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        OAPELGIBHGF = System_String__Replace(OAPELGIBHGF,pSVar4,pSVar3,(MethodInfo *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HJCJPFFHFAD(Model BCKBBGCOMJD, NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, HDBNGIBFEBA LOFMIFGLIKN, MMFIDKMDADC HPACPFLKHPK)  [RVA 0x3420F48]
// PerkInfoItem$$HJCJPFFHFAD @ RVA 0x3420F48

void PerkInfoItem__HJCJPFFHFAD
               (PerkInfoItem_o *__this,Model_o *BCKBBGCOMJD,
               NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,HDBNGIBFEBA_o *LOFMIFGLIKN,
               MMFIDKMDADC_o *HPACPFLKHPK,MethodInfo *method)

{
  System_String_o *pSVar1;
  Model_o *extraout_x1;
  float local_24;
  
  if ((DAT_045680e4 & 1) == 0) {
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    DAT_045680e4 = 1;
    BCKBBGCOMJD = extraout_x1;
  }
  if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LIIFLGALGNK_TypeInfo,BCKBBGCOMJD);
  }
  local_24 = LIIFLGALGNK__GFHNCCOMPAJ(1.0,(MethodInfo *)0x0);
  pSVar1 = System_Single__ToString(local_24,(MethodInfo *)&local_24);
  if (HPACPFLKHPK != (MMFIDKMDADC_o *)0x0) {
    (HPACPFLKHPK->fields).HPACPFLKHPK = pSVar1;
    thunk_FUN_01c20e04(&HPACPFLKHPK->fields,pSVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public XmlNode BNPHOBKCOHJ()  [RVA 0x342242C]
// PerkInfoItem$$BNPHOBKCOHJ @ RVA 0x342242C

System_Xml_XmlNode_o * PerkInfoItem__BNPHOBKCOHJ(PerkInfoItem_o *__this,MethodInfo *method)

{
  return (__this->fields).DCDJOJGHJEB;
}


// ===== public void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x341E3E4]
// PerkInfoItem$$HNIHOIAMDPC @ RVA 0x341E3E4

/* WARNING: Removing unreachable block (ram,0x0351ef20) */
/* WARNING: Removing unreachable block (ram,0x0351f078) */

void PerkInfoItem__HNIHOIAMDPC
               (PerkInfoItem_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  int32_t iVar5;
  int32_t iVar6;
  System_Xml_XmlDocument_o *__this_00;
  System_Xml_XmlNode_o *pSVar7;
  System_Xml_XmlAttributeCollection_o *pSVar8;
  System_Xml_XmlAttribute_o *pSVar9;
  System_String_o *pSVar10;
  System_String_array *pSVar11;
  System_Collections_Generic_List_IHDFIJGDCBL__o *__this_01;
  System_Xml_XmlNode_o *pSVar12;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  long *plVar13;
  undefined8 *puVar14;
  MethodInfo *pMVar15;
  MethodInfo *method_00;
  ABCMPMHNMAP_o *pAVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  System_String_o **ppSVar20;
  FPLCEOJCPOD_o *__this_03;
  System_Collections_Generic_List_string__o *pSVar21;
  System_String_Fields PMACBPAMPJA;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar22;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar23;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_e0;
  float local_b4;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_b0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045680e5 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_ObscuredString>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_Dispose__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredString>_Dispose__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_MoveNext__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredString>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredString>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_get_Current__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_ObscuredString>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_ObscuredString>_get_Value__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHDFIJGDCBL>_GetEnumerator__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&PNPPAHHCBOM_TypeInfo);
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_4507/*"Combo"*/);
    FUN_01bab630(&StringLiteral_8111/*"ItemSet"*/);
    FUN_01bab630(&StringLiteral_10235/*"PerkType"*/);
    FUN_01bab630(&StringLiteral_9209/*"Move"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_3399/*"BarShift"*/);
    FUN_01bab630(&StringLiteral_11876/*"Set"*/);
    FUN_01bab630(&StringLiteral_3396/*"BarScale"*/);
    FUN_01bab630(&StringLiteral_11030/*"RatingEvaluation"*/);
    FUN_01bab630(&StringLiteral_3398/*"BarSetAttribute"*/);
    FUN_01bab630(&StringLiteral_8409/*"Level"*/);
    FUN_01bab630(&StringLiteral_13924/*"Trigger"*/);
    FUN_01bab630(&StringLiteral_12864/*"Template"*/);
    FUN_01bab630(&StringLiteral_2799/*"Alias"*/);
    FUN_01bab630(&StringLiteral_7340/*"Image"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_5304/*"Description"*/);
    FUN_01bab630(&StringLiteral_7076/*"Hidden"*/);
    FUN_01bab630(&StringLiteral_7230/*"ID"*/);
    DAT_045680e5 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_b0.fields._getEnumeratorRetType = 0;
  local_b0.fields._36_4_ = 0;
  local_b0.fields._version = 0;
  local_b0.fields._index = 0;
  local_b0.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_b0.fields._current.fields.value = (Il2CppObject *)0x0;
  local_b0.fields._current.fields.key = (Il2CppObject *)0x0;
  local_b4 = 0.0;
  __this_00 = (System_Xml_XmlDocument_o *)thunk_FUN_01bda818(System_Xml_XmlDocument_TypeInfo);
  System_Xml_XmlDocument___ctor(__this_00,(MethodInfo *)0x0);
  pSVar7 = EIABCPKDEBD__DGPOFACHGMP
                     ((System_Xml_XmlNode_o *)(__this->fields).DHNEDFGMFGM,AHDGNOJPPIB,
                      (MethodInfo *)0x0);
  (__this->fields).DCDJOJGHJEB = pSVar7;
  thunk_FUN_01c20e04();
  pSVar7 = EIABCPKDEBD__DGPOFACHGMP((System_Xml_XmlNode_o *)__this_00,AHDGNOJPPIB,(MethodInfo *)0x0)
  ;
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar8 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar8,StringLiteral_7230/*"ID"*/,(MethodInfo *)0x0);
    iVar5 = EIABCPKDEBD__EHJNCGCICMP(pSVar9,-1,(MethodInfo *)0x0);
    CVar22 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
             CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar5,(MethodInfo *)0x0);
    (__this->fields)._MDAJFAPLLOH_k__BackingField.fields = CVar22;
    pSVar8 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar8,StringLiteral_8409/*"Level"*/,(MethodInfo *)0x0);
      iVar5 = EIABCPKDEBD__EHJNCGCICMP(pSVar9,0,(MethodInfo *)0x0);
      CVar22 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
               CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar5,(MethodInfo *)0x0);
      (__this->fields).NOPGBJNLFHM.fields = CVar22;
      pSVar8 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar8,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
        pSVar10 = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,(System_String_o *)0x0,(MethodInfo *)0x0);
        (__this->fields).JIJLBFGKNJK = pSVar10;
        thunk_FUN_01c20e04();
        pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar8,StringLiteral_2799/*"Alias"*/,(MethodInfo *)0x0);
          pSVar10 = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,(System_String_o *)0x0,(MethodInfo *)0x0);
          (__this->fields).JMGIACHBIKG = pSVar10;
          thunk_FUN_01c20e04();
          pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 0351e784 to 0361e8bb has its CatchHandler @ 0351e784
                       catch() { ... } // from try @ 0351e784 with catch @ 0351e784
                       catch() { ... } // from try @ 0351ea30 with catch @ 0351e784
                       catch() { ... } // from try @ 0351eadc with catch @ 0351e784
                       catch() { ... } // from try @ 0351eae4 with catch @ 0351e784
                       catch() { ... } // from try @ 0351ebac with catch @ 0351e784 */
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_3396/*"BarScale"*/,(MethodInfo *)0x0);
            pSVar10 = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,(System_String_o *)0x0,(MethodInfo *)0x0);
            (__this->fields).FFDAPDCFBDO = pSVar10;
            thunk_FUN_01c20e04();
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar8,StringLiteral_3399/*"BarShift"*/,(MethodInfo *)0x0);
              iVar5 = EIABCPKDEBD__EHJNCGCICMP(pSVar9,0,(MethodInfo *)0x0);
              CVar22 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                       CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                 (iVar5,(MethodInfo *)0x0);
              (__this->fields).EAGEGPKAEKI.fields = CVar22;
              pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar8,StringLiteral_3398/*"BarSetAttribute"*/,(MethodInfo *)0x0);
                pSVar10 = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,(System_String_o *)0x0,(MethodInfo *)0x0);
                ppSVar20 = &(__this->fields).EHLKHAKJGGH;
                *ppSVar20 = pSVar10;
                thunk_FUN_01c20e04(ppSVar20,pSVar10);
                pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                         (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                if (pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar8,StringLiteral_7340/*"Image"*/,(MethodInfo *)0x0);
                  pSVar10 = EIABCPKDEBD__JPKEHIBGOEM
                                      (pSVar9,(System_String_o *)0x0,(MethodInfo *)0x0);
                  (__this->fields).KPDPJONADPJ = pSVar10;
                  thunk_FUN_01c20e04();
                  if ((pSVar7 != (System_Xml_XmlNode_o *)0x0) &&
                     (pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                               (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                                         (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method),
                     pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
                    /* try { // try from 0351e8bc to 0361e8e3 has its CatchHandler @ 0351eb14 */
                    pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar8,StringLiteral_5304/*"Description"*/,(MethodInfo *)0x0);
                    pSVar10 = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                    (__this->fields).BPCADJLKKGA = pSVar10;
                    thunk_FUN_01c20e04();
                    pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                             (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                                       (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
                    if (pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                      pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar8,StringLiteral_9209/*"Move"*/,(MethodInfo *)0x0);
                      pSVar10 = EIABCPKDEBD__JPKEHIBGOEM
                                          (pSVar9,(System_String_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 0351e918 to 0361e943 has its CatchHandler @ 0351eb10 */
                      (__this->fields).JJONOCGMEMK = pSVar10;
                      thunk_FUN_01c20e04();
                      pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                               (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                                         (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method);
                      if (pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                        pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                                           (pSVar8,StringLiteral_7076/*"Hidden"*/,(MethodInfo *)0x0);
                        bVar4 = EIABCPKDEBD__FMBMNDIGLIG(pSVar9,false,(MethodInfo *)0x0);
                        CVar23 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
                                 CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                                           (bVar4,(MethodInfo *)0x0);
                        (__this->fields).CHLMHEGKKNH.fields = CVar23;
                        pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                                 (*(pSVar7->klass->vtable)._16_get_Attributes.methodPtr)
                                           (pSVar7,(pSVar7->klass->vtable)._16_get_Attributes.method
                                           );
                    /* try { // try from 0351e984 to 0361e98b has its CatchHandler @ 0351eb08 */
                        if (pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 0351e994 to 0361e99b has its CatchHandler @ 0351eb00 */
                          pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                                             (pSVar8,StringLiteral_8111/*"ItemSet"*/,(MethodInfo *)0x0);
                    /* try { // try from 0351e99c to 0361e9a7 has its CatchHandler @ 0351eaf0 */
                          pSVar10 = EIABCPKDEBD__JPKEHIBGOEM
                                              (pSVar9,(System_String_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 0351e9a8 to 0361e9af has its CatchHandler @ 0351eb04 */
                          (__this->fields).AKBDHOEGNNG = pSVar10;
                          thunk_FUN_01c20e04();
                    /* try { // try from 0351e9bc to 0361ea2f has its CatchHandler @ 0351eb0c */
                          pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                             (AHDGNOJPPIB,
                                              (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                             );
                          if (pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                                               (pSVar8,StringLiteral_12864/*"Template"*/,(MethodInfo *)0x0);
                            pSVar10 = EIABCPKDEBD__JPKEHIBGOEM
                                                (pSVar9,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                            if (pSVar10 != (System_String_o *)0x0) {
                              pSVar21 = (__this->fields).FMFKGEJLDGO;
                              method_00 = (MethodInfo *)0x0;
                              pSVar11 = System_String__Split(pSVar10,0x7c,0,(MethodInfo *)0x0);
                              if (pSVar21 != (System_Collections_Generic_List_string__o *)0x0) {
                                System_Collections_Generic_List<object>__AddRange
                                          ((System_Collections_Generic_List_object__o *)pSVar21,
                                           (System_Collections_Generic_IEnumerable_T__o *)pSVar11,
                                           Method_System_Collections_Generic_List<string>_AddRange__
                                          );
                                lVar17 = Method_System_Collections_Generic_List<string>_Add__;
                                pSVar21 = (__this->fields).FMFKGEJLDGO;
                                if (pSVar21 != (System_Collections_Generic_List_string__o *)0x0) {
                    /* try { // try from 0351ea30 to 0361eac3 has its CatchHandler @ 0351e784 */
                                  pSVar10 = (__this->fields).JIJLBFGKNJK;
                                  pSVar11 = (pSVar21->fields)._items;
                                  (pSVar21->fields)._version = (pSVar21->fields)._version + 1;
                                  if (pSVar11 != (System_String_array *)0x0) {
                                    uVar2 = (pSVar21->fields)._size;
                                    if (uVar2 < (uint)pSVar11->max_length) {
                                      (pSVar21->fields)._size = uVar2 + 1;
                                      pSVar11->m_Items[(int)uVar2] = pSVar10;
                                      thunk_FUN_01c20e04(pSVar11->m_Items + (int)uVar2);
                                    }
                                    else {
                                      System_Collections_Generic_List<object>__AddWithResize
                                                ((System_Collections_Generic_List_object__o *)
                                                 pSVar21,(Il2CppObject *)pSVar10,
                                                 *(MethodInfo_26E4DAC **)
                                                  (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70
                                                  ));
                                    }
                                    (__this->fields).OCABLLPNEGL = 1;
                                    pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                                             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.
                                               methodPtr)(AHDGNOJPPIB,
                                                          (AHDGNOJPPIB->klass->vtable).
                                                          _16_get_Attributes.method);
                                    if (pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                                      pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                         (pSVar8,StringLiteral_10235/*"PerkType"*/,
                                                          (MethodInfo *)0x0);
                    /* try { // try from 0351eac4 to 0361eacb has its CatchHandler @ 0351eb18 */
                                      pSVar10 = EIABCPKDEBD__JPKEHIBGOEM
                                                          (pSVar9,StringLiteral_1/*""*/,(MethodInfo *)0x0)
                                      ;
                    /* try { // try from 0351eacc to 0361eacf has its CatchHandler @ 0351eafc */
                                      if (pSVar10 != (System_String_o *)0x0) {
                    /* try { // try from 0351ead0 to 0361ead3 has its CatchHandler @ 0351eaf8 */
                    /* try { // try from 0351ead4 to 0361eadb has its CatchHandler @ 0351eaf4 */
                    /* try { // try from 0351eadc to 0361eadf has its CatchHandler @ 0351e784 */
                    /* try { // try from 0351eae0 to 0361eae3 has its CatchHandler @ 0351eaec */
                    /* try { // try from 0351eae4 to 0361eb27 has its CatchHandler @ 0351e784 */
                                        bVar4 = System_String__Equals
                                                          (pSVar10,StringLiteral_4507/*"Combo"*/,
                                                           (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0351eae0 with catch @ 0351eaec */
                                        if (bVar4) {
                    /* catch() { ... } // from try @ 0351e99c with catch @ 0351eaf0 */
                                          (__this->fields).OCABLLPNEGL = 0;
                                        }
                    /* catch() { ... } // from try @ 0351ead4 with catch @ 0351eaf4 */
                    /* catch() { ... } // from try @ 0351ead0 with catch @ 0351eaf8 */
                    /* catch() { ... } // from try @ 0351eacc with catch @ 0351eafc */
                                        if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0351e994 with catch @ 0351eb00 */
                                          thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 0351e9a8 with catch @ 0351eb04 */
                                        }
                    /* catch() { ... } // from try @ 0351e984 with catch @ 0351eb08 */
                    /* catch() { ... } // from try @ 0351e9bc with catch @ 0351eb0c */
                                        pAVar16 = GameUtils_TypeInfo->static_fields->EDKELIKNDEP;
                    /* catch() { ... } // from try @ 0351e918 with catch @ 0351eb10 */
                    /* catch() { ... } // from try @ 0351e8bc with catch @ 0351eb14 */
                    /* catch() { ... } // from try @ 0351eac4 with catch @ 0351eb18 */
                                        if ((pAVar16 != (ABCMPMHNMAP_o *)0x0) &&
                                           (__this_01 = (pAVar16->fields).ACHJNNOKEDK,
                                           __this_01 !=
                                           (System_Collections_Generic_List_IHDFIJGDCBL__o *)0x0)) {
                    /* try { // try from 0351eb28 to 0361eb2b has its CatchHandler @ 0351eb3c */
                    /* catch() { ... } // from try @ 0351eb28 with catch @ 0351eb3c */
                    /* try { // try from 0351eb44 to 0361ebab has its CatchHandler @ 0351ebc0 */
                                          System_Collections_Generic_List<object>__GetEnumerator
                                                    ((
                                                  System_Collections_Generic_List_Enumerator_T__o *)
                                                  &local_e0,
                                                  (System_Collections_Generic_List_object__o *)
                                                  __this_01,
                                                  Method_System_Collections_Generic_List<IHDFIJGDCBL>_GetEnumerator__
                                                  );
                                          local_80.fields._index = local_e0.fields._version;
                                          local_80.fields._version = local_e0.fields._index;
                                          local_80.fields._list =
                                               (System_Collections_Generic_List_T__o *)
                                               local_e0.fields._dictionary;
                                          local_80.fields._current =
                                               local_e0.fields._current.fields.key;
                                          while (bVar4 = 
                                                  System_Collections_Generic_List_Enumerator<object>__MoveNext
                                                            (&local_80,
                                                                                                                          
                                                  Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_MoveNext__
                                                  ), pIVar3 = local_80.fields._current, bVar4) {
                                            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                                                     (*(pSVar7->klass->vtable)._16_get_Attributes.
                                                       methodPtr)(pSVar7,(pSVar7->klass->vtable).
                                                                         _16_get_Attributes.method);
                                            if ((System_String_o *)pIVar3 == (System_String_o *)0x0)
                                            {
                    /* WARNING: Subroutine does not return */
                                              FUN_01bab8c8();
                                            }
                                            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0
                                               ) {
                    /* WARNING: Subroutine does not return */
                                              FUN_01bab8c8();
                                            }
                                            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                               (pSVar8,(System_String_o *)
                                                                       *(System_String_Fields *)
                                                                        ((long)pIVar3 + 0x10),
                                                                (MethodInfo *)0x0);
                    /* try { // try from 0351ebac to 0361ebb7 has its CatchHandler @ 0351e784 */
                                            if (pSVar9 != (System_Xml_XmlAttribute_o *)0x0) {
                                              __this_03 = (__this->fields).ACHJNNOKEDK;
                                              PMACBPAMPJA = *(System_String_Fields *)
                                                             ((long)pIVar3 + 0x10);
                    /* try { // try from 0351ebb8 to 0361ebbf has its CatchHandler @ 0351ebc0 */
                    /* catch() { ... } // from try @ 0351eb44 with catch @ 0351ebc0
                       catch() { ... } // from try @ 0351ebb8 with catch @ 0351ebc0 */
                                              iVar5 = EIABCPKDEBD__EHJNCGCICMP
                                                                (pSVar9,0,(MethodInfo *)0x0);
                                              if (__this_03 == (FPLCEOJCPOD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                FUN_01bab8c8();
                                              }
                                              method_00 = (MethodInfo *)0x0;
                                              FPLCEOJCPOD__FOOHBJNHOKK
                                                        (__this_03,(System_String_o *)PMACBPAMPJA,
                                                         iVar5,false,(MethodInfo *)0x0);
                                            }
                                          }
                                          System_Collections_Generic_List_Enumerator<object>__Dispose
                                                    (&local_80,
                                                                                                          
                                                  Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_Dispose__
                                                  );
                                          pMVar15 = (pSVar7->klass->vtable)._51_get_Item.method;
                                          pSVar12 = (System_Xml_XmlNode_o *)
                                                    (*(pSVar7->klass->vtable)._51_get_Item.methodPtr
                                                    )(pSVar7,StringLiteral_11876/*"Set"*/);
                                          if (pSVar12 != (System_Xml_XmlNode_o *)0x0) {
                                            PerkInfoItem__JJHBIPGAPPG(__this,pSVar12,pMVar15);
                                          }
                                          CVar22 = (
                                                  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields
                                                  )
                                                  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                                            (0,(MethodInfo *)0x0);
                                          __this_02 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)(__this->fields).NBOMAJCMIIL;
                                          (__this->fields).EMLGCOFGNKH.fields = CVar22;
                                          if (__this_02 !=
                                              (System_Collections_Generic_Dictionary_object__object__o
                                               *)0x0) {
                                            System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
                                                      (&local_e0,__this_02,
                                                                                                              
                                                  Method_System_Collections_Generic_Dictionary<string,_ObscuredString>_GetEnumerator__
                                                  );
                                            local_b0.fields._version = local_e0.fields._version;
                                            local_b0.fields._index = local_e0.fields._index;
                                            local_b0.fields._dictionary =
                                                 local_e0.fields._dictionary;
                                            local_b0.fields._current.fields.value =
                                                 local_e0.fields._current.fields.value;
                                            local_b0.fields._current.fields.key =
                                                 local_e0.fields._current.fields.key;
                                            local_b0.fields._getEnumeratorRetType =
                                                 local_e0.fields._getEnumeratorRetType;
                                            local_b0.fields._36_4_ = local_e0.fields._36_4_;
                                            while (bVar4 = 
                                                  System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                                                            (&local_b0,
                                                                                                                          
                                                  Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredString>_MoveNext__
                                                  ), pIVar3 = local_b0.fields._current.fields.value,
                                                  bVar4) {
                                              bVar4 = System_String__op_Equality
                                                                ((System_String_o *)
                                                                 local_b0.fields._current.fields.key
                                                                 ,*ppSVar20,(MethodInfo *)0x0);
                                              if (bVar4) {
                                                pSVar10 = 
                                                  CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                                                            ((
                                                  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o
                                                  *)pIVar3,(MethodInfo *)0x0);
                                                if ((PNPPAHHCBOM_TypeInfo->_2).cctor_finished == 0)
                                                {
                                                  thunk_FUN_01ba7564();
                                                }
                                                bVar4 = PNPPAHHCBOM__MEEKIFOGCCL
                                                                  (pSVar10,&local_b4,
                                                                   (MethodInfo *)0x0);
                                                if (bVar4) {
                                                  iVar5 = -0x80000000;
                                                  if (local_b4 != INFINITY) {
                                                    iVar5 = (int)local_b4;
                                                  }
                                                  CVar22 = (
                                                  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields
                                                  )
                                                  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                                            (iVar5,(MethodInfo *)0x0);
                                                  (__this->fields).EMLGCOFGNKH.fields = CVar22;
                                                }
                                                else {
                                                  CVar22 = (__this->fields).EMLGCOFGNKH.fields;
                                                }
                                                iVar5 = 
                                                  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                                            ((
                                                  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                                                  CVar22,(MethodInfo *)0x0);
                                                iVar6 = 
                                                  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                                            ((
                                                  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                                                  (__this->fields).EAGEGPKAEKI.fields,
                                                  (MethodInfo *)0x0);
                                                CVar22 = (
                                                  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields
                                                  )
                                                  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                                            (iVar6 + iVar5,(MethodInfo *)0x0);
                                                (__this->fields).EMLGCOFGNKH.fields = CVar22;
                                              }
                                            }
                                            System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
                                                      (&local_b0,
                                                                                                              
                                                  Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredString>_Dispose__
                                                  );
                                            plVar13 = (long *)(*(pSVar7->klass->vtable).
                                                                _13_get_ChildNodes.methodPtr)
                                                                        (pSVar7,(pSVar7->klass->
                                                                                vtable).
                                                  _13_get_ChildNodes.method);
                                            if (plVar13 != (long *)0x0) {
                                              plVar13 = (long *)(**(code **)(*plVar13 + 0x1b8))
                                                                          (plVar13,*(undefined8 *)
                                                                                    (*plVar13 +
                                                                                    0x1c0));
                                              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                FUN_01bab8c8();
                                              }
                                              do {
                                                lVar17 = *plVar13;
                                                uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                                                if (uVar18 != 0) {
                                                  piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                                                  do {
                                                    if (*(System_Collections_IEnumerator_c **)
                                                         (piVar19 + -2) ==
                                                        System_Collections_IEnumerator_TypeInfo) {
                                                      puVar14 = (undefined8 *)
                                                                (lVar17 + (long)*piVar19 * 0x10 +
                                                                0x138);
                                                      goto LAB_0351edbc;
                                                    }
                                                    uVar18 = uVar18 - 1;
                                                    piVar19 = piVar19 + 4;
                                                  } while (uVar18 != 0);
                                                }
                                                puVar14 = (undefined8 *)
                                                          FUN_01b81914(plVar13,
                                                  System_Collections_IEnumerator_TypeInfo,0);
LAB_0351edbc:
                                                uVar18 = (*(code *)*puVar14)(plVar13,puVar14[1]);
                                                if ((uVar18 & 1) == 0) {
                                                  plVar13 = (long *)thunk_FUN_01bda71c(plVar13,
                                                  System_IDisposable_TypeInfo);
                                                  if (plVar13 == (long *)0x0) goto LAB_0351ef14;
                                                  lVar17 = *plVar13;
                                                  uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                                                  if (uVar18 == 0) goto LAB_0351eeec;
                                                  piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                                                  goto LAB_0351eed4;
                                                }
                                                lVar17 = *plVar13;
                                                uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                                                if (uVar18 != 0) {
                                                  piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                                                  do {
                                                    if (*(System_Collections_IEnumerator_c **)
                                                         (piVar19 + -2) ==
                                                        System_Collections_IEnumerator_TypeInfo) {
                                                      puVar14 = (undefined8 *)
                                                                (lVar17 + (long)(*piVar19 + 1) *
                                                                          0x10 + 0x138);
                                                      goto LAB_0351ee1c;
                                                    }
                                                    uVar18 = uVar18 - 1;
                                                    piVar19 = piVar19 + 4;
                                                  } while (uVar18 != 0);
                                                }
                                                puVar14 = (undefined8 *)
                                                          FUN_01b81914(plVar13,
                                                  System_Collections_IEnumerator_TypeInfo,1);
LAB_0351ee1c:
                                                pSVar12 = (System_Xml_XmlNode_o *)
                                                          (*(code *)*puVar14)(plVar13,puVar14[1]);
                                                if (pSVar12 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                  FUN_01bab8c8();
                                                }
                                                bVar1 = (System_Xml_XmlNode_TypeInfo->_2).
                                                        naturalAligment;
                                                if (((pSVar12->klass->_2).naturalAligment < bVar1)
                                                   || ((pSVar12->klass->_2).typeHierarchy
                                                       [(ulong)bVar1 - 1] !=
                                                       (Il2CppClass *)System_Xml_XmlNode_TypeInfo))
                                                {
                    /* WARNING: Subroutine does not return */
                                                  FUN_01babc64(pSVar12);
                                                }
                                                pSVar10 = (System_String_o *)
                                                          (*(pSVar12->klass->vtable)._8_unknown.
                                                            methodPtr)(pSVar12,(pSVar12->klass->
                                                                               vtable)._8_unknown.
                                                                               method);
                                                pMVar15 = (MethodInfo *)0x0;
                                                bVar4 = System_String__op_Equality
                                                                  (pSVar10,StringLiteral_13924/*"Trigger"*/,
                                                                   (MethodInfo *)0x0);
                                                if (bVar4) {
                                                  PerkInfoItem__PLEKILLMEEK(__this,pSVar12,pMVar15);
                                                  PerkInfoItem__IAPPOPBLBHP(__this,pSVar12,pMVar15);
                                                }
                                              } while( true );
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
LAB_0351eed4:
    if (*(System_IDisposable_c **)(piVar19 + -2) == System_IDisposable_TypeInfo) {
      puVar14 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_0351ef08;
    }
  }
LAB_0351eeec:
  puVar14 = (undefined8 *)FUN_01b81914(plVar13,System_IDisposable_TypeInfo,0);
LAB_0351ef08:
  (*(code *)*puVar14)(plVar13,puVar14[1]);
LAB_0351ef14:
  pSVar7 = (System_Xml_XmlNode_o *)
           (*(pSVar7->klass->vtable)._51_get_Item.methodPtr)
                     (pSVar7,StringLiteral_11030/*"RatingEvaluation"*/,(pSVar7->klass->vtable)._51_get_Item.method);
  if (pSVar7 != (System_Xml_XmlNode_o *)0x0) {
    PerkInfoItem__OOPHKKNELPB(__this,pSVar7,(__this->fields).NBOMAJCMIIL,method_00);
  }
  return;
}


// ===== private static void .cctor()  [RVA 0x3422434]
// PerkInfoItem$$.cctor @ RVA 0x3422434

void PerkInfoItem___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__HEFOANCOHDC_BLLOEEDBDEO__o *__this;
  
  if ((DAT_045680e6 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_HEFOANCOHDC_BLLOEEDBDEO>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_HEFOANCOHDC_BLLOEEDBDEO>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_HEFOANCOHDC_BLLOEEDBDEO>_TypeInfo);
    FUN_01bab630(&PerkInfoItem_TypeInfo);
    FUN_01bab630(&StringLiteral_21606/*"trunc"*/);
    FUN_01bab630(&StringLiteral_18991/*"inf"*/);
    FUN_01bab630(&StringLiteral_18299/*"floor"*/);
    FUN_01bab630(&StringLiteral_16937/*"ceil"*/);
    DAT_045680e6 = 1;
  }
  __this = (System_Collections_Generic_Dictionary_string__HEFOANCOHDC_BLLOEEDBDEO__o *)
           thunk_FUN_01bda818(
                             System_Collections_Generic_Dictionary<string,_HEFOANCOHDC_BLLOEEDBDEO>_TypeInfo
                             );
  System_Collections_Generic_Dictionary<object,_Int32Enum>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             Method_System_Collections_Generic_Dictionary<string,_HEFOANCOHDC_BLLOEEDBDEO>__ctor__);
  if (__this != (System_Collections_Generic_Dictionary_string__HEFOANCOHDC_BLLOEEDBDEO__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,StringLiteral_18299/*"floor"*/,0
               ,Method_System_Collections_Generic_Dictionary<string,_HEFOANCOHDC_BLLOEEDBDEO>_Add__)
    ;
    System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,StringLiteral_16937/*"ceil"*/,1
               ,Method_System_Collections_Generic_Dictionary<string,_HEFOANCOHDC_BLLOEEDBDEO>_Add__)
    ;
    System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,StringLiteral_21606/*"trunc"*/,2
               ,Method_System_Collections_Generic_Dictionary<string,_HEFOANCOHDC_BLLOEEDBDEO>_Add__)
    ;
    System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,StringLiteral_18991/*"inf"*/,3
               ,Method_System_Collections_Generic_Dictionary<string,_HEFOANCOHDC_BLLOEEDBDEO>_Add__)
    ;
    PerkInfoItem_TypeInfo->static_fields->MHONJANODKB = __this;
    thunk_FUN_01c20e04(PerkInfoItem_TypeInfo->static_fields,__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NKAFEPGIFPB(Model BCKBBGCOMJD, NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, HDBNGIBFEBA LOFMIFGLIKN, MMFIDKMDADC HPACPFLKHPK)  [RVA 0x3422018]
// PerkInfoItem$$NKAFEPGIFPB @ RVA 0x3422018

void PerkInfoItem__NKAFEPGIFPB
               (PerkInfoItem_o *__this,Model_o *BCKBBGCOMJD,
               NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,HDBNGIBFEBA_o *LOFMIFGLIKN,
               MMFIDKMDADC_o *HPACPFLKHPK,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  PerkInfoItem_o *pHVar3;
  NILLKLHKLHG_DIPIFJPCFOE_o *__this_00;
  PerkInfoItem_o *pHVar4;
  NJPBHDMCLIN_o *pNVar5;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  
                    /* try { // try from 03522018 to 0362202b has its CatchHandler @ 035220a8 */
                    /* catch() { ... } // from try @ 0352197c with catch @ 0352202c
                       try { // try from 0352202c to 0362204f has its CatchHandler @ 035214bc */
  if ((DAT_045680e7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_ContainsKey__);
                    /* try { // try from 03522050 to 03622053 has its CatchHandler @ 0352207c */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_get_Item__);
                    /* try { // try from 03522054 to 0362208b has its CatchHandler @ 035214bc */
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    __this = (PerkInfoItem_o *)FUN_01bab630(&StringLiteral_1/*""*/);
                    /* catch() { ... } // from try @ 03522050 with catch @ 0352207c */
    DAT_045680e7 = 1;
  }
  if ((ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) ||
     (__this = (PerkInfoItem_o *)(ACCIJLGMHOO->fields).EEFPBGNAFFI, __this == (PerkInfoItem_o *)0x0))
  goto LAB_03522158;
                    /* try { // try from 0352208c to 03622093 has its CatchHandler @ 035220a8 */
  iVar1._0_1_ = (__this->fields).ICCBEPAFBFI.fields.fakeValue;
  iVar1._1_1_ = (__this->fields).ICCBEPAFBFI.fields.inited;
  iVar1._2_1_ = (__this->fields).ICCBEPAFBFI.fields.fakeValueActive;
  iVar1._3_1_ = (__this->fields).ICCBEPAFBFI.fields.field_0xb;
  pHVar3 = __this;
  if (iVar1 == 0) {
                    /* try { // try from 03522094 to 0362209f has its CatchHandler @ 035214bc */
    if (HPACPFLKHPK == (MMFIDKMDADC_o *)0x0) goto LAB_03522158;
                    /* try { // try from 035220a0 to 036220a7 has its CatchHandler @ 035220a8 */
                    /* catch() { ... } // from try @ 03522018 with catch @ 035220a8
                       catch() { ... } // from try @ 0352208c with catch @ 035220a8
                       catch() { ... } // from try @ 035220a0 with catch @ 035220a8 */
    (HPACPFLKHPK->fields).HPACPFLKHPK = (System_String_o *)StringLiteral_1/*""*/;
    thunk_FUN_01c20e04();
    pHVar3 = (PerkInfoItem_o *)(ACCIJLGMHOO->fields).EEFPBGNAFFI;
    __this = (PerkInfoItem_o *)0x0;
    if (pHVar3 == (PerkInfoItem_o *)0x0) goto LAB_03522158;
  }
  __this_00 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
              System_Collections_Generic_List<object>__get_Item
                        ((System_Collections_Generic_List_object__o *)pHVar3,0,
                         Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__)
  ;
  __this = (PerkInfoItem_o *)0x0;
  if ((((__this_00 != (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0) &&
       (__this = (PerkInfoItem_o *)NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(__this_00,(MethodInfo *)0x0),
       BCKBBGCOMJD != (Model_o *)0x0)) &&
      (pNVar5 = (BCKBBGCOMJD->fields).FNEAAHOOHAA, pNVar5 != (NJPBHDMCLIN_o *)0x0)) &&
     (__this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (pNVar5->fields).JJCFAGEDAAN,
     __this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    bVar2 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (__this_01,(Il2CppObject *)__this,
                       Method_System_Collections_Generic_Dictionary<string,_string>_ContainsKey__);
    pHVar4 = (PerkInfoItem_o *)(ulong)bVar2;
    pHVar3 = StringLiteral_1/*""*/;
    if (bVar2) {
      pHVar4 = (PerkInfoItem_o *)
               System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (__this_01,(Il2CppObject *)__this,
                          Method_System_Collections_Generic_Dictionary<string,_string>_get_Item__);
      pHVar3 = pHVar4;
    }
    __this = pHVar4;
    if (HPACPFLKHPK != (MMFIDKMDADC_o *)0x0) {
      (HPACPFLKHPK->fields).HPACPFLKHPK = (System_String_o *)pHVar3;
      thunk_FUN_01c20e04(&HPACPFLKHPK->fields);
      return;
    }
  }
LAB_03522158:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== public PerkInfoItem FAOBHLCDKJI(XmlNode GHKNNCLBPEO, XmlNode KDMPIDEEPMP)  [RVA 0x3422590]
// PerkInfoItem$$FAOBHLCDKJI @ RVA 0x3422590

/* WARNING: Removing unreachable block (ram,0x035229dc) */
/* WARNING: Removing unreachable block (ram,0x03522b64) */

PerkInfoItem_o *
PerkInfoItem__FAOBHLCDKJI
          (PerkInfoItem_o *__this,System_Xml_XmlNode_o *GHKNNCLBPEO,System_Xml_XmlNode_o *KDMPIDEEPMP
          ,MethodInfo *method)

{
  byte bVar1;
  FOKJBDHLIMG_o *__this_00;
  PerkInfoItem_o *pHVar2;
  System_Xml_XmlDocument_o *__this_01;
  long lVar3;
  long *plVar4;
  System_Xml_XmlElement_o *pSVar5;
  undefined8 *puVar6;
  long *plVar7;
  System_String_o *name;
  undefined8 uVar8;
  System_Xml_XmlAttributeCollection_o *pSVar9;
  System_Xml_XmlAttribute_o *node;
  System_Xml_XmlDocument_o *__this_02;
  System_Xml_XmlNode_o **ppSVar10;
  System_Xml_XmlDocument_o **ppSVar11;
  System_Xml_XmlNode_o *pSVar12;
  MethodInfo *method_00;
  ulong uVar13;
  int *piVar14;
  undefined1 auVar15 [16];
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar16;
  
  if ((DAT_045680e8 & 1) == 0) {
    FUN_01bab630(&PerkInfoItem_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&System_Xml_XmlAttribute_TypeInfo);
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    FUN_01bab630(&StringLiteral_11876/*"Set"*/);
    FUN_01bab630(&StringLiteral_11030/*"RatingEvaluation"*/);
    FUN_01bab630(&StringLiteral_10213/*"Perk"*/);
    DAT_045680e8 = 1;
  }
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = GameUtils_TypeInfo->static_fields->DDMMFEDBMCC;
  if (__this_00 == (FOKJBDHLIMG_o *)0x0) goto LAB_03522b5c;
  pHVar2 = FOKJBDHLIMG__JMMDGEOBMOC(__this_00,(__this->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
  __this_01 = (System_Xml_XmlDocument_o *)thunk_FUN_01bda818(System_Xml_XmlDocument_TypeInfo);
  System_Xml_XmlDocument___ctor(__this_01,(MethodInfo *)0x0);
  if ((pHVar2 != (PerkInfoItem_o *)0x0) &&
     (pSVar12 = (pHVar2->fields).DCDJOJGHJEB, pSVar12 != (System_Xml_XmlNode_o *)0x0)) {
    EIABCPKDEBD__DGPOFACHGMP((System_Xml_XmlNode_o *)__this_01,pSVar12,(MethodInfo *)0x0);
  }
  if (GHKNNCLBPEO != (System_Xml_XmlNode_o *)0x0) {
    if (__this_01 == (System_Xml_XmlDocument_o *)0x0) goto LAB_03522b5c;
    lVar3 = (*(__this_01->klass->vtable)._51_get_Item.methodPtr)
                      (__this_01,StringLiteral_10213/*"Perk"*/,(__this_01->klass->vtable)._51_get_Item.method)
    ;
    if (lVar3 == 0) {
LAB_03522710:
      lVar3 = (*(__this_01->klass->vtable)._51_get_Item.methodPtr)
                        (__this_01,StringLiteral_10213/*"Perk"*/,
                         (__this_01->klass->vtable)._51_get_Item.method);
      if (lVar3 == 0) {
        EIABCPKDEBD__BHPIHHJHELJ(__this_01,StringLiteral_10213/*"Perk"*/,(MethodInfo *)0x0);
      }
      pSVar12 = (System_Xml_XmlNode_o *)
                (*(__this_01->klass->vtable)._51_get_Item.methodPtr)
                          (__this_01,StringLiteral_10213/*"Perk"*/,
                           (__this_01->klass->vtable)._51_get_Item.method);
      pSVar5 = EIABCPKDEBD__BHPIHHJHELJ(pSVar12,StringLiteral_11876/*"Set"*/,(MethodInfo *)0x0);
    }
    else {
      plVar4 = (long *)(*(__this_01->klass->vtable)._51_get_Item.methodPtr)
                                 (__this_01,StringLiteral_10213/*"Perk"*/,
                                  (__this_01->klass->vtable)._51_get_Item.method);
      if (plVar4 == (long *)0x0) goto LAB_03522b5c;
      pSVar5 = (System_Xml_XmlElement_o *)
               (**(code **)(*plVar4 + 0x468))
                         (plVar4,StringLiteral_11876/*"Set"*/,*(undefined8 *)(*plVar4 + 0x470));
      if (pSVar5 == (System_Xml_XmlElement_o *)0x0) goto LAB_03522710;
    }
    plVar4 = (long *)(*(GHKNNCLBPEO->klass->vtable)._16_get_Attributes.methodPtr)
                               (GHKNNCLBPEO,(GHKNNCLBPEO->klass->vtable)._16_get_Attributes.method);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar3 = *plVar4;
        uVar13 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar3 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_035227f4;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_035227f4:
        uVar13 = (*(code *)*puVar6)(plVar4,puVar6[1]);
        if ((uVar13 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) goto LAB_035229e0;
          lVar3 = *plVar4;
          uVar13 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar13 == 0) goto LAB_035229a8;
          piVar14 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          goto LAB_03522990;
        }
        lVar3 = *plVar4;
        uVar13 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar3 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_03522854;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_03522854:
        plVar7 = (long *)(*(code *)*puVar6)(plVar4,puVar6[1]);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlAttribute_TypeInfo->_2).naturalAligment;
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(System_Xml_XmlAttribute_c **)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
            System_Xml_XmlAttribute_TypeInfo)) {
                    /* try { // try from 03522b3c to 03622b47 has its CatchHandler @ 035229f4 */
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(plVar7);
        }
        name = (System_String_o *)
               (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
        uVar8 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
        if (pSVar5 == (System_Xml_XmlElement_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar5->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar5,(pSVar5->klass->vtable)._16_get_Attributes.method);
        if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03522b38 with catch @ 03522b44
                        */
          FUN_01bab8c8();
        }
        node = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar9,name,(MethodInfo *)0x0);
        if (node == (System_Xml_XmlAttribute_o *)0x0) {
          __this_02 = (System_Xml_XmlDocument_o *)
                      (*(pSVar5->klass->vtable)._17_get_OwnerDocument.methodPtr)
                                (pSVar5,(pSVar5->klass->vtable)._17_get_OwnerDocument.method);
          if (__this_02 == (System_Xml_XmlDocument_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          node = System_Xml_XmlDocument__CreateAttribute(__this_02,name,(MethodInfo *)0x0);
          pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                   (*(pSVar5->klass->vtable)._16_get_Attributes.methodPtr)
                             (pSVar5,(pSVar5->klass->vtable)._16_get_Attributes.method);
          if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          System_Xml_XmlAttributeCollection__Append(pSVar9,node,(MethodInfo *)0x0);
          if (node == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        }
        (*(node->klass->vtable)._10_set_Value.methodPtr)
                  (node,uVar8,(node->klass->vtable)._10_set_Value.method);
      } while( true );
    }
    goto LAB_03522b5c;
  }
  goto LAB_035229e0;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_03522990:
    if (*(System_IDisposable_c **)(piVar14 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar3 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_035229c4;
    }
  }
LAB_035229a8:
  puVar6 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_035229c4:
  (*(code *)*puVar6)(plVar4,puVar6[1]);
LAB_035229e0:
  if (KDMPIDEEPMP != (System_Xml_XmlNode_o *)0x0) {
    if (__this_01 == (System_Xml_XmlDocument_o *)0x0) goto LAB_03522b5c;
                    /* try { // try from 035229f4 to 03622a57 has its CatchHandler @ 035229f4
                       catch() { ... } // from try @ 035229f4 with catch @ 035229f4
                       catch() { ... } // from try @ 03522a8c with catch @ 035229f4
                       catch() { ... } // from try @ 03522ad8 with catch @ 035229f4
                       catch() { ... } // from try @ 03522b3c with catch @ 035229f4 */
    lVar3 = (*(__this_01->klass->vtable)._51_get_Item.methodPtr)
                      (__this_01,StringLiteral_10213/*"Perk"*/,(__this_01->klass->vtable)._51_get_Item.method)
    ;
    if (lVar3 != 0) {
      plVar4 = (long *)(*(__this_01->klass->vtable)._51_get_Item.methodPtr)
                                 (__this_01,StringLiteral_10213/*"Perk"*/,
                                  (__this_01->klass->vtable)._51_get_Item.method);
      if (plVar4 == (long *)0x0) goto LAB_03522b5c;
      lVar3 = (**(code **)(*plVar4 + 0x468))
                        (plVar4,StringLiteral_11030/*"RatingEvaluation"*/,*(undefined8 *)(*plVar4 + 0x470));
      if (lVar3 != 0) goto LAB_03522a90;
    }
    lVar3 = (*(__this_01->klass->vtable)._51_get_Item.methodPtr)
                      (__this_01,StringLiteral_10213/*"Perk"*/,(__this_01->klass->vtable)._51_get_Item.method)
    ;
                    /* try { // try from 03522a58 to 03622a5f has its CatchHandler @ 03522aa8 */
    if (lVar3 == 0) {
                    /* try { // try from 03522a60 to 03622a67 has its CatchHandler @ 03522aa4 */
      EIABCPKDEBD__BHPIHHJHELJ(__this_01,StringLiteral_10213/*"Perk"*/,(MethodInfo *)0x0);
    }
                    /* try { // try from 03522a6c to 03622a73 has its CatchHandler @ 03522a9c */
                    /* try { // try from 03522a74 to 03622a8b has its CatchHandler @ 03522aa0 */
    pSVar12 = (System_Xml_XmlNode_o *)
              (*(__this_01->klass->vtable)._51_get_Item.methodPtr)
                        (__this_01,StringLiteral_10213/*"Perk"*/,
                         (__this_01->klass->vtable)._51_get_Item.method);
                    /* try { // try from 03522a8c to 03622abf has its CatchHandler @ 035229f4 */
    EIABCPKDEBD__DGPOFACHGMP(pSVar12,KDMPIDEEPMP,(MethodInfo *)0x0);
  }
LAB_03522a90:
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03522a6c with catch @ 03522a9c
                        */
  auVar15 = thunk_FUN_01bda818(PerkInfoItem_TypeInfo);
  pHVar2 = auVar15._0_8_;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03522a74 with catch @ 03522aa0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03522a60 with catch @ 03522aa4
                        */
  PerkInfoItem___ctor(pHVar2,auVar15._8_8_);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03522a58 with catch @ 03522aa8
                        */
  if (__this_01 != (System_Xml_XmlDocument_o *)0x0) {
    method_00 = (__this_01->klass->vtable)._51_get_Item.method;
                    /* try { // try from 03522ac0 to 03622ad7 has its CatchHandler @ 03522b34 */
    pSVar12 = (System_Xml_XmlNode_o *)
              (*(__this_01->klass->vtable)._51_get_Item.methodPtr)(__this_01,StringLiteral_10213/*"Perk"*/);
    if (pSVar12 == (System_Xml_XmlNode_o *)0x0) {
      if (pHVar2 != (PerkInfoItem_o *)0x0) goto LAB_03522ae0;
    }
    else if (pHVar2 != (PerkInfoItem_o *)0x0) {
      PerkInfoItem__HNIHOIAMDPC(pHVar2,pSVar12,method_00);
                    /* try { // try from 03522ad8 to 03622b23 has its CatchHandler @ 035229f4 */
LAB_03522ae0:
      (pHVar2->fields).AEIJFFBOBCP = (__this->fields).AEIJFFBOBCP;
      CVar16 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
               CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(true,(MethodInfo *)0x0);
      (pHVar2->fields).JFMAEFOHLDF.fields = CVar16;
      ppSVar10 = &(pHVar2->fields).DCDJOJGHJEB;
      *ppSVar10 = (System_Xml_XmlNode_o *)0x0;
      thunk_FUN_01c20e04(ppSVar10,0);
      ppSVar11 = &(pHVar2->fields).DHNEDFGMFGM;
      *ppSVar11 = (System_Xml_XmlDocument_o *)0x0;
      thunk_FUN_01c20e04(ppSVar11,0);
                    /* try { // try from 03522b24 to 03622b33 has its CatchHandler @ 03522b34 */
                    /* catch() { ... } // from try @ 03522ac0 with catch @ 03522b34
                       catch() { ... } // from try @ 03522b24 with catch @ 03522b34 */
                    /* try { // try from 03522b38 to 03622b3b has its CatchHandler @ 03522b44 */
      return pHVar2;
    }
  }
LAB_03522b5c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LGNDBPMCEGP(Model BCKBBGCOMJD, NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, HDBNGIBFEBA LOFMIFGLIKN, MMFIDKMDADC HPACPFLKHPK)  [RVA 0x342215C]
// PerkInfoItem$$LGNDBPMCEGP @ RVA 0x342215C

void PerkInfoItem__LGNDBPMCEGP
               (PerkInfoItem_o *__this,Model_o *BCKBBGCOMJD,
               NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,HDBNGIBFEBA_o *LOFMIFGLIKN,
               MMFIDKMDADC_o *HPACPFLKHPK,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  System_String_o *__this_00;
  Model_o *extraout_x1;
  Model_o *extraout_x1_00;
  Model_o *extraout_x1_01;
  Fight_o *pFVar3;
  FightList_o *pAVar4;
  
  if ((DAT_045680e9 & 1) == 0) {
    FUN_01bab630(&Fight_TypeInfo);
    FUN_01bab630(&StringLiteral_19142/*"isRaid"*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_045680e9 = 1;
    BCKBBGCOMJD = extraout_x1;
  }
  if ((Fight_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Fight_TypeInfo,BCKBBGCOMJD);
    BCKBBGCOMJD = extraout_x1_00;
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&Fight_TypeInfo);
    DAT_04565b7f = '\x01';
    BCKBBGCOMJD = extraout_x1_01;
  }
  if ((Fight_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Fight_TypeInfo,BCKBBGCOMJD);
  }
  if (Fight_TypeInfo->static_fields->IGABFCCGLCO == (Fight_o *)0x0) {
    return;
  }
  if ((ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) &&
     (__this_00 = (ACCIJLGMHOO->fields).KCPPJGKAILM, __this_00 != (System_String_o *)0x0)) {
    bVar2 = System_String__Equals(__this_00,StringLiteral_19142/*"isRaid"*/,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    if ((Fight_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7f == '\0') {
      FUN_01bab630(&Fight_TypeInfo);
      DAT_04565b7f = '\x01';
    }
    if ((Fight_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pFVar3 = Fight_TypeInfo->static_fields->IGABFCCGLCO;
    if ((pFVar3 != (Fight_o *)0x0) &&
       (pAVar4 = (pFVar3->fields).FBFPLEFCDOK, pAVar4 != (FightList_o *)0x0)) {
      puVar1 = &StringLiteral_1606/*"1"*/;
      if ((pAVar4->fields).JDNKKGPNHPB != 0x14) {
        puVar1 = &StringLiteral_1567/*"0"*/;
      }
      if (HPACPFLKHPK != (MMFIDKMDADC_o *)0x0) {
        (HPACPFLKHPK->fields).HPACPFLKHPK = (System_String_o *)*puVar1;
        thunk_FUN_01c20e04(&HPACPFLKHPK->fields);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FFMODBDABFB(Model BCKBBGCOMJD, NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, HDBNGIBFEBA LOFMIFGLIKN, MMFIDKMDADC HPACPFLKHPK)  [RVA 0x3420FD4]
// PerkInfoItem$$FFMODBDABFB @ RVA 0x3420FD4

void PerkInfoItem__FFMODBDABFB
               (PerkInfoItem_o *__this,Model_o *BCKBBGCOMJD,
               NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,HDBNGIBFEBA_o *LOFMIFGLIKN,
               MMFIDKMDADC_o *HPACPFLKHPK,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  uint32_t uVar4;
  int32_t iVar5;
  System_Text_StringBuilder_o *__this_00;
  System_Collections_Generic_HashSet_object__o *__this_01;
  ModelParameters_o *pPVar6;
  MovesInFightVariables_o *__this_02;
  IGJEEGBBNFC_o *pIVar7;
  Il2CppObject *pIVar8;
  VirtualInvokeData *pVVar9;
  PlayerData_o *__this_03;
  long lVar10;
  MethodInfo *method_00;
  undefined8 uVar11;
  ModelParameters_c *pPVar12;
  System_String_o **ppSVar13;
  Fight_o *pFVar14;
  long lVar15;
  Il2CppClass *pIVar16;
  System_Text_StringBuilder_c *pSVar17;
  ulong uVar18;
  int32_t *piVar19;
  System_Collections_Generic_List_string__o *__this_04;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_05;
  int iVar20;
  undefined8 *puVar21;
  System_String_o *pSVar22;
  int iVar23;
  Il2CppClass *CJNHFNHJHPE;
  undefined8 uVar24;
  float __this_06;
  float extraout_s0;
  System_Collections_Generic_HashSet_Enumerator_T__o local_98;
  System_Collections_Generic_HashSet_Enumerator_T__o local_80;
  undefined8 local_68;
  
                    /* try { // try from 03520ff0 to 03620ff3 has its CatchHandler @ 03521028 */
                    /* try { // try from 03520ff4 to 03620ff7 has its CatchHandler @ 03521020 */
                    /* try { // try from 03520ff8 to 03620ffb has its CatchHandler @ 0352101c */
                    /* try { // try from 03520ffc to 03620fff has its CatchHandler @ 03521018 */
                    /* try { // try from 03521000 to 03621003 has its CatchHandler @ 03520c04 */
                    /* try { // try from 03521004 to 03621007 has its CatchHandler @ 03521010 */
                    /* try { // try from 03521008 to 03621047 has its CatchHandler @ 03520c04 */
  if ((DAT_045680ea & 1) == 0) {
                    /* catch() { ... } // from try @ 03521004 with catch @ 03521010 */
                    /* catch() { ... } // from try @ 03520ed8 with catch @ 03521014 */
    FUN_01bab630(&ADGIHFGIFHO_TypeInfo);
                    /* catch() { ... } // from try @ 03520ffc with catch @ 03521018 */
                    /* catch() { ... } // from try @ 03520ff8 with catch @ 0352101c */
                    /* catch() { ... } // from try @ 03520ff4 with catch @ 03521020 */
    FUN_01bab630(&Method_System_Array_Empty<string>__);
                    /* catch() { ... } // from try @ 03520eec with catch @ 03521024 */
                    /* catch() { ... } // from try @ 03520ff0 with catch @ 03521028 */
                    /* catch() { ... } // from try @ 03520efc with catch @ 0352102c */
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
                    /* catch() { ... } // from try @ 03520e90 with catch @ 03521030 */
                    /* catch() { ... } // from try @ 03520e34 with catch @ 03521034 */
                    /* catch() { ... } // from try @ 03520f18 with catch @ 03521038 */
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet_Enumerator<string>_Dispose__);
                    /* try { // try from 03521048 to 0362104b has its CatchHandler @ 03521064 */
    FUN_01bab630(&Method_System_Collections_Generic_HashSet_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet_Enumerator<string>_get_Current__);
                    /* catch() { ... } // from try @ 03521048 with catch @ 03521064 */
    FUN_01bab630(&Fight_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_get_Count__);
                    /* try { // try from 0352109c to 036210c3 has its CatchHandler @ 035210d8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_get_Item__);
                    /* try { // try from 035210c4 to 036210cf has its CatchHandler @ 03520c04 */
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
                    /* try { // try from 035210d0 to 036210d7 has its CatchHandler @ 035210d8 */
    FUN_01bab630(&StringLiteral_8775/*"MagicBullet"*/);
                    /* catch() { ... } // from try @ 0352109c with catch @ 035210d8
                       catch() { ... } // from try @ 035210d0 with catch @ 035210d8 */
    FUN_01bab630(&StringLiteral_10806/*"RaidCharge"*/);
    FUN_01bab630(&StringLiteral_4507/*"Combo"*/);
    FUN_01bab630(&StringLiteral_14870/*"Weapon"*/);
    FUN_01bab630(&StringLiteral_5061/*"DamageConverter"*/);
    FUN_01bab630(&StringLiteral_12495/*"Style"*/);
    FUN_01bab630(&StringLiteral_12160/*"Skeleton"*/);
    FUN_01bab630(&StringLiteral_3076/*"Armor"*/);
    FUN_01bab630(&StringLiteral_8772/*"Magic"*/);
    FUN_01bab630(&StringLiteral_12499/*"StyleGain"*/);
    FUN_01bab630(&StringLiteral_11996/*"Shock"*/);
    FUN_01bab630(&StringLiteral_8777/*"MagicCharge"*/);
    FUN_01bab630(&StringLiteral_5255/*"DefaultPerksAspect"*/);
    FUN_01bab630(&StringLiteral_7059/*"Health"*/);
    FUN_01bab630(&StringLiteral_19137/*"isPlayer"*/);
    FUN_01bab630(&StringLiteral_7573/*"InsideAreas"*/);
    FUN_01bab630(&StringLiteral_10965/*"RaidSphere"*/);
    FUN_01bab630(&StringLiteral_22485/*"|"*/);
    FUN_01bab630(&StringLiteral_10091/*"Pain"*/);
    FUN_01bab630(&StringLiteral_10823/*"RaidConsumable"*/);
    FUN_01bab630(&StringLiteral_9540/*"NoRaidCharge"*/);
    FUN_01bab630(&StringLiteral_2817/*"AllFlags"*/);
    FUN_01bab630(&StringLiteral_2819/*"AllPerks"*/);
    FUN_01bab630(&StringLiteral_5072/*"Dan"*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    FUN_01bab630(&StringLiteral_5405/*"Disarm"*/);
    FUN_01bab630(&StringLiteral_11017/*"Ranged"*/);
    FUN_01bab630(&StringLiteral_7066/*"Helm"*/);
    DAT_045680ea = 1;
  }
  local_80.fields._current = (Il2CppObject *)0x0;
  local_68 = 0;
  local_80.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  if (BCKBBGCOMJD == (Model_o *)0x0) {
    return;
  }
  if (ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) goto LAB_03521c80;
  pSVar22 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
  uVar4 = <PrivateImplementationDetails>__ComputeStringHash(pSVar22,(MethodInfo *)0x0);
  if (0x7b8577cd < uVar4) {
    if (uVar4 < 0xafc74790) {
      if (0x84b84174 < uVar4) {
        if (uVar4 == 0x986145af) {
          bVar3 = System_String__op_Equality(pSVar22,StringLiteral_7059/*"Health"*/,(MethodInfo *)0x0);
          if (!bVar3) {
            return;
          }
          __this_06 = Model__ILKFDEIGFBO(BCKBBGCOMJD,(MethodInfo *)0x0);
        }
        else {
          if (uVar4 == 0x9d9dc599) {
            puVar21 = &StringLiteral_7066/*"Helm"*/;
            goto LAB_03521ab4;
          }
          if (uVar4 != 0xafc7478f) {
            return;
          }
          bVar3 = System_String__op_Equality(pSVar22,StringLiteral_5255/*"DefaultPerksAspect"*/,(MethodInfo *)0x0);
          if (!bVar3) {
            return;
          }
          __this_06 = Model__GPDGKMBNKJE(BCKBBGCOMJD,(MethodInfo *)0x0);
        }
        goto LAB_03521b40;
      }
      if (uVar4 == 0x83cd7fa1) {
        bVar3 = System_String__op_Equality(pSVar22,StringLiteral_4507/*"Combo"*/,(MethodInfo *)0x0);
        if (!bVar3) {
          return;
        }
        iVar5 = Model__BHIHCKDOJKB(BCKBBGCOMJD,(MethodInfo *)0x0);
        goto LAB_03521a94;
      }
      if (uVar4 == 0x84b84174) {
        puVar21 = &StringLiteral_3076/*"Armor"*/;
      }
      else {
        if (uVar4 != 0x7ea6568e) {
          return;
        }
        puVar21 = &StringLiteral_12160/*"Skeleton"*/;
      }
    }
    else {
      if (0xcb2ec7a2 < uVar4) {
        if (uVar4 == 0xcde55977) {
          bVar3 = System_String__op_Equality(pSVar22,StringLiteral_5405/*"Disarm"*/,(MethodInfo *)0x0);
          if (!bVar3) {
            return;
          }
          bVar3 = Model__KMFJIEBEIOD(BCKBBGCOMJD,(MethodInfo *)0x0);
          goto LAB_03521bac;
        }
        if (uVar4 == 0xe6723689) {
          bVar3 = System_String__op_Equality(pSVar22,StringLiteral_2819/*"AllPerks"*/,(MethodInfo *)0x0);
          if (!bVar3) {
            return;
          }
          __this_00 = (System_Text_StringBuilder_o *)
                      thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
          System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
          pPVar6 = (BCKBBGCOMJD->fields).FAPMJJBOFEF;
          if ((pPVar6 == (ModelParameters_o *)0x0) ||
             (__this_05 = (pPVar6->fields).INGEFFGPJPB,
             __this_05 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0)) goto LAB_03521c80;
          iVar23 = (__this_05->fields)._size;
          if (0 < iVar23) {
            iVar20 = 0;
            do {
              pIVar8 = System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)__this_05,iVar20,
                                  Method_System_Collections_Generic_List<PerkInfoItem>_get_Item__);
              if (pIVar8 == (Il2CppObject *)0x0) goto LAB_03521c80;
              CJNHFNHJHPE = pIVar8[5].klass;
              bVar3 = PCOEHCPGBBG__BDLEIEHBFAD((System_String_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
              if (bVar3) {
                pIVar8 = System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)__this_05,iVar20,
                                    Method_System_Collections_Generic_List<PerkInfoItem>_get_Item__);
                if (pIVar8 == (Il2CppObject *)0x0) goto LAB_03521c80;
                CJNHFNHJHPE = pIVar8[4].klass;
              }
              pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                                 (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
              lVar10 = Method_System_Array_Empty<string>__;
              lVar15 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
              if (lVar15 == 0) {
                    /* try { // try from 035218f0 to 036218f7 has its CatchHandler @ 03521fbc */
                FUN_01b8167c(Method_System_Array_Empty<string>__);
                lVar15 = *(long *)(lVar10 + 0x38);
              }
              lVar15 = *(long *)(lVar15 + 0x10);
              if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
                lVar15 = FUN_01b81620();
              }
                    /* try { // try from 0352190c to 0362190f has its CatchHandler @ 03521f40 */
                    /* try { // try from 03521910 to 03621917 has its CatchHandler @ 03521fa8 */
              if (*(int *)(lVar15 + 0xe0) == 0) {
                thunk_FUN_01ba7564();
              }
              lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
                    /* try { // try from 03521924 to 0362192b has its CatchHandler @ 03521fac */
              if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_01b81620();
              }
              if (pIVar8 == (Il2CppObject *)0x0) goto LAB_03521c80;
                    /* try { // try from 03521934 to 0362193b has its CatchHandler @ 03521f84 */
              pIVar16 = pIVar8->klass;
              uVar24 = **(undefined8 **)(lVar10 + 0xb8);
              uVar2._0_1_ = (pIVar16->_2).rank;
              uVar2._1_1_ = (pIVar16->_2).minimumAlignment;
              uVar18 = (ulong)uVar2;
                    /* try { // try from 03521944 to 0362194b has its CatchHandler @ 03521f90 */
              if (uVar18 != 0) {
                piVar19 = &((pIVar16->_1).interfaceOffsets)->offset;
                do {
                    /* try { // try from 03521950 to 03621957 has its CatchHandler @ 03521f88 */
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
                      (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                    /* try { // try from 0352197c to 036219a3 has its CatchHandler @ 0352202c */
                    pVVar9 = pIVar16->vtable + (*piVar19 + 0xc);
                    goto LAB_03521988;
                  }
                  uVar18 = uVar18 - 1;
                    /* try { // try from 03521960 to 03621967 has its CatchHandler @ 03521f8c */
                  piVar19 = piVar19 + 4;
                } while (uVar18 != 0);
              }
                    /* try { // try from 03521968 to 03621977 has its CatchHandler @ 03521f94 */
              pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03521988:
              pSVar22 = (System_String_o *)
                        (*pVVar9->methodPtr)(pIVar8,CJNHFNHJHPE,uVar24,pVVar9->method);
              bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar22,(MethodInfo *)0x0);
              if (!bVar3) {
                    /* try { // try from 035219b4 to 036219bf has its CatchHandler @ 03521f14 */
                if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_03521c80;
                    /* try { // try from 035219c4 to 036219d7 has its CatchHandler @ 03521f18 */
                System_Text_StringBuilder__Append(__this_00,pSVar22,(MethodInfo *)0x0);
                if (iVar20 < iVar23 + -1) {
                    /* try { // try from 035219d8 to 03621bb7 has its CatchHandler @ 035214bc */
                  System_Text_StringBuilder__Append(__this_00,StringLiteral_22485/*"|"*/,(MethodInfo *)0x0)
                  ;
                }
                if ((uint)((iVar20 + 1) * -0x55555555) < 0x55555556) {
                  System_Text_StringBuilder__Append(__this_00,10,(MethodInfo *)0x0);
                }
              }
              iVar20 = iVar20 + 1;
            } while (iVar20 != iVar23);
          }
          goto LAB_03521be4;
        }
        if (uVar4 != 0xef2404b5) {
          return;
        }
        bVar3 = System_String__op_Equality(pSVar22,StringLiteral_10091/*"Pain"*/,(MethodInfo *)0x0);
        if (!bVar3) {
          return;
        }
        __this_06 = (BCKBBGCOMJD->fields).EICLGPGPNKE;
        goto LAB_03521b40;
      }
      if (uVar4 == 0xb7c10361) {
        puVar21 = &StringLiteral_14870/*"Weapon"*/;
      }
      else if (uVar4 == 0xb960112c) {
        puVar21 = &StringLiteral_8772/*"Magic"*/;
      }
      else {
        if (uVar4 != 0xcb2ec7a2) {
          return;
        }
        puVar21 = &StringLiteral_11017/*"Ranged"*/;
      }
    }
LAB_03521ab4:
    bVar3 = System_String__op_Equality(pSVar22,(System_String_o *)*puVar21,(MethodInfo *)0x0);
    if (!bVar3) {
      return;
    }
    pPVar6 = (BCKBBGCOMJD->fields).FAPMJJBOFEF;
    if (pPVar6 == (ModelParameters_o *)0x0) goto LAB_03521c80;
    pPVar12 = pPVar6->klass;
    uVar24 = *puVar21;
    uVar11 = 0;
LAB_03521adc:
    lVar10 = (*(pPVar12->vtable)._4_CJPIJKJDHGI.methodPtr)
                       (pPVar6,uVar24,uVar11,(pPVar12->vtable)._4_CJPIJKJDHGI.method);
    if ((lVar10 == 0) || (HPACPFLKHPK == (MMFIDKMDADC_o *)0x0)) goto LAB_03521c80;
    pSVar22 = *(System_String_o **)(lVar10 + 0x18);
    goto LAB_03521c00;
  }
  if (uVar4 < 0x50b2e4d2) {
    if (uVar4 < 0x15f4a5c9) {
      if (uVar4 == 0xae533e4) {
        bVar3 = System_String__op_Equality(pSVar22,StringLiteral_10965/*"RaidSphere"*/,(MethodInfo *)0x0);
        if (!bVar3) {
          return;
        }
        pPVar6 = (BCKBBGCOMJD->fields).FAPMJJBOFEF;
        if (pPVar6 != (ModelParameters_o *)0x0) {
          pPVar12 = pPVar6->klass;
          bVar1 = (ADGIHFGIFHO_TypeInfo->_2).naturalAligment;
          if ((bVar1 <= (pPVar12->_2).naturalAligment) &&
             (uVar24 = StringLiteral_10823/*"RaidConsumable"*/, uVar11 = StringLiteral_10806/*"RaidCharge"*/,
             (pPVar12->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)ADGIHFGIFHO_TypeInfo))
          goto LAB_03521adc;
        }
        if (HPACPFLKHPK == (MMFIDKMDADC_o *)0x0) goto LAB_03521c80;
        ppSVar13 = (System_String_o **)&StringLiteral_9540/*"NoRaidCharge"*/;
LAB_03521bc8:
        pSVar22 = *ppSVar13;
        goto LAB_03521c00;
      }
      if (uVar4 != 0x15f4a5c8) {
        return;
      }
      bVar3 = System_String__op_Equality(pSVar22,StringLiteral_8777/*"MagicCharge"*/,(MethodInfo *)0x0);
      if (!bVar3) {
        return;
      }
      __this_06 = Model__HCLKOCBDKEJ(BCKBBGCOMJD,(MethodInfo *)0x0);
LAB_03521b40:
      method_00 = (MethodInfo *)((long)&local_68 + 4);
      local_68 = CONCAT44(__this_06,(undefined4)local_68);
    }
    else {
      if (uVar4 != 0x1f8b6209) {
        if (uVar4 != 0x22fb94a4) {
          if (uVar4 != 0x50b2e4d1) {
            return;
          }
          bVar3 = System_String__op_Equality(pSVar22,StringLiteral_11996/*"Shock"*/,(MethodInfo *)0x0);
          if (!bVar3) {
            return;
          }
          bVar3 = Model__APGEDNDCGJD(BCKBBGCOMJD,(MethodInfo *)0x0);
          goto LAB_03521bac;
        }
        bVar3 = System_String__op_Equality(pSVar22,StringLiteral_5061/*"DamageConverter"*/,(MethodInfo *)0x0);
        if (!bVar3) {
          return;
        }
        __this_06 = Model__AEAAHPJAEAF(BCKBBGCOMJD,(MethodInfo *)0x0);
        goto LAB_03521b40;
      }
      bVar3 = System_String__op_Equality(pSVar22,StringLiteral_12499/*"StyleGain"*/,(MethodInfo *)0x0);
      if (!bVar3) {
        return;
      }
      method_00 = (MethodInfo *)&(BCKBBGCOMJD->fields).DGGDGCEMMGI;
      __this_06 = extraout_s0;
    }
    pSVar22 = System_Single__ToString(__this_06,method_00);
  }
  else if (uVar4 < 0x667716a5) {
    if (uVar4 == 0x525430c8) {
      bVar3 = System_String__op_Equality(pSVar22,StringLiteral_5072/*"Dan"*/,(MethodInfo *)0x0);
      if (!bVar3) {
        return;
      }
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_03 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (__this_03 == (PlayerData_o *)0x0) {
        pPVar6 = (BCKBBGCOMJD->fields).FAPMJJBOFEF;
        if (pPVar6 == (ModelParameters_o *)0x0) goto LAB_03521c80;
        pSVar22 = StringLiteral_1606/*"1"*/;
        if (0 < (pPVar6->fields).NEKMDLBLENC) {
                    /* try { // try from 03521c40 to 03621c47 has its CatchHandler @ 03521f58 */
                    /* try { // try from 03521c48 to 03621c5b has its CatchHandler @ 03521f48 */
          pSVar22 = System_Int32__ToString((int)pPVar6 + 300,(MethodInfo *)0x0);
        }
        goto joined_r0x03521aa4;
      }
      iVar5 = PlayerData__IGIHHCEONEM(__this_03,(MethodInfo *)0x0);
    }
    else {
      if (uVar4 == 0x5467ec76) {
        bVar3 = System_String__op_Equality(pSVar22,StringLiteral_12495/*"Style"*/,(MethodInfo *)0x0);
        if (!bVar3) {
          return;
        }
        if (HPACPFLKHPK == (MMFIDKMDADC_o *)0x0) goto LAB_03521c80;
        pSVar22 = (BCKBBGCOMJD->fields).KJOGOGPCLDK;
        goto LAB_03521c00;
      }
      if (uVar4 != 0x667716a4) {
        return;
      }
      bVar3 = System_String__op_Equality(pSVar22,StringLiteral_8775/*"MagicBullet"*/,(MethodInfo *)0x0);
      if (!bVar3) {
        return;
      }
      iVar5 = Model__BAJGPELJMFG(BCKBBGCOMJD,(MethodInfo *)0x0);
    }
LAB_03521a94:
    local_68 = CONCAT44(local_68._4_4_,iVar5);
    pSVar22 = System_Int32__ToString((int32_t)&local_68,(MethodInfo *)0x0);
  }
  else {
    if (uVar4 == 0x6a4bfd50) {
      bVar3 = System_String__op_Equality(pSVar22,StringLiteral_19137/*"isPlayer"*/,(MethodInfo *)0x0);
      if (!bVar3) {
        return;
      }
      bVar3 = Model__HODPOCMNNIN(BCKBBGCOMJD,(MethodInfo *)0x0);
LAB_03521bac:
                    /* try { // try from 03521bb8 to 03621bbf has its CatchHandler @ 03521fb8 */
      ppSVar13 = &StringLiteral_1606/*"1"*/;
      if (bVar3 == false) {
        ppSVar13 = (System_String_o **)&StringLiteral_1567/*"0"*/;
      }
      if (HPACPFLKHPK == (MMFIDKMDADC_o *)0x0) goto LAB_03521c80;
      goto LAB_03521bc8;
    }
    if (uVar4 == 0x74c68977) {
      bVar3 = System_String__op_Equality(pSVar22,StringLiteral_2817/*"AllFlags"*/,(MethodInfo *)0x0);
      if (!bVar3) {
        return;
      }
      __this_00 = (System_Text_StringBuilder_o *)
                  thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
      System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
      if ((Fight_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7f == '\0') {
        FUN_01bab630(&Fight_TypeInfo);
        DAT_04565b7f = '\x01';
      }
      if ((Fight_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pFVar14 = Fight_TypeInfo->static_fields->IGABFCCGLCO;
      if ((((pFVar14 == (Fight_o *)0x0) || (LOFMIFGLIKN == (HDBNGIBFEBA_o *)0x0)) ||
          (__this_02 = (pFVar14->fields).POEGCOJFMDB, __this_02 == (MovesInFightVariables_o *)0x0)) ||
         ((pIVar7 = MovesInFightVariables__MDEAJBFLJGP
                              (__this_02,BCKBBGCOMJD,
                               (LOFMIFGLIKN->fields)._MEFGNAIILBJ_k__BackingField,(MethodInfo *)0x0)
          , pIVar7 == (IGJEEGBBNFC_o *)0x0 ||
          (__this_04 = (pIVar7->fields).HFICCAMAMGI,
          __this_04 == (System_Collections_Generic_List_string__o *)0x0)))) goto LAB_03521c80;
      iVar23 = (__this_04->fields)._size;
      if (0 < iVar23) {
        iVar20 = 0;
        do {
          pSVar22 = (System_String_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_04,iVar20,
                               Method_System_Collections_Generic_List<string>_get_Item__);
          bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar22,(MethodInfo *)0x0);
          if (!bVar3) {
            pSVar22 = (System_String_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_04,iVar20,
                                 Method_System_Collections_Generic_List<string>_get_Item__);
            if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_03521c80;
            System_Text_StringBuilder__Append(__this_00,pSVar22,(MethodInfo *)0x0);
            if (iVar20 < iVar23 + -1) {
              System_Text_StringBuilder__Append(__this_00,StringLiteral_22485/*"|"*/,(MethodInfo *)0x0);
            }
          }
          iVar20 = iVar20 + 1;
        } while (iVar23 != iVar20);
      }
      if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_03521c80;
      pSVar17 = __this_00->klass;
    }
    else {
                    /* try { // try from 035214bc to 036218ef has its CatchHandler @ 035214bc
                       catch() { ... } // from try @ 035214bc with catch @ 035214bc
                       catch() { ... } // from try @ 035219d8 with catch @ 035214bc
                       catch() { ... } // from try @ 03521de4 with catch @ 035214bc
                       catch() { ... } // from try @ 03521f10 with catch @ 035214bc
                       catch() { ... } // from try @ 03521fe4 with catch @ 035214bc
                       catch() { ... } // from try @ 0352202c with catch @ 035214bc
                       catch() { ... } // from try @ 03522054 with catch @ 035214bc
                       catch() { ... } // from try @ 03522094 with catch @ 035214bc */
      if (uVar4 != 0x7b8577cd) {
        return;
      }
      bVar3 = System_String__op_Equality(pSVar22,StringLiteral_7573/*"InsideAreas"*/,(MethodInfo *)0x0);
      if (!bVar3) {
        return;
      }
      __this_00 = (System_Text_StringBuilder_o *)
                  thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
      System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
      __this_01 = (System_Collections_Generic_HashSet_object__o *)(BCKBBGCOMJD->fields).DBLOJJBPLGE;
      if (__this_01 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03521c80;
      iVar20 = (__this_01->fields)._count;
      System_Collections_Generic_HashSet<object>__GetEnumerator
                (&local_98,__this_01,
                 Method_System_Collections_Generic_HashSet<string>_GetEnumerator__);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._set = local_98.fields._set;
      local_80.fields._current = local_98.fields._current;
      iVar23 = 0;
      while (bVar3 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_HashSet_Enumerator<string>_MoveNext__
                               ), pIVar8 = local_80.fields._current, bVar3) {
        bVar3 = PCOEHCPGBBG__BDLEIEHBFAD
                          ((System_String_o *)local_80.fields._current,(MethodInfo *)0x0);
        if (!bVar3) {
          if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          System_Text_StringBuilder__Append(__this_00,(System_String_o *)pIVar8,(MethodInfo *)0x0);
          if (iVar23 < iVar20 + -1) {
            System_Text_StringBuilder__Append(__this_00,StringLiteral_22485/*"|"*/,(MethodInfo *)0x0);
          }
          iVar23 = iVar23 + 1;
        }
      }
                    /* try { // try from 03521bd4 to 03621bd7 has its CatchHandler @ 03521f34 */
                    /* try { // try from 03521bd8 to 03621bdf has its CatchHandler @ 03521f98 */
      System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_HashSet_Enumerator<string>_Dispose__);
LAB_03521be4:
      if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_03521c80;
      pSVar17 = __this_00->klass;
                    /* try { // try from 03521bec to 03621bf3 has its CatchHandler @ 03521fa4 */
    }
    pSVar22 = (System_String_o *)
              (*(pSVar17->vtable)._3_ToString.methodPtr)
                        (__this_00,(pSVar17->vtable)._3_ToString.method);
  }
joined_r0x03521aa4:
  if (HPACPFLKHPK == (MMFIDKMDADC_o *)0x0) {
LAB_03521c80:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_03521c00:
  (HPACPFLKHPK->fields).HPACPFLKHPK = pSVar22;
                    /* try { // try from 03521c04 to 03621c0b has its CatchHandler @ 03521f4c */
  thunk_FUN_01c20e04(&HPACPFLKHPK->fields);
                    /* try { // try from 03521c1c to 03621c23 has its CatchHandler @ 03521f5c */
                    /* try { // try from 03521c28 to 03621c2f has its CatchHandler @ 03521f50 */
  return;
}


// ===== public override string ToString()  [RVA 0x3422C7C]
// PerkInfoItem$$ToString @ RVA 0x3422C7C

System_String_o * PerkInfoItem__ToString(PerkInfoItem_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str0;
  
  if ((DAT_045680eb & 1) == 0) {
    FUN_01bab630(&StringLiteral_167/*" "*/);
    DAT_045680eb = 1;
  }
  str0 = (__this->fields).JIJLBFGKNJK;
  pSVar1 = System_Object__ToString((Il2CppObject *)__this,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(str0,StringLiteral_167/*" "*/,pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public string EOBFJAOLIMH(string KGLJICLJHEL)  [RVA 0x3422390]
// PerkInfoItem$$EOBFJAOLIMH @ RVA 0x3422390

System_String_o *
PerkInfoItem__EOBFJAOLIMH(PerkInfoItem_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *CJNHFNHJHPE;
  System_String_o *pSVar3;
  
  if ((DAT_045680ec & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredString>_ContainsKey__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredString>_get_Item__);
    DAT_045680ec = 1;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).NBOMAJCMIIL;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_ObscuredString>_ContainsKey__
                      );
    if (!bVar1) {
      return KGLJICLJHEL;
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).NBOMAJCMIIL
    ;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      CJNHFNHJHPE = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)
                    System_Collections_Generic_Dictionary<object,_object>__get_Item
                              (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                               Method_System_Collections_Generic_Dictionary<string,_ObscuredString>_get_Item__
                              );
      pSVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                         (CJNHFNHJHPE,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void RandomizeObscuredVars()  [RVA 0x3422CDC]
// PerkInfoItem$$RandomizeObscuredVars @ RVA 0x3422CDC

void PerkInfoItem__RandomizeObscuredVars(PerkInfoItem_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *source;
  System_Collections_Generic_List_TSource__o *__this_01;
  System_Action_ObscuredString__o **ppSVar1;
  FPLCEOJCPOD_o *__this_02;
  System_Action_ACCKJOAAEKB__o **ppSVar2;
  System_Action_NJPBBPOABKP__o **ppSVar3;
  MethodInfo *in_x2;
  System_Collections_Generic_List_NJPBBPOABKP__o *__this_03;
  System_Collections_Generic_List_ACCKJOAAEKB__o *__this_04;
  System_Action_NJPBBPOABKP__o *action;
  System_Action_ObscuredString__o *action_00;
  System_Action_ACCKJOAAEKB__o *action_01;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_05;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_06;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_07;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o __this_08;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o __this_09;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o __this_10;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o __this_11;
  
  if ((DAT_045680ed & 1) == 0) {
    FUN_01bab630(&System_Action<NJPBBPOABKP>_TypeInfo);
    FUN_01bab630(&System_Action<ObscuredString>_TypeInfo);
    FUN_01bab630(&System_Action<ACCKJOAAEKB>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredString>_get_Values__)
    ;
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<ObscuredString>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ObscuredString>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBBPOABKP>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ACCKJOAAEKB>_ForEach__);
    FUN_01bab630(&Method_HEFOANCOHDC_<>c_FIGOGJKPHGM__);
    FUN_01bab630(&Method_HEFOANCOHDC_<>c_JOAFJDKEKGN__);
    FUN_01bab630(&Method_HEFOANCOHDC_<>c_PCNLMANCIDF__);
    FUN_01bab630(&PerkInfoItem_<>c_TypeInfo);
    DAT_045680ed = 1;
  }
  __this_08.fields.fakeValue = false;
  __this_08.fields.inited = false;
  __this_08.fields.fakeValueActive = false;
  __this_08.fields._11_1_ = 0;
  __this_08.fields._0_8_ = &__this->fields;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__GPJJDLBJOAL(__this_08,in_x2);
  __this_09.fields.fakeValue = false;
  __this_09.fields.inited = false;
  __this_09.fields.fakeValueActive = false;
  __this_09.fields._11_1_ = 0;
  __this_09.fields._0_8_ = &(__this->fields).HHDBIGKBMEC;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__GPJJDLBJOAL(__this_09,in_x2);
  __this_05.fields.fakeValue = 0;
  __this_05.fields.fakeValueActive = false;
  __this_05.fields.inited = false;
  __this_05.fields._14_2_ = 0;
  __this_05.fields._0_8_ = &(__this->fields).NOPGBJNLFHM;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_05,in_x2);
  __this_06.fields.fakeValue = 0;
  __this_06.fields.fakeValueActive = false;
  __this_06.fields.inited = false;
  __this_06.fields._14_2_ = 0;
  __this_06.fields._0_8_ = &(__this->fields).EAGEGPKAEKI;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_06,in_x2);
  __this_07.fields.fakeValue = 0;
  __this_07.fields.fakeValueActive = false;
  __this_07.fields.inited = false;
  __this_07.fields._14_2_ = 0;
  __this_07.fields._0_8_ = &(__this->fields).EMLGCOFGNKH;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_07,in_x2);
  __this_10.fields.fakeValue = false;
  __this_10.fields.inited = false;
  __this_10.fields.fakeValueActive = false;
  __this_10.fields._11_1_ = 0;
  __this_10.fields._0_8_ = &(__this->fields).CHLMHEGKKNH;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__GPJJDLBJOAL(__this_10,in_x2);
  __this_11.fields.fakeValue = false;
  __this_11.fields.inited = false;
  __this_11.fields.fakeValueActive = false;
  __this_11.fields._11_1_ = 0;
  __this_11.fields._0_8_ = &(__this->fields).JFMAEFOHLDF;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__GPJJDLBJOAL(__this_11,in_x2);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).NBOMAJCMIIL;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    source = System_Collections_Generic_Dictionary<object,_object>__get_Values
                       (__this_00,
                        Method_System_Collections_Generic_Dictionary<string,_ObscuredString>_get_Values__
                       );
    __this_01 = System_Linq_Enumerable__ToList<object>
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           Method_System_Linq_Enumerable_ToList<ObscuredString>__);
    if ((PerkInfoItem_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(PerkInfoItem_<>c_TypeInfo);
    }
    action_00 = PerkInfoItem_<>c_TypeInfo->static_fields->__9__86_0;
    if (action_00 == (System_Action_ObscuredString__o *)0x0) {
      if ((PerkInfoItem_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(PerkInfoItem_<>c_TypeInfo);
      }
      action_00 = (System_Action_ObscuredString__o *)
                  thunk_FUN_01bda818(System_Action<ObscuredString>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar1 = &PerkInfoItem_<>c_TypeInfo->static_fields->__9__86_0;
      *ppSVar1 = action_00;
      thunk_FUN_01c20e04(ppSVar1,action_00);
    }
    if (__this_01 == (System_Collections_Generic_List_TSource__o *)0x0) goto LAB_03523000;
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_01,
               (System_Action_T__o *)action_00,
               Method_System_Collections_Generic_List<ObscuredString>_ForEach__);
  }
  __this_02 = (__this->fields).ACHJNNOKEDK;
  if (__this_02 != (FPLCEOJCPOD_o *)0x0) {
    FPLCEOJCPOD__RandomizeObscuredVars(__this_02,(MethodInfo *)0x0);
  }
  __this_04 = (__this->fields).NLHLDLBGAKK;
  if ((PerkInfoItem_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  action_01 = PerkInfoItem_<>c_TypeInfo->static_fields->__9__86_1;
  if (action_01 == (System_Action_ACCKJOAAEKB__o *)0x0) {
    if ((PerkInfoItem_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action_01 = (System_Action_ACCKJOAAEKB__o *)
                thunk_FUN_01bda818(System_Action<ACCKJOAAEKB>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar2 = &PerkInfoItem_<>c_TypeInfo->static_fields->__9__86_1;
    *ppSVar2 = action_01;
    thunk_FUN_01c20e04(ppSVar2,action_01);
  }
  if (__this_04 != (System_Collections_Generic_List_ACCKJOAAEKB__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_04,
               (System_Action_T__o *)action_01,
               Method_System_Collections_Generic_List<ACCKJOAAEKB>_ForEach__);
    __this_03 = (__this->fields).EMNOFACFIBF;
    if ((PerkInfoItem_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action = PerkInfoItem_<>c_TypeInfo->static_fields->__9__86_2;
    if (action == (System_Action_NJPBBPOABKP__o *)0x0) {
      if ((PerkInfoItem_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action = (System_Action_NJPBBPOABKP__o *)
               thunk_FUN_01bda818(System_Action<NJPBBPOABKP>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar3 = &PerkInfoItem_<>c_TypeInfo->static_fields->__9__86_2;
      *ppSVar3 = action;
      thunk_FUN_01c20e04(ppSVar3,action);
    }
    if (__this_03 != (System_Collections_Generic_List_NJPBBPOABKP__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_03,(System_Action_T__o *)action
                 ,Method_System_Collections_Generic_List<NJPBBPOABKP>_ForEach__);
      return;
    }
  }
LAB_03523000:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PBFLEDOEKPK(Model BCKBBGCOMJD, NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC HPACPFLKHPK)  [RVA 0x3421D0C]
// PerkInfoItem$$PBFLEDOEKPK @ RVA 0x3421D0C

void PerkInfoItem__PBFLEDOEKPK
               (PerkInfoItem_o *__this,Model_o *BCKBBGCOMJD,
               NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,MMFIDKMDADC_o *HPACPFLKHPK,MethodInfo *method)

{
  System_Func_CNDPAJOLKFN__float__o **ppSVar1;
  MethodInfo *in_x5;
  System_Func_CNDPAJOLKFN__float__o *HECFKGPGKPF;
  
                    /* try { // try from 03521d38 to 03621d3b has its CatchHandler @ 03521f1c */
  if ((DAT_045680ee & 1) == 0) {
                    /* try { // try from 03521d44 to 03621d63 has its CatchHandler @ 03521f44 */
    FUN_01bab630(&System_Func<Vector3f,_float>_TypeInfo);
    FUN_01bab630(&Method_HEFOANCOHDC_<>c_FJEOFNGDDFG__);
    FUN_01bab630(&PerkInfoItem_<>c_TypeInfo);
    DAT_045680ee = 1;
  }
  if ((PerkInfoItem_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03521d78 to 03621d9b has its CatchHandler @ 03521f80 */
    thunk_FUN_01ba7564();
  }
  HECFKGPGKPF = PerkInfoItem_<>c_TypeInfo->static_fields->__9__71_0;
  if (HECFKGPGKPF == (System_Func_CNDPAJOLKFN__float__o *)0x0) {
    if ((PerkInfoItem_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 03521d9c to 03621da3 has its CatchHandler @ 03521f64 */
                    /* try { // try from 03521dac to 03621db7 has its CatchHandler @ 03521f78 */
    HECFKGPGKPF = (System_Func_CNDPAJOLKFN__float__o *)
                  thunk_FUN_01bda818(System_Func<Vector3f,_float>_TypeInfo);
                    /* try { // try from 03521db8 to 03621dcb has its CatchHandler @ 03521f60 */
    System_Func<object,_float>___ctor();
                    /* try { // try from 03521dd0 to 03621de3 has its CatchHandler @ 03521fc0 */
    ppSVar1 = &PerkInfoItem_<>c_TypeInfo->static_fields->__9__71_0;
    *ppSVar1 = HECFKGPGKPF;
    thunk_FUN_01c20e04(ppSVar1,HECFKGPGKPF);
  }
                    /* try { // try from 03521de4 to 03621eef has its CatchHandler @ 035214bc */
  if (__this != (PerkInfoItem_o *)0x0) {
    PerkInfoItem__DEGNJDCECLI(__this,BCKBBGCOMJD,ACCIJLGMHOO,HPACPFLKHPK,HECFKGPGKPF,in_x5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string FBEOHCOEMKH(string DOBODIEOBBL)  [RVA 0x341BE4C]
// PerkInfoItem$$FBEOHCOEMKH @ RVA 0x341BE4C

System_String_o *
PerkInfoItem__FBEOHCOEMKH(PerkInfoItem_o *__this,System_String_o *DOBODIEOBBL,MethodInfo *method)

{
  Il2CppObject *KGLJICLJHEL;
  bool bVar1;
  uint16_t uVar2;
  uint index;
  int32_t iVar3;
  uint uVar4;
  System_Text_StringBuilder_o *__this_00;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar5;
  EILGGBOIMGE_FMFDKGKCBBG_o *__this_01;
  QuestCondition_o *__this_02;
  System_String_o *pSVar6;
  System_String_o *value;
  NILLKLHKLHG_o *__this_03;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o *pSVar7;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o **ppSVar8;
  System_Collections_Generic_Dictionary_object__object__o *__this_04;
  MMFIDKMDADC_o *pMVar9;
  PKHMIGFEJCL_o *pPVar10;
  PKHMIGFEJCL_o **ppPVar11;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_b8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_90;
  
  if ((DAT_045680ef & 1) == 0) {
    FUN_01bab630(&System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_ObscuredString>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredString>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredString>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredString>_get_Current__
                );
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    FUN_01bab630(&Method_HEFOANCOHDC_BJKIFFGGDEE__);
    FUN_01bab630(&Method_HEFOANCOHDC_GLHBJFHGHLC__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_ObscuredString>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_ObscuredString>_get_Value__
                );
    FUN_01bab630(&QuestCondition_TypeInfo);
    FUN_01bab630(&NILLKLHKLHG_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045680ef = 1;
  }
  local_90.fields._getEnumeratorRetType = 0;
  local_90.fields._36_4_ = 0;
  local_90.fields._version = 0;
  local_90.fields._index = 0;
  local_90.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_90.fields._current.fields.value = (Il2CppObject *)0x0;
  local_90.fields._current.fields.key = (Il2CppObject *)0x0;
  if (DOBODIEOBBL != (System_String_o *)0x0) {
    index = System_String__IndexOf(DOBODIEOBBL,0x7b,(MethodInfo *)0x0);
    if ((index == 0xffffffff) ||
       (iVar3 = System_String__LastIndexOf(DOBODIEOBBL,0x7d,(MethodInfo *)0x0), iVar3 == -1)) {
      return DOBODIEOBBL;
    }
    __this_00 = (System_Text_StringBuilder_o *)
                thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append(__this_00,DOBODIEOBBL,(MethodInfo *)0x0);
      pNVar5 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (pNVar5 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
        pPVar10 = (pNVar5->fields).QuestParameters;
        __this_01 = (EILGGBOIMGE_FMFDKGKCBBG_o *)
                    thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
        EILGGBOIMGE_FMFDKGKCBBG___ctor(__this_01,(MethodInfo *)0x0);
        __this_02 = (QuestCondition_o *)thunk_FUN_01bda818(QuestCondition_TypeInfo);
        QuestCondition___ctor(__this_02,(MethodInfo *)0x0);
        if (__this_02 != (QuestCondition_o *)0x0) {
          ppPVar11 = &(__this_02->fields).AAJBIMFNMBB;
          *ppPVar11 = pPVar10;
          thunk_FUN_01c20e04(ppPVar11,pPVar10);
          pSVar6 = StringLiteral_1/*""*/;
          do {
            StringLiteral_1/*""*/ = pSVar6;
            if (iVar3 < (int)index) {
              pSVar6 = (System_String_o *)
                       (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                                 (__this_00,(__this_00->klass->vtable)._3_ToString.method);
              return pSVar6;
            }
                    /* try { // try from 0351c054 to 0361c247 has its CatchHandler @ 0351c054
                       catch() { ... } // from try @ 0351c054 with catch @ 0351c054
                       catch() { ... } // from try @ 0351c280 with catch @ 0351c054
                       catch() { ... } // from try @ 0351c2b8 with catch @ 0351c054
                       catch() { ... } // from try @ 0351c2e4 with catch @ 0351c054
                       catch() { ... } // from try @ 0351c324 with catch @ 0351c054 */
            uVar2 = System_String__get_Chars(DOBODIEOBBL,index,(MethodInfo *)0x0);
            uVar4 = index;
            if (uVar2 == 0x7b) {
              uVar4 = System_String__IndexOf(DOBODIEOBBL,0x7d,index,(MethodInfo *)0x0);
              value = System_String__Substring
                                (DOBODIEOBBL,index + 1,uVar4 + ~index,(MethodInfo *)0x0);
              bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
              if (!bVar1) {
                __this_03 = (NILLKLHKLHG_o *)thunk_FUN_01bda818(NILLKLHKLHG_TypeInfo);
                NILLKLHKLHG___ctor(__this_03,(MethodInfo *)0x0);
                pSVar7 = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                         thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
                System_Action<object>___ctor();
                if (__this_03 == (NILLKLHKLHG_o *)0x0) break;
                (__this_03->fields)._PGFJLBODEHE_k__BackingField = pSVar7;
                thunk_FUN_01c20e04(&__this_03->fields,pSVar7);
                pSVar7 = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                         thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
                System_Action<object>___ctor();
                ppSVar8 = &(__this_03->fields)._KFMEPBBGDFG_k__BackingField;
                *ppSVar8 = pSVar7;
                thunk_FUN_01c20e04(ppSVar8,pSVar7);
                __this_04 = (System_Collections_Generic_Dictionary_object__object__o *)
                            (__this->fields).NBOMAJCMIIL;
                if (__this_04 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                break;
                System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
                          (&local_b8,__this_04,
                           Method_System_Collections_Generic_Dictionary<string,_ObscuredString>_GetEnumerator__
                          );
                local_90.fields._version = local_b8.fields._version;
                local_90.fields._index = local_b8.fields._index;
                local_90.fields._dictionary = local_b8.fields._dictionary;
                local_90.fields._current.fields.value = local_b8.fields._current.fields.value;
                local_90.fields._current.fields.key = local_b8.fields._current.fields.key;
                local_90.fields._getEnumeratorRetType = local_b8.fields._getEnumeratorRetType;
                local_90.fields._36_4_ = local_b8.fields._36_4_;
                while (bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                                         (&local_90,
                                          Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredString>_MoveNext__
                                         ), KGLJICLJHEL = local_90.fields._current.fields.key, bVar1
                      ) {
                  pSVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                                     ((CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)
                                      local_90.fields._current.fields.value,(MethodInfo *)0x0);
                  NILLKLHKLHG__HEMDIAFAMAO
                            (__this_03,(System_String_o *)KGLJICLJHEL,pSVar6,(MethodInfo *)0x0);
                }
                System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
                          (&local_90,
                           Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredString>_Dispose__
                          );
                NILLKLHKLHG__HNIHOIAMDPC(__this_03,value,(MethodInfo *)0x0);
                pMVar9 = NILLKLHKLHG__CHKGAHCDFJF(__this_03,false,(MethodInfo *)0x0);
                if (pMVar9 == (MMFIDKMDADC_o *)0x0) break;
                pSVar6 = (pMVar9->fields).HPACPFLKHPK;
              }
              System_Text_StringBuilder__Replace(__this_00,value,pSVar6,(MethodInfo *)0x0);
            }
            index = uVar4 + 1;
            pSVar6 = StringLiteral_1/*""*/;
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


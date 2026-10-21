// TypeDefIndex 1703
// Namespace: 
// public class GELGBIEICHA : QuestAction
// Fields:
//   private string CJFAPGEEPLM; // 0x68
//   private string GACCBNDABEI; // 0x70
//   private string DLBBBHCEOGH; // 0x78

// ===== private void LOMHLGCANLK()  [RVA 0x31D3CD8]
// GELGBIEICHA$$LOMHLGCANLK @ RVA 0x31D3CD8

void GELGBIEICHA__LOMHLGCANLK(GELGBIEICHA_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_String_o *url;
  
  if ((DAT_04566cc8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04566cc8 = 1;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar4 = pPVar2->klass;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar4->vtable + (*piVar6 + 4);
        goto LAB_032d3d78;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,4);
LAB_032d3d78:
  uVar5 = (*pVVar3->methodPtr)(pPVar2,pVVar3->method);
  if ((uVar5 & 1) != 0) {
    return;
  }
  url = (__this->fields).DLBBBHCEOGH;
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Application__OpenURL(url,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x31D3DC8]
// GELGBIEICHA$$MAHFCKJGBPP @ RVA 0x31D3DC8

void GELGBIEICHA__MAHFCKJGBPP(GELGBIEICHA_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  EILGGBOIMGE_FMFDKGKCBBG_o *pEVar4;
  QuestCondition_o *pLVar5;
  PKHMIGFEJCL_o **ppPVar6;
  System_String_o *pSVar7;
  PBAKFOBIHEG_o *pPVar8;
  undefined8 uVar9;
  Il2CppObject *pIVar10;
  VirtualInvokeData *pVVar11;
  PBAKFOBIHEG_c *pPVar12;
  ulong uVar13;
  int32_t *piVar14;
  System_String_o **ppSVar15;
  
  if ((DAT_04566cc9 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    FUN_01bab630(&Method_GELGBIEICHA_LOMHLGCANLK__);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&QuestCondition_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04566cc9 = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  bVar3 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).CJFAPGEEPLM,(MethodInfo *)0x0);
  if (!bVar3) {
    pEVar4 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    EILGGBOIMGE_FMFDKGKCBBG___ctor(pEVar4,(MethodInfo *)0x0);
    pLVar5 = (QuestCondition_o *)thunk_FUN_01bda818(QuestCondition_TypeInfo);
    QuestCondition___ctor(pLVar5,(MethodInfo *)0x0);
    if (pLVar5 == (QuestCondition_o *)0x0) goto LAB_032d40e0;
    ppPVar6 = &(pLVar5->fields).AAJBIMFNMBB;
    *ppPVar6 = AAJBIMFNMBB;
    thunk_FUN_01c20e04(ppPVar6,AAJBIMFNMBB);
    EILGGBOIMGE__KFMNMGGDHFD
              ((EILGGBOIMGE_o *)pLVar5,(__this->fields).CJFAPGEEPLM,pEVar4,false,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    if (pEVar4 == (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) goto LAB_032d40e0;
    pSVar7 = (System_String_o *)
             (*(pEVar4->klass->vtable)._3_ToString.methodPtr)
                       (pEVar4,(pEVar4->klass->vtable)._3_ToString.method);
    bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar7,(MethodInfo *)0x0);
    if (!bVar3) {
                    /* try { // try from 032d3f08 to 033d3f0b has its CatchHandler @ 032d41ec */
                    /* try { // try from 032d3f0c to 033d3f0f has its CatchHandler @ 032d2bd0 */
                    /* try { // try from 032d3f10 to 033d3f13 has its CatchHandler @ 032d4170 */
                    /* try { // try from 032d3f14 to 033d3f17 has its CatchHandler @ 032d416c */
      if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 032d3f18 to 033d3f1b has its CatchHandler @ 032d4168 */
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 032d3f1c to 033d3f1f has its CatchHandler @ 032d4154 */
                    /* try { // try from 032d3f20 to 033d3f23 has its CatchHandler @ 032d414c */
                    /* try { // try from 032d3f24 to 033d3f27 has its CatchHandler @ 032d4148 */
      UnityEngine_Application__OpenURL(pSVar7,(MethodInfo *)0x0);
    }
  }
                    /* try { // try from 032d3f28 to 033d3f2b has its CatchHandler @ 032d4140 */
                    /* try { // try from 032d3f2c to 033d3f2f has its CatchHandler @ 032d413c */
                    /* try { // try from 032d3f30 to 033d3f33 has its CatchHandler @ 032d412c */
  bVar3 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).GACCBNDABEI,(MethodInfo *)0x0);
                    /* try { // try from 032d3f34 to 033d3f37 has its CatchHandler @ 032d4128 */
  if (bVar3) goto LAB_032d40c0;
                    /* try { // try from 032d3f38 to 033d3f3b has its CatchHandler @ 032d4114 */
                    /* try { // try from 032d3f3c to 033d3f3f has its CatchHandler @ 032d4110 */
  pEVar4 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
                    /* try { // try from 032d3f40 to 033d3f43 has its CatchHandler @ 032d40f8 */
                    /* try { // try from 032d3f44 to 033d3f47 has its CatchHandler @ 032d40f4 */
                    /* try { // try from 032d3f48 to 033d3f4f has its CatchHandler @ 032d411c */
  EILGGBOIMGE_FMFDKGKCBBG___ctor(pEVar4,(MethodInfo *)0x0);
                    /* try { // try from 032d3f50 to 033d3f53 has its CatchHandler @ 032d40d8 */
  pLVar5 = (QuestCondition_o *)thunk_FUN_01bda818(QuestCondition_TypeInfo);
                    /* try { // try from 032d3f54 to 033d3f57 has its CatchHandler @ 032d40d0 */
                    /* try { // try from 032d3f58 to 033d3f5f has its CatchHandler @ 032d4104 */
  QuestCondition___ctor(pLVar5,(MethodInfo *)0x0);
                    /* try { // try from 032d3f60 to 033d3f63 has its CatchHandler @ 032d40c8 */
  if (pLVar5 != (QuestCondition_o *)0x0) {
    ppPVar6 = &(pLVar5->fields).AAJBIMFNMBB;
                    /* try { // try from 032d3f64 to 033d3f67 has its CatchHandler @ 032d40c0 */
                    /* try { // try from 032d3f68 to 033d3f6b has its CatchHandler @ 032d40bc */
    *ppPVar6 = AAJBIMFNMBB;
                    /* try { // try from 032d3f6c to 033d3f6f has its CatchHandler @ 032d40b8 */
                    /* try { // try from 032d3f70 to 033d3f73 has its CatchHandler @ 032d40b0 */
    thunk_FUN_01c20e04(ppPVar6,AAJBIMFNMBB);
                    /* try { // try from 032d3f74 to 033d3f77 has its CatchHandler @ 032d40ac */
                    /* try { // try from 032d3f78 to 033d3f7f has its CatchHandler @ 032d40fc */
                    /* try { // try from 032d3f80 to 033d3f83 has its CatchHandler @ 032d40a8 */
                    /* try { // try from 032d3f84 to 033d3f87 has its CatchHandler @ 032d40a4 */
                    /* try { // try from 032d3f88 to 033d3f8b has its CatchHandler @ 032d4098 */
                    /* try { // try from 032d3f8c to 033d3f8f has its CatchHandler @ 032d4090 */
    EILGGBOIMGE__KFMNMGGDHFD
              ((EILGGBOIMGE_o *)pLVar5,(__this->fields).GACCBNDABEI,pEVar4,false,
               (System_String_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 032d3f90 to 033d3f93 has its CatchHandler @ 032d4084 */
    if (pEVar4 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
                    /* try { // try from 032d3f94 to 033d3f97 has its CatchHandler @ 032d405c */
                    /* try { // try from 032d3f98 to 033d3f9b has its CatchHandler @ 032d4054 */
                    /* try { // try from 032d3f9c to 033d3f9f has its CatchHandler @ 032d404c */
                    /* try { // try from 032d3fa0 to 033d3fa3 has its CatchHandler @ 032d4044 */
      pSVar7 = (System_String_o *)
               (*(pEVar4->klass->vtable)._3_ToString.methodPtr)
                         (pEVar4,(pEVar4->klass->vtable)._3_ToString.method);
      ppSVar15 = &(__this->fields).DLBBBHCEOGH;
                    /* try { // try from 032d3fa4 to 033d3fa7 has its CatchHandler @ 032d413c */
                    /* try { // try from 032d3fa8 to 033d3fab has its CatchHandler @ 032d403c */
      *ppSVar15 = pSVar7;
                    /* try { // try from 032d3fac to 033d3faf has its CatchHandler @ 032d4034 */
                    /* try { // try from 032d3fb0 to 033d3fb7 has its CatchHandler @ 032d40a0 */
      thunk_FUN_01c20e04(ppSVar15,pSVar7);
                    /* try { // try from 032d3fb8 to 033d3fbb has its CatchHandler @ 032d4024 */
                    /* try { // try from 032d3fbc to 033d3fc3 has its CatchHandler @ 032d4064 */
      bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(*ppSVar15,(MethodInfo *)0x0);
                    /* try { // try from 032d3fc4 to 033d3fc7 has its CatchHandler @ 032d4004 */
      if (!bVar3) {
                    /* try { // try from 032d3fc8 to 033d3fcb has its CatchHandler @ 032d4000 */
                    /* try { // try from 032d3fcc to 033d3fcf has its CatchHandler @ 032d3ffc */
        pPVar8 = CoroutineManager__get_Current((MethodInfo *)0x0);
                    /* try { // try from 032d3fd0 to 033d3fd3 has its CatchHandler @ 032d3ff8 */
                    /* try { // try from 032d3fd4 to 033d3fdb has its CatchHandler @ 032d3fe0 */
                    /* catch() { ... } // from try @ 032d3b38 with catch @ 032d3fdc
                       catch() { ... } // from try @ 032d3b80 with catch @ 032d3fdc
                       try { // try from 032d3fdc to 033d4193 has its CatchHandler @ 032d2bd0 */
                    /* catch() { ... } // from try @ 032d3fd4 with catch @ 032d3fe0 */
                    /* catch() { ... } // from try @ 032d3acc with catch @ 032d3fe4 */
        uVar9 = thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* catch() { ... } // from try @ 032d36e4 with catch @ 032d3fe8 */
                    /* catch() { ... } // from try @ 032d38d4 with catch @ 032d3fec */
                    /* catch() { ... } // from try @ 032d3890 with catch @ 032d3ff0 */
                    /* catch() { ... } // from try @ 032d37c0 with catch @ 032d3ff4 */
                    /* catch() { ... } // from try @ 032d3fd0 with catch @ 032d3ff8 */
                    /* catch() { ... } // from try @ 032d3fcc with catch @ 032d3ffc */
                    /* catch() { ... } // from try @ 032d3fc8 with catch @ 032d4000 */
        System_Action___ctor();
                    /* catch() { ... } // from try @ 032d3fc4 with catch @ 032d4004 */
                    /* catch() { ... } // from try @ 032d3190 with catch @ 032d4008
                       catch() { ... } // from try @ 032d3b54 with catch @ 032d4008 */
                    /* catch() { ... } // from try @ 032d3104 with catch @ 032d400c */
                    /* catch() { ... } // from try @ 032d342c with catch @ 032d4010 */
                    /* catch() { ... } // from try @ 032d36f8 with catch @ 032d4014 */
        if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 032d38f4 with catch @ 032d4018 */
          thunk_FUN_01ba7564();
        }
                    /* catch() { ... } // from try @ 032d37f4 with catch @ 032d401c */
                    /* catch() { ... } // from try @ 032d399c with catch @ 032d4020
                       catch() { ... } // from try @ 032d39e8 with catch @ 032d4020 */
                    /* catch() { ... } // from try @ 032d3fb8 with catch @ 032d4024 */
                    /* catch() { ... } // from try @ 032d3790 with catch @ 032d4028
                       catch() { ... } // from try @ 032d39d4 with catch @ 032d4028 */
        pIVar10 = IFAMAAGNCBJ__GPBMELHDADN<object>
                            (Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
                    /* catch() { ... } // from try @ 032d373c with catch @ 032d402c */
                    /* catch() { ... } // from try @ 032d37a8 with catch @ 032d4030 */
        if ((pIVar10 == (Il2CppObject *)0x0) || (pPVar8 == (PBAKFOBIHEG_o *)0x0)) goto LAB_032d40e0;
                    /* catch() { ... } // from try @ 032d3fac with catch @ 032d4034 */
                    /* catch() { ... } // from try @ 032d3584 with catch @ 032d4038 */
        iVar2 = *(int *)&pIVar10[6].klass;
                    /* catch() { ... } // from try @ 032d3fa8 with catch @ 032d403c */
                    /* catch() { ... } // from try @ 032d3a2c with catch @ 032d4040 */
        pPVar12 = pPVar8->klass;
        uVar1._0_1_ = (pPVar12->_2).rank;
        uVar1._1_1_ = (pPVar12->_2).minimumAlignment;
                    /* catch() { ... } // from try @ 032d3fa0 with catch @ 032d4044 */
                    /* catch() { ... } // from try @ 032d397c with catch @ 032d4048 */
                    /* catch() { ... } // from try @ 032d3f9c with catch @ 032d404c */
                    /* catch() { ... } // from try @ 032d3aa0 with catch @ 032d4050 */
                    /* catch() { ... } // from try @ 032d3f98 with catch @ 032d4054 */
        uVar13 = (ulong)uVar1;
                    /* catch() { ... } // from try @ 032d3940 with catch @ 032d4058 */
                    /* catch() { ... } // from try @ 032d3f94 with catch @ 032d405c */
                    /* catch() { ... } // from try @ 032d30a0 with catch @ 032d4060 */
                    /* catch() { ... } // from try @ 032d3fbc with catch @ 032d4064 */
                    /* catch() { ... } // from try @ 032d312c with catch @ 032d4068 */
        if (uVar13 != 0) {
                    /* catch() { ... } // from try @ 032d3688 with catch @ 032d406c */
                    /* catch() { ... } // from try @ 032d3440 with catch @ 032d4070 */
          piVar14 = &((pPVar12->_1).interfaceOffsets)->offset;
          do {
                    /* catch() { ... } // from try @ 032d3a58 with catch @ 032d4074 */
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                    /* catch() { ... } // from try @ 032d347c with catch @ 032d409c */
                    /* catch() { ... } // from try @ 032d3fb0 with catch @ 032d40a0 */
                    /* catch() { ... } // from try @ 032d3f84 with catch @ 032d40a4 */
                    /* catch() { ... } // from try @ 032d3f80 with catch @ 032d40a8 */
              pVVar11 = pPVar12->vtable + (*piVar14 + 2);
              goto LAB_032d40ac;
            }
            uVar13 = uVar13 - 1;
                    /* catch() { ... } // from try @ 032d3f90 with catch @ 032d4084 */
            piVar14 = piVar14 + 4;
                    /* catch() { ... } // from try @ 032d351c with catch @ 032d4088 */
          } while (uVar13 != 0);
        }
                    /* catch() { ... } // from try @ 032d30d4 with catch @ 032d408c */
                    /* catch() { ... } // from try @ 032d3f8c with catch @ 032d4090 */
                    /* catch() { ... } // from try @ 032d304c with catch @ 032d4094 */
        pVVar11 = (VirtualInvokeData *)FUN_01b81914(pPVar8,PBAKFOBIHEG_TypeInfo,2);
                    /* catch() { ... } // from try @ 032d3f88 with catch @ 032d4098 */
LAB_032d40ac:
                    /* catch() { ... } // from try @ 032d3f74 with catch @ 032d40ac */
                    /* catch() { ... } // from try @ 032d3f70 with catch @ 032d40b0 */
                    /* catch() { ... } // from try @ 032d34d0 with catch @ 032d40b4
                       catch() { ... } // from try @ 032d3640 with catch @ 032d40b4 */
                    /* catch() { ... } // from try @ 032d3f6c with catch @ 032d40b8 */
                    /* catch() { ... } // from try @ 032d3f68 with catch @ 032d40bc */
        (*pVVar11->methodPtr)((ulong)(uint)(float)(iVar2 / 1000),pPVar8,uVar9,pVVar11->method);
      }
LAB_032d40c0:
                    /* catch() { ... } // from try @ 032d3f64 with catch @ 032d40c0 */
                    /* catch() { ... } // from try @ 032d3570 with catch @ 032d40c4 */
                    /* catch() { ... } // from try @ 032d3f60 with catch @ 032d40c8 */
                    /* catch() { ... } // from try @ 032d360c with catch @ 032d40cc */
                    /* catch() { ... } // from try @ 032d3f54 with catch @ 032d40d0 */
                    /* catch() { ... } // from try @ 032d35ac with catch @ 032d40d4 */
                    /* catch() { ... } // from try @ 032d3f50 with catch @ 032d40d8 */
                    /* catch() { ... } // from try @ 032d395c with catch @ 032d40dc */
      QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
LAB_032d40e0:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 032d384c with catch @ 032d40e0 */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x31D40E4]
// GELGBIEICHA$$.ctor @ RVA 0x31D40E4

void GELGBIEICHA___ctor(GELGBIEICHA_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 032d3660 with catch @ 032d40e4 */
                    /* catch() { ... } // from try @ 032d33d4 with catch @ 032d40e8 */
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x31D40EC]
// GELGBIEICHA$$HNIHOIAMDPC @ RVA 0x31D40EC

void GELGBIEICHA__HNIHOIAMDPC
               (GELGBIEICHA_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
                    /* catch() { ... } // from try @ 032d3204 with catch @ 032d40ec */
                    /* catch() { ... } // from try @ 032d3258 with catch @ 032d40f0
                       catch() { ... } // from try @ 032d34e8 with catch @ 032d40f0 */
                    /* catch() { ... } // from try @ 032d3f44 with catch @ 032d40f4 */
                    /* catch() { ... } // from try @ 032d3f40 with catch @ 032d40f8 */
                    /* catch() { ... } // from try @ 032d3f78 with catch @ 032d40fc */
                    /* catch() { ... } // from try @ 032d3068 with catch @ 032d4100 */
                    /* catch() { ... } // from try @ 032d3f58 with catch @ 032d4104 */
  if ((DAT_04566cca & 1) == 0) {
                    /* catch() { ... } // from try @ 032d33ac with catch @ 032d4108 */
                    /* catch() { ... } // from try @ 032d3010 with catch @ 032d410c */
                    /* catch() { ... } // from try @ 032d3f3c with catch @ 032d4110 */
    FUN_01bab630(&StringLiteral_2637/*"ALT_URL"*/);
                    /* catch() { ... } // from try @ 032d3f38 with catch @ 032d4114 */
                    /* catch() { ... } // from try @ 032d3350 with catch @ 032d4118 */
                    /* catch() { ... } // from try @ 032d3f48 with catch @ 032d411c */
    FUN_01bab630(&StringLiteral_14179/*"URL"*/);
                    /* catch() { ... } // from try @ 032d32fc with catch @ 032d4120 */
                    /* catch() { ... } // from try @ 032d3384 with catch @ 032d4124 */
    DAT_04566cca = 1;
  }
                    /* catch() { ... } // from try @ 032d3f34 with catch @ 032d4128 */
                    /* catch() { ... } // from try @ 032d3f30 with catch @ 032d412c */
                    /* catch() { ... } // from try @ 032d2ff8 with catch @ 032d4130 */
                    /* catch() { ... } // from try @ 032d31d8 with catch @ 032d4134 */
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032d31c4 with catch @ 032d4138 */
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
                    /* catch() { ... } // from try @ 032d3f2c with catch @ 032d413c
                       catch() { ... } // from try @ 032d3fa4 with catch @ 032d413c */
                    /* catch() { ... } // from try @ 032d3f28 with catch @ 032d4140 */
                    /* catch() { ... } // from try @ 032d32c8 with catch @ 032d4144 */
                    /* catch() { ... } // from try @ 032d3f24 with catch @ 032d4148 */
                    /* catch() { ... } // from try @ 032d3f20 with catch @ 032d414c */
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
                    /* catch() { ... } // from try @ 032d3318 with catch @ 032d4150 */
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch() { ... } // from try @ 032d3f1c with catch @ 032d4154 */
                    /* catch() { ... } // from try @ 032d2fb0 with catch @ 032d4158 */
                    /* catch() { ... } // from try @ 032d32ac with catch @ 032d415c */
                    /* catch() { ... } // from try @ 032d2f54 with catch @ 032d4160 */
                    /* catch() { ... } // from try @ 032d2f44 with catch @ 032d4164
                       catch() { ... } // from try @ 032d2fa0 with catch @ 032d4164
                       catch() { ... } // from try @ 032d350c with catch @ 032d4164
                       catch() { ... } // from try @ 032d37e4 with catch @ 032d4164
                       catch() { ... } // from try @ 032d3880 with catch @ 032d4164
                       catch() { ... } // from try @ 032d38e4 with catch @ 032d4164
                       catch() { ... } // from try @ 032d3a14 with catch @ 032d4164 */
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_14179/*"URL"*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032d3f18 with catch @ 032d4168 */
                    /* catch() { ... } // from try @ 032d3f14 with catch @ 032d416c */
                    /* catch() { ... } // from try @ 032d3f10 with catch @ 032d4170 */
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,(System_String_o *)0x0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032d3cbc with catch @ 032d4174 */
                    /* catch() { ... } // from try @ 032d3c98 with catch @ 032d4178 */
                    /* catch() { ... } // from try @ 032d3c78 with catch @ 032d417c */
      (__this->fields).CJFAPGEEPLM = pSVar3;
      thunk_FUN_01c20e04();
                    /* try { // try from 032d4194 to 033d4197 has its CatchHandler @ 032d41c8 */
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 032d4198 to 033d41d7 has its CatchHandler @ 032d2bd0 */
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_2637/*"ALT_URL"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,(System_String_o *)0x0,(MethodInfo *)0x0);
        ppSVar4 = &(__this->fields).GACCBNDABEI;
        *ppSVar4 = pSVar3;
                    /* catch() { ... } // from try @ 032d4194 with catch @ 032d41c8 */
        thunk_FUN_01c20e04(ppSVar4,pSVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


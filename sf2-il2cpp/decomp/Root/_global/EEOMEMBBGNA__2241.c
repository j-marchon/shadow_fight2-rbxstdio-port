// TypeDefIndex 2241
// Namespace: 
// public class EEOMEMBBGNA
// Fields:
//   private Action<OJEHKJHEBID> JNCKDHJJBPM; // 0x10
//   private Action GHOPCFLDCPK; // 0x18
//   private Action HGPMBNOIMIM; // 0x20
//   private Action<MGDJPGGPDJI> GDANBHGOGAB; // 0x28
//   private Action<long> HAHLDGJHODG; // 0x30
//   private Action<long> KBBECJNEHBM; // 0x38
//   private Action<MGDJPGGPDJI> FAEDLDIIDMG; // 0x40
//   private long NGOFLMHNOGM; // 0x48
//   private OJEHKJHEBID MICFEIBNOLM; // 0x50
//   private CJFBGEEIPBA GMNJEBCECDA; // 0x58
//   private bool MGMAHFNADPA; // 0x60

// ===== private void HMICIOJGIGL(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x32F6480]
// EEOMEMBBGNA$$HMICIOJGIGL @ RVA 0x32F6480

void EEOMEMBBGNA__HMICIOJGIGL(EEOMEMBBGNA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  if ((DAT_04567699 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_17021/*"clan_destroy failed"*/);
    DAT_04567699 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    EEOMEMBBGNA__GCBEBBGLNGI(__this,IDCGLBOIAFJ,method);
    return;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_17021/*"clan_destroy failed"*/,(MethodInfo *)0x0);
  return;
}


// ===== public void HHJEKOPMOKB(LKJJCAEOJBG KBONAFBMDLB, Action<KEFHDOHHHML> JDGAIIPIBNO)  [RVA 0x32F6624]
// EEOMEMBBGNA$$HHJEKOPMOKB @ RVA 0x32F6624

void EEOMEMBBGNA__HHJEKOPMOKB
               (EEOMEMBBGNA_o *__this,LKJJCAEOJBG_o *KBONAFBMDLB,
               System_Action_KEFHDOHHHML__o *JDGAIIPIBNO,MethodInfo *method)

{
  KKLJIDJBFEI_o *__this_00;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  
                    /* try { // try from 033f6638 to 034f663f has its CatchHandler @ 033f668c */
                    /* try { // try from 033f6648 to 034f6653 has its CatchHandler @ 033f6688 */
                    /* try { // try from 033f6654 to 034f66a3 has its CatchHandler @ 033f658c */
  if ((DAT_0456769a & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_EEOMEMBBGNA_AMPHGEFLMAN__);
    FUN_01bab630(&StringLiteral_17015/*"clan_change_role"*/);
    DAT_0456769a = 1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f6648 with catch @ 033f6688
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f6638 with catch @ 033f668c
                        */
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
                    /* try { // try from 033f66a4 to 034f66a7 has its CatchHandler @ 033f66d0 */
                    /* try { // try from 033f66a8 to 034f66d7 has its CatchHandler @ 033f658c */
  System_Action<object>___ctor();
  if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
                    /* catch() { ... } // from try @ 033f66a4 with catch @ 033f66d0 */
                    /* try { // try from 033f66d8 to 034f66df has its CatchHandler @ 033f66f4 */
                    /* try { // try from 033f66e0 to 034f66eb has its CatchHandler @ 033f658c */
                    /* try { // try from 033f66ec to 034f66f3 has its CatchHandler @ 033f66f4 */
    KDPDBGNOFEN__KLNMLOOCAAO
              ((KDPDBGNOFEN_o *)__this_00,StringLiteral_17015/*"clan_change_role"*/,
               (Google_Protobuf_IMessage_o *)KBONAFBMDLB,BLMFLPJJMPF,0.0,(Il2CppObject *)JDGAIIPIBNO
               ,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DJCJMBPPIHK(DMOPGPMINJD KBONAFBMDLB, Action<KEFHDOHHHML> JAICCCHONFE)  [RVA 0x32F66F4]
// EEOMEMBBGNA$$DJCJMBPPIHK @ RVA 0x32F66F4

void EEOMEMBBGNA__DJCJMBPPIHK
               (EEOMEMBBGNA_o *__this,DMOPGPMINJD_o *KBONAFBMDLB,
               System_Action_KEFHDOHHHML__o *JAICCCHONFE,MethodInfo *method)

{
  KKLJIDJBFEI_o *__this_00;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033f66d8 with catch @ 033f66f4
                       catch(type#2 @ 00000000) { ... } // from try @ 033f66ec with catch @ 033f66f4
                        */
                    /* try { // try from 033f66f8 to 034f67c3 has its CatchHandler @ 033f66f8
                       catch() { ... } // from try @ 033f66f8 with catch @ 033f66f8
                       catch() { ... } // from try @ 033f67cc with catch @ 033f66f8
                       catch() { ... } // from try @ 033f6838 with catch @ 033f66f8
                       catch() { ... } // from try @ 033f68a4 with catch @ 033f66f8
                       catch() { ... } // from try @ 033f68f4 with catch @ 033f66f8
                       catch() { ... } // from try @ 033f6918 with catch @ 033f66f8
                       catch() { ... } // from try @ 033f6954 with catch @ 033f66f8
                       catch() { ... } // from try @ 033f6974 with catch @ 033f66f8
                       catch() { ... } // from try @ 033f69ac with catch @ 033f66f8
                       catch() { ... } // from try @ 033f69cc with catch @ 033f66f8
                       catch() { ... } // from try @ 033f69fc with catch @ 033f66f8 */
  if ((DAT_0456769b & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_EEOMEMBBGNA_OAKAJKGEAKK__);
    FUN_01bab630(&StringLiteral_17018/*"clan_create"*/);
    DAT_0456769b = 1;
  }
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
    KDPDBGNOFEN__KLNMLOOCAAO
              ((KDPDBGNOFEN_o *)__this_00,StringLiteral_17018/*"clan_create"*/,
               (Google_Protobuf_IMessage_o *)KBONAFBMDLB,BLMFLPJJMPF,0.0,(Il2CppObject *)JAICCCHONFE
               ,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BLGMCMLEBDI(Action<MGDJPGGPDJI> CJNHFNHJHPE)  [RVA 0x32F67C4]
// EEOMEMBBGNA$$BLGMCMLEBDI @ RVA 0x32F67C4

void EEOMEMBBGNA__BLGMCMLEBDI
               (EEOMEMBBGNA_o *__this,System_Action_MGDJPGGPDJI__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_MGDJPGGPDJI__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_MGDJPGGPDJI__o *pSVar5;
  System_Action_MGDJPGGPDJI__o **ppSVar6;
  System_Action_MGDJPGGPDJI__o *source;
  
                    /* try { // try from 033f67c4 to 034f67cb has its CatchHandler @ 033f69b0 */
                    /* try { // try from 033f67cc to 034f682f has its CatchHandler @ 033f66f8 */
  if ((DAT_0456769c & 1) == 0) {
    FUN_01bab630(&System_Action<MGDJPGGPDJI>_TypeInfo);
    DAT_0456769c = 1;
  }
  ppSVar6 = &(__this->fields).FAEDLDIIDMG;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<MGDJPGGPDJI>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
                    /* try { // try from 033f6838 to 034f689b has its CatchHandler @ 033f66f8 */
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<MGDJPGGPDJI>_TypeInfo);
                    /* try { // try from 033f6830 to 034f6837 has its CatchHandler @ 033f6958 */
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_MGDJPGGPDJI__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void MCDBOKFCGNK(long PEJIFIIDFMM)  [RVA 0x32F6874]
// EEOMEMBBGNA$$MCDBOKFCGNK @ RVA 0x32F6874

void EEOMEMBBGNA__MCDBOKFCGNK(EEOMEMBBGNA_o *__this,int64_t PEJIFIIDFMM,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *pGVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *extraout_x1;
  Il2CppObject *extraout_x1_00;
  MethodInfo *method_00;
  Il2CppObject *extraout_x1_01;
  int index;
  OJEHKJHEBID_o *pOVar4;
  
  pIVar3 = (Il2CppObject *)PEJIFIIDFMM;
  if ((DAT_0456769d & 1) == 0) {
                    /* try { // try from 033f689c to 034f68a3 has its CatchHandler @ 033f68fc */
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_RemoveAt__);
                    /* try { // try from 033f68a4 to 034f68e7 has its CatchHandler @ 033f66f8 */
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_get_Item__);
    DAT_0456769d = 1;
    pIVar3 = extraout_x1;
  }
  pOVar4 = (__this->fields).MICFEIBNOLM;
  if (pOVar4 == (OJEHKJHEBID_o *)0x0) {
LAB_033f6944:
                    /* catch() { ... } // from try @ 033f68ec with catch @ 033f6954
                       try { // try from 033f6954 to 034f696f has its CatchHandler @ 033f66f8 */
                    /* catch() { ... } // from try @ 033f6830 with catch @ 033f6958 */
    EEOMEMBBGNA__CBPJBDDLNFI(__this,pIVar3,method);
    return;
  }
  pGVar2 = (pOVar4->fields).MABPCBMOECE;
  if (pGVar2 != (Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *)0x0) {
    iVar1 = (pGVar2->fields).count;
    if (iVar1 < 1) goto LAB_033f6944;
                    /* try { // try from 033f68e8 to 034f68eb has its CatchHandler @ 033f69ac */
    index = 0;
    do {
                    /* try { // try from 033f68ec to 034f68ef has its CatchHandler @ 033f6954 */
      method = Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_get_Item__;
                    /* try { // try from 033f68f0 to 034f68f3 has its CatchHandler @ 033f68f8 */
                    /* try { // try from 033f68f4 to 034f6913 has its CatchHandler @ 033f66f8 */
      pIVar3 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                         ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar2,index,
                          (MethodInfo_295F6AC *)
                          Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_get_Item__);
                    /* catch() { ... } // from try @ 033f68f0 with catch @ 033f68f8 */
      if (pIVar3 == (Il2CppObject *)0x0) break;
                    /* catch() { ... } // from try @ 033f689c with catch @ 033f68fc */
      if (pIVar3[1].monitor == (void *)PEJIFIIDFMM) {
        pGVar2 = (pOVar4->fields).MABPCBMOECE;
        if (pGVar2 != (Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *)0x0) {
          method = Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_RemoveAt__;
                    /* catch() { ... } // from try @ 033f6914 with catch @ 033f6938 */
          Google_Protobuf_Collections_RepeatedField<object>__RemoveAt
                    ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar2,index,
                     (MethodInfo_295F50C *)
                     Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_RemoveAt__);
                    /* try { // try from 033f6940 to 034f6953 has its CatchHandler @ 033f6a10 */
          EEOMEMBBGNA__LGLJPEHHFAO(__this,method_00);
          pIVar3 = extraout_x1_01;
          goto LAB_033f6944;
        }
        break;
      }
      pIVar3 = extraout_x1_00;
      if (iVar1 + -1 == index) goto LAB_033f6944;
      pGVar2 = (pOVar4->fields).MABPCBMOECE;
                    /* try { // try from 033f6914 to 034f6917 has its CatchHandler @ 033f6938 */
      index = index + 1;
                    /* try { // try from 033f6918 to 034f693f has its CatchHandler @ 033f66f8 */
    } while (pGVar2 != (Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void NOPFPBHINBN(Action<MGDJPGGPDJI> CJNHFNHJHPE)  [RVA 0x32F6E4C]
// EEOMEMBBGNA$$NOPFPBHINBN @ RVA 0x32F6E4C

void EEOMEMBBGNA__NOPFPBHINBN
               (EEOMEMBBGNA_o *__this,System_Action_MGDJPGGPDJI__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_MGDJPGGPDJI__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_MGDJPGGPDJI__o *pSVar5;
  System_Action_MGDJPGGPDJI__o **ppSVar6;
  System_Action_MGDJPGGPDJI__o *a;
  
  if ((DAT_0456769e & 1) == 0) {
    FUN_01bab630(&System_Action<MGDJPGGPDJI>_TypeInfo);
    DAT_0456769e = 1;
  }
  ppSVar6 = &(__this->fields).GDANBHGOGAB;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<MGDJPGGPDJI>_TypeInfo;
                    /* try { // try from 033f6ea0 to 034f6ecb has its CatchHandler @ 033f70e4 */
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<MGDJPGGPDJI>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_MGDJPGGPDJI__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void LIJCCCBFMEJ(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x32F6EFC]
// EEOMEMBBGNA$$LIJCCCBFMEJ @ RVA 0x32F6EFC

void EEOMEMBBGNA__LIJCCCBFMEJ(EEOMEMBBGNA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  Il2CppObject *pIVar4;
  EEGDOGKBLNG_o *pEVar5;
  void *PEJIFIIDFMM;
  MGDJPGGPDJI_o *pMVar6;
  MGDJPGGPDJI_o *pMVar7;
  HCKCBFOGMMJ_o *pHVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  Il2CppObject *pIVar11;
  long lVar12;
  VirtualInvokeData *pVVar13;
  AKOMJPINHEN_o *pAVar14;
  MGDJPGGPDJI_o *pMVar15;
  EEOMEMBBGNA_o *extraout_x0;
  EEOMEMBBGNA_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *pMVar16;
  Il2CppClass *pIVar17;
  System_Action_MGDJPGGPDJI__o *pSVar18;
  ulong uVar19;
  int32_t *piVar20;
  
                    /* try { // try from 033f6f08 to 034f6f0f has its CatchHandler @ 033f70dc */
                    /* try { // try from 033f6f14 to 034f6f1b has its CatchHandler @ 033f70e0 */
                    /* try { // try from 033f6f2c to 034f6f33 has its CatchHandler @ 033f70c8 */
  if ((DAT_0456769f & 1) == 0) {
                    /* try { // try from 033f6f3c to 034f6f43 has its CatchHandler @ 033f70cc */
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
                    /* try { // try from 033f6f44 to 034f6f4f has its CatchHandler @ 033f70d0 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 033f6f54 to 034f6f5b has its CatchHandler @ 033f70d4 */
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
                    /* try { // try from 033f6f60 to 034f6f6f has its CatchHandler @ 033f70c0 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<IMBPILFKGEO>__);
                    /* try { // try from 033f6f74 to 034f6f7b has its CatchHandler @ 033f70b4 */
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_17802/*"dlgNewRole"*/);
                    /* try { // try from 033f6f8c to 034f6fb7 has its CatchHandler @ 033f70b8 */
    FUN_01bab630(&StringLiteral_10814/*"RaidClansManager::onLeaderChangeEvent clan_member_leave_event"*/);
    DAT_0456769f = 1;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 033f6fb8 to 034f708f has its CatchHandler @ 033f6b50 */
  UnityEngine_Debug__Log(StringLiteral_10814/*"RaidClansManager::onLeaderChangeEvent clan_member_leave_event"*/,(MethodInfo *)0x0);
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    pIVar4 = KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<IMBPILFKGEO>__);
    if ((pIVar4 == (Il2CppObject *)0x0) || ((__this->fields).MICFEIBNOLM == (OJEHKJHEBID_o *)0x0)) {
                    /* try { // try from 033f718c to 034f7197 has its CatchHandler @ 033f6b50 */
                    /* try { // try from 033f7198 to 034f719f has its CatchHandler @ 033f71a0 */
      return;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pEVar5 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (pEVar5 != (EEGDOGKBLNG_o *)0x0) {
      PEJIFIIDFMM = (void *)EEGDOGKBLNG__APCMGOCHMGC(pEVar5,(MethodInfo *)0x0);
      pMVar6 = EEOMEMBBGNA__MPCGKMBAHHO(__this,(int64_t)pIVar4[1].monitor,method);
      if (pMVar6 != (MGDJPGGPDJI_o *)0x0) {
        (pMVar6->fields).BDPMJNBHKIJ = 1;
      }
      pMVar7 = EEOMEMBBGNA__MPCGKMBAHHO(__this,(int64_t)pIVar4[2].klass,method);
      if (pMVar7 != (MGDJPGGPDJI_o *)0x0) {
        (pMVar7->fields).BDPMJNBHKIJ = 2;
      }
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pHVar8 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
      if (pHVar8 != (HCKCBFOGMMJ_o *)0x0) {
        pSVar9 = HCKCBFOGMMJ__OKJEEFHMCCD(pHVar8,(int64_t)pIVar4[1].monitor,true,(MethodInfo *)0x0);
        pHVar8 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
        if (pHVar8 != (HCKCBFOGMMJ_o *)0x0) {
                    /* try { // try from 033f7090 to 034f7097 has its CatchHandler @ 033f70ec */
                    /* try { // try from 033f7098 to 034f709b has its CatchHandler @ 033f70d8 */
          pSVar10 = HCKCBFOGMMJ__OKJEEFHMCCD(pHVar8,(int64_t)pIVar4[2].klass,true,(MethodInfo *)0x0)
          ;
                    /* try { // try from 033f709c to 034f709f has its CatchHandler @ 033f70c4 */
                    /* try { // try from 033f70a0 to 034f70a3 has its CatchHandler @ 033f6b50 */
                    /* try { // try from 033f70a4 to 034f70a7 has its CatchHandler @ 033f70bc */
                    /* try { // try from 033f70a8 to 034f70af has its CatchHandler @ 033f6b50 */
                    /* try { // try from 033f70b0 to 034f70b3 has its CatchHandler @ 033f70b8 */
          pIVar11 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                              (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
                    /* catch() { ... } // from try @ 033f6f74 with catch @ 033f70b4
                       try { // try from 033f70b4 to 034f7103 has its CatchHandler @ 033f6b50 */
                    /* catch() { ... } // from try @ 033f6f8c with catch @ 033f70b8
                       catch() { ... } // from try @ 033f70b0 with catch @ 033f70b8 */
                    /* catch() { ... } // from try @ 033f70a4 with catch @ 033f70bc */
                    /* catch() { ... } // from try @ 033f6f60 with catch @ 033f70c0 */
                    /* catch() { ... } // from try @ 033f709c with catch @ 033f70c4 */
                    /* catch() { ... } // from try @ 033f6f2c with catch @ 033f70c8 */
                    /* catch() { ... } // from try @ 033f6f3c with catch @ 033f70cc */
          lVar12 = FUN_01bab718(string___TypeInfo,2);
                    /* catch() { ... } // from try @ 033f6f44 with catch @ 033f70d0 */
          if (lVar12 != 0) {
                    /* catch() { ... } // from try @ 033f6f54 with catch @ 033f70d4 */
                    /* catch() { ... } // from try @ 033f7098 with catch @ 033f70d8 */
                    /* catch() { ... } // from try @ 033f6f08 with catch @ 033f70dc */
            if (*(int *)(lVar12 + 0x18) != 0) {
                    /* catch() { ... } // from try @ 033f6f14 with catch @ 033f70e0 */
                    /* catch() { ... } // from try @ 033f6ea0 with catch @ 033f70e4 */
              *(undefined8 *)(lVar12 + 0x20) = pSVar9;
                    /* catch() { ... } // from try @ 033f6e44 with catch @ 033f70e8 */
                    /* catch() { ... } // from try @ 033f7090 with catch @ 033f70ec */
              thunk_FUN_01c20e04((undefined8 *)(lVar12 + 0x20),pSVar9);
              pSVar9 = IDGOGBNEGAM__ONLBMMFEPOI(1,(MethodInfo *)0x0);
                    /* try { // try from 033f7104 to 034f7107 has its CatchHandler @ 033f7114 */
              if (1 < *(uint *)(lVar12 + 0x18)) {
                    /* catch() { ... } // from try @ 033f7104 with catch @ 033f7114 */
                *(System_String_o **)(lVar12 + 0x28) = pSVar9;
                thunk_FUN_01c20e04();
                uVar3 = StringLiteral_17802/*"dlgNewRole"*/;
                    /* try { // try from 033f7124 to 034f718b has its CatchHandler @ 033f71a0 */
                if (pIVar11 != (Il2CppObject *)0x0) {
                  pIVar17 = pIVar11->klass;
                  uVar1._0_1_ = (pIVar17->_2).rank;
                  uVar1._1_1_ = (pIVar17->_2).minimumAlignment;
                  uVar19 = (ulong)uVar1;
                  if (uVar19 != 0) {
                    piVar20 = &((pIVar17->_1).interfaceOffsets)->offset;
                    do {
                      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar20 + -2))->interfaceType ==
                          (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                    /* catch() { ... } // from try @ 033f7124 with catch @ 033f71a0
                       catch() { ... } // from try @ 033f7198 with catch @ 033f71a0 */
                    /* try { // try from 033f71a4 to 034f7237 has its CatchHandler @ 033f71a4
                       catch() { ... } // from try @ 033f71a4 with catch @ 033f71a4
                       catch() { ... } // from try @ 033f725c with catch @ 033f71a4
                       catch() { ... } // from try @ 033f7290 with catch @ 033f71a4
                       catch() { ... } // from try @ 033f72b8 with catch @ 033f71a4
                       catch() { ... } // from try @ 033f72e8 with catch @ 033f71a4 */
                        pVVar13 = pIVar17->vtable + (*piVar20 + 0xc);
                        goto LAB_033f71ac;
                      }
                      uVar19 = uVar19 - 1;
                      piVar20 = piVar20 + 4;
                    } while (uVar19 != 0);
                  }
                  pVVar13 = (VirtualInvokeData *)FUN_01b81914(pIVar11,BLEFOFGCKEF_TypeInfo,0xc);
LAB_033f71ac:
                  pSVar9 = (System_String_o *)
                           (*pVVar13->methodPtr)(pIVar11,uVar3,lVar12,pVVar13->method);
                  pIVar11 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                                      (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
                  lVar12 = FUN_01bab718(string___TypeInfo,2);
                  if (lVar12 != 0) {
                    if (*(int *)(lVar12 + 0x18) != 0) {
                      *(undefined8 *)(lVar12 + 0x20) = pSVar10;
                      thunk_FUN_01c20e04((undefined8 *)(lVar12 + 0x20),pSVar10);
                      pSVar10 = IDGOGBNEGAM__ONLBMMFEPOI(2,(MethodInfo *)0x0);
                      if (1 < *(uint *)(lVar12 + 0x18)) {
                        *(System_String_o **)(lVar12 + 0x28) = pSVar10;
                        thunk_FUN_01c20e04();
                        uVar3 = StringLiteral_17802/*"dlgNewRole"*/;
                    /* try { // try from 033f7238 to 034f723f has its CatchHandler @ 033f729c */
                        if (pIVar11 != (Il2CppObject *)0x0) {
                          pIVar17 = pIVar11->klass;
                          uVar2._0_1_ = (pIVar17->_2).rank;
                          uVar2._1_1_ = (pIVar17->_2).minimumAlignment;
                          uVar19 = (ulong)uVar2;
                    /* try { // try from 033f7250 to 034f725b has its CatchHandler @ 033f7294 */
                          if (uVar19 != 0) {
                            piVar20 = &((pIVar17->_1).interfaceOffsets)->offset;
                            do {
                    /* try { // try from 033f725c to 034f728b has its CatchHandler @ 033f71a4 */
                              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar20 + -2))->
                                  interfaceType == (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                    /* try { // try from 033f728c to 034f728f has its CatchHandler @ 033f7298 */
                    /* try { // try from 033f7290 to 034f72b3 has its CatchHandler @ 033f71a4 */
                                pVVar13 = pIVar17->vtable + (*piVar20 + 0xc);
                                goto LAB_033f7294;
                              }
                              uVar19 = uVar19 - 1;
                              piVar20 = piVar20 + 4;
                            } while (uVar19 != 0);
                          }
                          pVVar13 = (VirtualInvokeData *)
                                    FUN_01b81914(pIVar11,BLEFOFGCKEF_TypeInfo,0xc);
LAB_033f7294:
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f7250 with catch @ 033f7294
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f728c with catch @ 033f7298
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f7238 with catch @ 033f729c
                        */
                          pSVar10 = (System_String_o *)
                                    (*pVVar13->methodPtr)(pIVar11,uVar3,lVar12,pVVar13->method);
                          pAVar14 = HJPEKDOPBHN__BMIEIJAJNAJ((MethodInfo *)0x0);
                    /* try { // try from 033f72b4 to 034f72b7 has its CatchHandler @ 033f72d8 */
                          if (pAVar14 != (AKOMJPINHEN_o *)0x0) {
                    /* try { // try from 033f72b8 to 034f72df has its CatchHandler @ 033f71a4 */
                            AKOMJPINHEN__GJAEDMLMJIK(pAVar14,pSVar10,3,false,(MethodInfo *)0x0);
                            pAVar14 = HJPEKDOPBHN__BMIEIJAJNAJ((MethodInfo *)0x0);
                            if (pAVar14 != (AKOMJPINHEN_o *)0x0) {
                    /* catch() { ... } // from try @ 033f72b4 with catch @ 033f72d8 */
                              pMVar16 = (MethodInfo *)0x3;
                    /* try { // try from 033f72e0 to 034f72e7 has its CatchHandler @ 033f72fc */
                    /* try { // try from 033f72e8 to 034f72f3 has its CatchHandler @ 033f71a4 */
                              AKOMJPINHEN__GJAEDMLMJIK(pAVar14,pSVar9,3,true,(MethodInfo *)0x0);
                    /* try { // try from 033f72f4 to 034f72fb has its CatchHandler @ 033f72fc */
                              pMVar15 = EEOMEMBBGNA__MPCGKMBAHHO
                                                  (__this,(int64_t)PEJIFIIDFMM,pMVar16);
                              __this_00 = (EEOMEMBBGNA_o *)0x0;
                              pMVar16 = extraout_x1;
                              if (pMVar15 != (MGDJPGGPDJI_o *)0x0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033f72e0 with catch @ 033f72fc
                       catch(type#2 @ 00000000) { ... } // from try @ 033f72f4 with catch @ 033f72fc
                        */
                                if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                                  thunk_FUN_01ba7564();
                                }
                                pEVar5 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                                if (pEVar5 == (EEGDOGKBLNG_o *)0x0) goto LAB_033f7398;
                                EEGDOGKBLNG__IJIJACHHPBO
                                          (pEVar5,(pMVar15->fields).BDPMJNBHKIJ,true,
                                           (MethodInfo *)0x0);
                                __this_00 = extraout_x0;
                                pMVar16 = extraout_x1_00;
                              }
                              if (pIVar4[1].monitor == PEJIFIIDFMM) {
                                EEOMEMBBGNA__GMKFPMKJEPO(__this_00,pMVar16);
                              }
                              pSVar18 = (__this->fields).FAEDLDIIDMG;
                              if (pSVar18 != (System_Action_MGDJPGGPDJI__o *)0x0) {
                                (*(code *)(pSVar18->fields).super.super.invoke_impl)
                                          ((pSVar18->fields).super.super.method_code,pMVar6,
                                           (pSVar18->fields).super.super.method);
                                pSVar18 = (__this->fields).FAEDLDIIDMG;
                                if (pSVar18 != (System_Action_MGDJPGGPDJI__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033f7394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                  (*(code *)(pSVar18->fields).super.super.invoke_impl)
                                            ((pSVar18->fields).super.super.method_code,pMVar7,
                                             (pSVar18->fields).super.super.method);
                                  return;
                                }
                              }
                            }
                          }
                        }
                        goto LAB_033f7398;
                      }
                    }
                    goto LAB_033f739c;
                  }
                }
                goto LAB_033f7398;
              }
            }
LAB_033f739c:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
        }
      }
    }
  }
LAB_033f7398:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void NELJDINAIOB(Action<KEFHDOHHHML> HNAFJMEJKEK)  [RVA 0x32F76E8]
// EEOMEMBBGNA$$NELJDINAIOB @ RVA 0x32F76E8

void EEOMEMBBGNA__NELJDINAIOB
               (EEOMEMBBGNA_o *__this,System_Action_KEFHDOHHHML__o *HNAFJMEJKEK,MethodInfo *method)

{
  Google_Protobuf_WellKnownTypes_Empty_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  
                    /* try { // try from 033f76ec to 034f76f3 has its CatchHandler @ 033f7804 */
                    /* try { // try from 033f7700 to 034f7707 has its CatchHandler @ 033f77a0 */
                    /* try { // try from 033f7708 to 034f773f has its CatchHandler @ 033f75f4 */
  if ((DAT_045676a0 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_EEOMEMBBGNA_LIINOLOJPAD__);
                    /* try { // try from 033f7740 to 034f7747 has its CatchHandler @ 033f77ac */
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Empty_TypeInfo);
    FUN_01bab630(&StringLiteral_17031/*"clan_leave"*/);
                    /* try { // try from 033f7754 to 034f775b has its CatchHandler @ 033f7798 */
    DAT_045676a0 = 1;
  }
                    /* try { // try from 033f775c to 034f7783 has its CatchHandler @ 033f75f4 */
  __this_00 = (Google_Protobuf_WellKnownTypes_Empty_o *)
              thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_Empty_TypeInfo);
  Google_Protobuf_WellKnownTypes_Empty___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                    /* try { // try from 033f7784 to 034f7787 has its CatchHandler @ 033f77a4 */
  BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
                    /* try { // try from 033f7788 to 034f778b has its CatchHandler @ 033f779c */
                    /* try { // try from 033f778c to 034f778f has its CatchHandler @ 033f7794 */
                    /* try { // try from 033f7790 to 034f77c3 has its CatchHandler @ 033f75f4 */
                    /* catch() { ... } // from try @ 033f778c with catch @ 033f7794 */
                    /* catch() { ... } // from try @ 033f7754 with catch @ 033f7798 */
  System_Action<object>___ctor();
                    /* catch() { ... } // from try @ 033f7788 with catch @ 033f779c */
  if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
                    /* catch() { ... } // from try @ 033f7700 with catch @ 033f77a0 */
                    /* catch() { ... } // from try @ 033f7784 with catch @ 033f77a4 */
                    /* catch() { ... } // from try @ 033f76ac with catch @ 033f77a8 */
                    /* catch() { ... } // from try @ 033f7740 with catch @ 033f77ac */
                    /* try { // try from 033f77c4 to 034f77c7 has its CatchHandler @ 033f77e8 */
                    /* try { // try from 033f77c8 to 034f77ef has its CatchHandler @ 033f75f4 */
    KDPDBGNOFEN__KLNMLOOCAAO
              ((KDPDBGNOFEN_o *)__this_01,StringLiteral_17031/*"clan_leave"*/,
               (Google_Protobuf_IMessage_o *)__this_00,BLMFLPJJMPF,0.0,(Il2CppObject *)HNAFJMEJKEK,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MONHMPCJOFE(long ANGBPBINHBL, string BKJJFPJOCGP)  [RVA 0x32F77DC]
// EEOMEMBBGNA$$MONHMPCJOFE @ RVA 0x32F77DC

void EEOMEMBBGNA__MONHMPCJOFE
               (EEOMEMBBGNA_o *__this,int64_t ANGBPBINHBL,System_String_o *BKJJFPJOCGP,
               MethodInfo *method)

{
  CGKOOBKMDJJ_o *__this_00;
  CFMDGLMCNIL_o *__this_01;
  
                    /* catch() { ... } // from try @ 033f77c4 with catch @ 033f77e8 */
                    /* try { // try from 033f77f0 to 034f7803 has its CatchHandler @ 033f78b8 */
                    /* catch() { ... } // from try @ 033f76ec with catch @ 033f7804
                       try { // try from 033f7804 to 034f781b has its CatchHandler @ 033f75f4 */
  if ((DAT_045676a1 & 1) == 0) {
    FUN_01bab630(&CGKOOBKMDJJ_TypeInfo);
                    /* try { // try from 033f781c to 034f781f has its CatchHandler @ 033f783c */
                    /* try { // try from 033f7820 to 034f7843 has its CatchHandler @ 033f75f4 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045676a1 = 1;
  }
  __this_00 = (CGKOOBKMDJJ_o *)thunk_FUN_01bda818(CGKOOBKMDJJ_TypeInfo);
                    /* catch() { ... } // from try @ 033f781c with catch @ 033f783c */
                    /* try { // try from 033f7844 to 034f7857 has its CatchHandler @ 033f78b8 */
  CGKOOBKMDJJ___ctor(__this_00,ANGBPBINHBL,BKJJFPJOCGP,(MethodInfo *)0x0);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 033f7698 with catch @ 033f7858
                       try { // try from 033f7858 to 034f786f has its CatchHandler @ 033f75f4 */
  __this_01 = HJPEKDOPBHN__POHONLHCOJN((MethodInfo *)0x0);
  if (__this_01 != (CFMDGLMCNIL_o *)0x0) {
                    /* try { // try from 033f7870 to 034f7873 has its CatchHandler @ 033f7894 */
                    /* try { // try from 033f7874 to 034f789b has its CatchHandler @ 033f75f4 */
    CFMDGLMCNIL__MPFFOIIBAKO(__this_01,(OHPOFOPJIMB_o *)__this_00,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OGBNPDLJNBG(EPCCNLNOALL ADHJMIOENHG)  [RVA 0x32F7884]
// EEOMEMBBGNA$$OGBNPDLJNBG @ RVA 0x32F7884

void EEOMEMBBGNA__OGBNPDLJNBG(EEOMEMBBGNA_o *__this,EPCCNLNOALL_o *ADHJMIOENHG,MethodInfo *method)

{
  EEGDOGKBLNG_o *pEVar1;
  int64_t PEJIFIIDFMM;
  MGDJPGGPDJI_o *pMVar2;
  MethodInfo *method_00;
  OJEHKJHEBID_o *PBNPKBJKFHE;
  KAMBBJFPLGM_o *LLJHKLPGMGC;
  
                    /* catch() { ... } // from try @ 033f7870 with catch @ 033f7894 */
                    /* try { // try from 033f789c to 034f78a3 has its CatchHandler @ 033f78b8 */
  if ((DAT_045676a2 & 1) == 0) {
                    /* try { // try from 033f78a4 to 034f78af has its CatchHandler @ 033f75f4 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 033f78b0 to 034f78b7 has its CatchHandler @ 033f78b8 */
    DAT_045676a2 = 1;
  }
                    /* catch() { ... } // from try @ 033f77f0 with catch @ 033f78b8
                       catch() { ... } // from try @ 033f7844 with catch @ 033f78b8
                       catch() { ... } // from try @ 033f789c with catch @ 033f78b8
                       catch() { ... } // from try @ 033f78b0 with catch @ 033f78b8 */
  if (ADHJMIOENHG == (EPCCNLNOALL_o *)0x0) {
    return;
  }
  PBNPKBJKFHE = (ADHJMIOENHG->fields).KOGEBALMCBB;
  EEOMEMBBGNA__DCFBDLHNGJP(__this,PBNPKBJKFHE,method);
  LLJHKLPGMGC = (ADHJMIOENHG->fields).OPHCNELIOLD;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pEVar1 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (pEVar1 != (EEGDOGKBLNG_o *)0x0) {
    EEGDOGKBLNG__JOMFHMDCMNG(pEVar1,LLJHKLPGMGC,(MethodInfo *)0x0);
    pEVar1 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if ((PBNPKBJKFHE != (OJEHKJHEBID_o *)0x0) && (pEVar1 != (EEGDOGKBLNG_o *)0x0)) {
      method_00 = (MethodInfo *)0x1;
      EEGDOGKBLNG__JMMFCMIIDHL(pEVar1,(PBNPKBJKFHE->fields).GJNOEAKNMOG,true,(MethodInfo *)0x0);
      pEVar1 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (pEVar1 != (EEGDOGKBLNG_o *)0x0) {
        PEJIFIIDFMM = EEGDOGKBLNG__APCMGOCHMGC(pEVar1,(MethodInfo *)0x0);
        pMVar2 = EEOMEMBBGNA__MPCGKMBAHHO(__this,PEJIFIIDFMM,method_00);
        if (pMVar2 == (MGDJPGGPDJI_o *)0x0) {
          return;
        }
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pEVar1 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        if (pEVar1 != (EEGDOGKBLNG_o *)0x0) {
          EEGDOGKBLNG__IJIJACHHPBO(pEVar1,(pMVar2->fields).BDPMJNBHKIJ,true,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public MGDJPGGPDJI MPCGKMBAHHO(long PEJIFIIDFMM)  [RVA 0x32F73A0]
// EEOMEMBBGNA$$MPCGKMBAHHO @ RVA 0x32F73A0

/* WARNING: Removing unreachable block (ram,0x033f759c) */

MGDJPGGPDJI_o *
EEOMEMBBGNA__MPCGKMBAHHO(EEOMEMBBGNA_o *__this,int64_t PEJIFIIDFMM,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *__this_00;
  System_Collections_Generic_IEnumerator_T__o *pSVar4;
  VirtualInvokeData *pVVar5;
  MGDJPGGPDJI_o *pMVar6;
  OJEHKJHEBID_o *pOVar7;
  System_Collections_Generic_IEnumerator_T__c *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  
  if ((DAT_045676a3 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<MGDJPGGPDJI>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_GetEnumerator__);
    DAT_045676a3 = 1;
  }
  pOVar7 = (__this->fields).MICFEIBNOLM;
  if (pOVar7 == (OJEHKJHEBID_o *)0x0) {
    pMVar6 = (MGDJPGGPDJI_o *)0x0;
  }
  else {
    __this_00 = (pOVar7->fields).MABPCBMOECE;
    if (__this_00 == (Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar4 = Google_Protobuf_Collections_RepeatedField<object>__GetEnumerator
                       ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                        Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_GetEnumerator__
                       );
    if (pSVar4 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      pSVar8 = pSVar4->klass;
      uVar1._0_1_ = (pSVar8->_2).rank;
      uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar1;
      if (uVar9 != 0) {
        piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar5 = pSVar8->vtable + *piVar10;
            goto LAB_033f747c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_033f747c:
      uVar9 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
      if ((uVar9 & 1) == 0) {
        pMVar6 = (MGDJPGGPDJI_o *)0x0;
        break;
      }
      pSVar8 = pSVar4->klass;
      uVar2._0_1_ = (pSVar8->_2).rank;
      uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar2;
                    /* try { // try from 033f7498 to 034f753b has its CatchHandler @ 033f7498
                       catch() { ... } // from try @ 033f7498 with catch @ 033f7498
                       catch() { ... } // from try @ 033f7564 with catch @ 033f7498
                       catch() { ... } // from try @ 033f75ac with catch @ 033f7498
                       catch() { ... } // from try @ 033f75dc with catch @ 033f7498 */
      if (uVar9 != 0) {
        piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IEnumerator<MGDJPGGPDJI>_TypeInfo) {
            pVVar5 = pSVar8->vtable + *piVar10;
            goto LAB_033f74d8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar5 = (VirtualInvokeData *)
               FUN_01b81914(pSVar4,System_Collections_Generic_IEnumerator<MGDJPGGPDJI>_TypeInfo,0);
LAB_033f74d8:
      pMVar6 = (MGDJPGGPDJI_o *)(*pVVar5->methodPtr)(pSVar4,pVVar5->method);
      if (pMVar6 == (MGDJPGGPDJI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f7558 with catch @ 033f7590
                        */
        FUN_01bab8c8();
      }
    } while ((pMVar6->fields).ANAJGHJEEOC != PEJIFIIDFMM);
    if (pSVar4 != (System_Collections_Generic_IEnumerator_T__o *)0x0) {
      pSVar8 = pSVar4->klass;
      uVar3._0_1_ = (pSVar8->_2).rank;
      uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar3;
      if (uVar9 != 0) {
        piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
                    /* try { // try from 033f753c to 034f7543 has its CatchHandler @ 033f758c */
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)System_IDisposable_TypeInfo) {
                    /* try { // try from 033f7564 to 034f75a7 has its CatchHandler @ 033f7498 */
            pVVar5 = pSVar8->vtable + *piVar10;
            goto LAB_033f756c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
                    /* try { // try from 033f7558 to 034f7563 has its CatchHandler @ 033f7590 */
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_IDisposable_TypeInfo,0);
LAB_033f756c:
      (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    }
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f753c with catch @ 033f758c
                        */
  return pMVar6;
}


// ===== public void GPLEIOLCBOF(Action CJNHFNHJHPE)  [RVA 0x32F7A78]
// EEOMEMBBGNA$$GPLEIOLCBOF @ RVA 0x32F7A78

void EEOMEMBBGNA__GPLEIOLCBOF(EEOMEMBBGNA_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_045676a4 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_045676a4 = 1;
  }
  ppSVar4 = &(__this->fields).GHOPCFLDCPK;
  source = *ppSVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== private void CONJKPKBICI(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x32F7B14]
// EEOMEMBBGNA$$CONJKPKBICI @ RVA 0x32F7B14

void EEOMEMBBGNA__CONJKPKBICI(EEOMEMBBGNA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  EPCCNLNOALL_o *ADHJMIOENHG;
  long lVar2;
  CPNHNIKFGFB_o *__this_00;
  System_Action_o *pSVar3;
  
  if ((DAT_045676a5 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 033f7b48 to 034f7b4f has its CatchHandler @ 033f7ba4 */
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<EPCCNLNOALL>__);
    FUN_01bab630(&StringLiteral_17025/*"clan_free_join failed"*/);
                    /* try { // try from 033f7b60 to 034f7b6b has its CatchHandler @ 033f7ba0 */
    DAT_045676a5 = 1;
  }
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
                    /* try { // try from 033f7bec to 034f7bf3 has its CatchHandler @ 033f7c08 */
                    /* try { // try from 033f7bf4 to 034f7bff has its CatchHandler @ 033f7a64 */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033f7c00 to 034f7c07 has its CatchHandler @ 033f7c08 */
      thunk_FUN_01ba7564();
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033f7bec with catch @ 033f7c08
                       catch(type#2 @ 00000000) { ... } // from try @ 033f7c00 with catch @ 033f7c08
                        */
                    /* try { // try from 033f7c0c to 034f7df7 has its CatchHandler @ 033f7c0c
                       catch() { ... } // from try @ 033f7c0c with catch @ 033f7c0c
                       catch() { ... } // from try @ 033f7f40 with catch @ 033f7c0c
                       catch() { ... } // from try @ 033f7fe8 with catch @ 033f7c0c
                       catch() { ... } // from try @ 033f8048 with catch @ 033f7c0c
                       catch() { ... } // from try @ 033f8088 with catch @ 033f7c0c */
    UnityEngine_Debug__LogError(StringLiteral_17025/*"clan_free_join failed"*/,(MethodInfo *)0x0);
    return;
  }
                    /* try { // try from 033f7b6c to 034f7b8f has its CatchHandler @ 033f7a64 */
  bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
  if (bVar1) {
    ADHJMIOENHG = (EPCCNLNOALL_o *)
                  KEFHDOHHHML__PFNEPJAFEDF<object>
                            (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<EPCCNLNOALL>__);
                    /* try { // try from 033f7b90 to 034f7b97 has its CatchHandler @ 033f7b9c */
                    /* try { // try from 033f7b98 to 034f7bbf has its CatchHandler @ 033f7a64 */
    EEOMEMBBGNA__OGBNPDLJNBG(__this,ADHJMIOENHG,method);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f7b90 with catch @ 033f7b9c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f7b60 with catch @ 033f7ba0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f7b48 with catch @ 033f7ba4
                        */
    lVar2 = thunk_FUN_01bda71c((IDCGLBOIAFJ->fields)._GOFDPKCMIJO_k__BackingField,
                               System_Action<KEFHDOHHHML>_TypeInfo);
    if (lVar2 != 0) {
                    /* try { // try from 033f7bc0 to 034f7bc3 has its CatchHandler @ 033f7be4 */
                    /* try { // try from 033f7bc4 to 034f7beb has its CatchHandler @ 033f7a64 */
      (**(code **)(lVar2 + 0x18))
                (*(undefined8 *)(lVar2 + 0x40),IDCGLBOIAFJ,*(undefined8 *)(lVar2 + 0x28));
    }
    pSVar3 = (__this->fields).GHOPCFLDCPK;
    if (pSVar3 != (System_Action_o *)0x0) {
                    /* catch() { ... } // from try @ 033f7bc0 with catch @ 033f7be4 */
                    /* WARNING: Could not recover jumptable at 0x033f7be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar3->fields).super.super.invoke_impl)
                ((pSVar3->fields).super.super.method_code,(pSVar3->fields).super.super.method);
      return;
    }
  }
  else {
    __this_00 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (CPNHNIKFGFB_o *)0x0) {
      CPNHNIKFGFB__DIGPCFKCCBK
                (__this_00,(IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x32F7C44]
// EEOMEMBBGNA$$.ctor @ RVA 0x32F7C44

void EEOMEMBBGNA___ctor(EEOMEMBBGNA_o *__this,MethodInfo *method)

{
  System_Action_OJEHKJHEBID__o **ppSVar1;
  System_Action_o **ppSVar2;
  System_Action_MGDJPGGPDJI__o **ppSVar3;
  System_Action_long__o **ppSVar4;
  CJFBGEEIPBA_o *__this_00;
  CJFBGEEIPBA_o **ppCVar5;
  KKLJIDJBFEI_o *pKVar6;
  System_Action_KEFHDOHHHML__o *pSVar7;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_OJEHKJHEBID__o *pSVar8;
  System_Action_o *pSVar9;
  System_Action_MGDJPGGPDJI__o *pSVar10;
  System_Action_long__o *pSVar11;
  DCHAJIMIFHP_o *pDVar12;
  
  if ((DAT_045676a6 & 1) == 0) {
    FUN_01bab630(&System_Action<MGDJPGGPDJI>_TypeInfo);
    FUN_01bab630(&System_Action<OJEHKJHEBID>_TypeInfo);
    FUN_01bab630(&System_Action<long>_TypeInfo);
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&CJFBGEEIPBA_TypeInfo);
    FUN_01bab630(&Method_EEOMEMBBGNA_AGHPILNDDIJ__);
    FUN_01bab630(&Method_EEOMEMBBGNA_EHCGDODIIGF__);
    FUN_01bab630(&Method_EEOMEMBBGNA_EPFNDIJOAKH__);
    FUN_01bab630(&Method_EEOMEMBBGNA_JIBNOKGNLEN__);
    FUN_01bab630(&Method_EEOMEMBBGNA_LIJCCCBFMEJ__);
    FUN_01bab630(&Method_EEOMEMBBGNA_LLPKEDJDCNK__);
    FUN_01bab630(&Method_EEOMEMBBGNA_LPHIKAHDOHG__);
    FUN_01bab630(&Method_EEOMEMBBGNA_OIHOMNDJOMI__);
    FUN_01bab630(&Method_EEOMEMBBGNA_<>c_CGCDEHDNMPM__);
    FUN_01bab630(&Method_EEOMEMBBGNA_<>c_DAFOLJJELAN__);
    FUN_01bab630(&Method_EEOMEMBBGNA_<>c_EACNDPGHDCB__);
    FUN_01bab630(&Method_EEOMEMBBGNA_<>c_FCJOOHADEHA__);
    FUN_01bab630(&Method_EEOMEMBBGNA_<>c_JFILMEMNEPO__);
    FUN_01bab630(&Method_EEOMEMBBGNA_<>c_LGHLKHHBNAL__);
    FUN_01bab630(&Method_EEOMEMBBGNA_<>c_MCPOAPOBAHA__);
    FUN_01bab630(&EEOMEMBBGNA_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_17057/*"clan_update_profile_event"*/);
    FUN_01bab630(&StringLiteral_17036/*"clan_member_rating_event"*/);
    FUN_01bab630(&StringLiteral_17034/*"clan_member_kick_event"*/);
    FUN_01bab630(&StringLiteral_17017/*"clan_change_role_event"*/);
    FUN_01bab630(&StringLiteral_17014/*"clan_change_leader_event"*/);
    FUN_01bab630(&StringLiteral_17033/*"clan_member_join_event"*/);
    FUN_01bab630(&StringLiteral_17035/*"clan_member_leave_event"*/);
    DAT_045676a6 = 1;
    method = extraout_x1;
  }
  if ((EEOMEMBBGNA_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EEOMEMBBGNA_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar8 = EEOMEMBBGNA_<>c_TypeInfo->static_fields->__9__25_0;
  if (pSVar8 == (System_Action_OJEHKJHEBID__o *)0x0) {
    if ((EEOMEMBBGNA_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033f7df8 to 034f7dff has its CatchHandler @ 033f802c */
      thunk_FUN_01ba7564(EEOMEMBBGNA_<>c_TypeInfo,method);
    }
                    /* try { // try from 033f7e14 to 034f7e17 has its CatchHandler @ 033f800c */
    pSVar8 = (System_Action_OJEHKJHEBID__o *)thunk_FUN_01bda818(System_Action<OJEHKJHEBID>_TypeInfo)
    ;
                    /* try { // try from 033f7e20 to 034f7e3b has its CatchHandler @ 033f801c */
    System_Action<object>___ctor();
    ppSVar1 = &EEOMEMBBGNA_<>c_TypeInfo->static_fields->__9__25_0;
    *ppSVar1 = pSVar8;
    thunk_FUN_01c20e04(ppSVar1,pSVar8);
  }
  if (__this != (EEOMEMBBGNA_o *)0x0) {
    (__this->fields).JNCKDHJJBPM = pSVar8;
                    /* try { // try from 033f7e54 to 034f7e5b has its CatchHandler @ 033f8020 */
    thunk_FUN_01c20e04(&__this->fields,pSVar8);
                    /* try { // try from 033f7e64 to 034f7e6f has its CatchHandler @ 033f8018 */
    if ((EEOMEMBBGNA_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 033f7e74 to 034f7e7b has its CatchHandler @ 033f8014 */
    pSVar9 = EEOMEMBBGNA_<>c_TypeInfo->static_fields->__9__25_1;
    if (pSVar9 == (System_Action_o *)0x0) {
      if ((EEOMEMBBGNA_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033f7e8c to 034f7e8f has its CatchHandler @ 033f7fec */
        thunk_FUN_01ba7564();
                    /* try { // try from 033f7e90 to 034f7e97 has its CatchHandler @ 033f7ff8 */
      }
      pSVar9 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      ppSVar2 = &EEOMEMBBGNA_<>c_TypeInfo->static_fields->__9__25_1;
      *ppSVar2 = pSVar9;
                    /* try { // try from 033f7ed0 to 034f7efb has its CatchHandler @ 033f8010 */
      thunk_FUN_01c20e04(ppSVar2,pSVar9);
    }
    ppSVar2 = &(__this->fields).GHOPCFLDCPK;
    *ppSVar2 = pSVar9;
    thunk_FUN_01c20e04(ppSVar2,pSVar9);
    if ((EEOMEMBBGNA_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar9 = EEOMEMBBGNA_<>c_TypeInfo->static_fields->__9__25_2;
    if (pSVar9 == (System_Action_o *)0x0) {
                    /* try { // try from 033f7f04 to 034f7f0b has its CatchHandler @ 033f7ffc */
      if ((EEOMEMBBGNA_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
                    /* try { // try from 033f7f10 to 034f7f23 has its CatchHandler @ 033f8004 */
      }
      pSVar9 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 033f7f34 to 034f7f3f has its CatchHandler @ 033f7ff0 */
      System_Action___ctor();
                    /* try { // try from 033f7f40 to 034f7fd3 has its CatchHandler @ 033f7c0c */
      ppSVar2 = &EEOMEMBBGNA_<>c_TypeInfo->static_fields->__9__25_2;
      *ppSVar2 = pSVar9;
      thunk_FUN_01c20e04(ppSVar2,pSVar9);
    }
    ppSVar2 = &(__this->fields).HGPMBNOIMIM;
    *ppSVar2 = pSVar9;
    thunk_FUN_01c20e04(ppSVar2,pSVar9);
    if ((EEOMEMBBGNA_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar10 = EEOMEMBBGNA_<>c_TypeInfo->static_fields->__9__25_3;
    if (pSVar10 == (System_Action_MGDJPGGPDJI__o *)0x0) {
      if ((EEOMEMBBGNA_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar10 = (System_Action_MGDJPGGPDJI__o *)
                thunk_FUN_01bda818(System_Action<MGDJPGGPDJI>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar3 = &EEOMEMBBGNA_<>c_TypeInfo->static_fields->__9__25_3;
                    /* try { // try from 033f7fd4 to 034f7fd7 has its CatchHandler @ 033f8028 */
      *ppSVar3 = pSVar10;
                    /* try { // try from 033f7fd8 to 034f7fdb has its CatchHandler @ 033f8024 */
      thunk_FUN_01c20e04(ppSVar3,pSVar10);
    }
                    /* try { // try from 033f7fdc to 034f7fdf has its CatchHandler @ 033f8008 */
    ppSVar3 = &(__this->fields).GDANBHGOGAB;
                    /* try { // try from 033f7fe0 to 034f7fe3 has its CatchHandler @ 033f8000 */
    *ppSVar3 = pSVar10;
                    /* try { // try from 033f7fe4 to 034f7fe7 has its CatchHandler @ 033f7ff4 */
                    /* try { // try from 033f7fe8 to 034f8043 has its CatchHandler @ 033f7c0c */
    thunk_FUN_01c20e04(ppSVar3,pSVar10);
                    /* catch() { ... } // from try @ 033f7e8c with catch @ 033f7fec */
                    /* catch() { ... } // from try @ 033f7f34 with catch @ 033f7ff0 */
                    /* catch() { ... } // from try @ 033f7fe4 with catch @ 033f7ff4 */
    if ((EEOMEMBBGNA_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 033f7e90 with catch @ 033f7ff8 */
      thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 033f7f04 with catch @ 033f7ffc */
    }
                    /* catch() { ... } // from try @ 033f7fe0 with catch @ 033f8000 */
                    /* catch() { ... } // from try @ 033f7f10 with catch @ 033f8004 */
    pSVar11 = EEOMEMBBGNA_<>c_TypeInfo->static_fields->__9__25_4;
                    /* catch() { ... } // from try @ 033f7fdc with catch @ 033f8008 */
    if (pSVar11 == (System_Action_long__o *)0x0) {
                    /* catch() { ... } // from try @ 033f7e14 with catch @ 033f800c */
                    /* catch() { ... } // from try @ 033f7ed0 with catch @ 033f8010 */
      if ((EEOMEMBBGNA_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 033f7e74 with catch @ 033f8014 */
        thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 033f7e64 with catch @ 033f8018 */
      }
                    /* catch() { ... } // from try @ 033f7e20 with catch @ 033f801c */
                    /* catch() { ... } // from try @ 033f7e54 with catch @ 033f8020 */
                    /* catch() { ... } // from try @ 033f7fd8 with catch @ 033f8024 */
                    /* catch() { ... } // from try @ 033f7fd4 with catch @ 033f8028 */
                    /* catch() { ... } // from try @ 033f7df8 with catch @ 033f802c */
      pSVar11 = (System_Action_long__o *)thunk_FUN_01bda818(System_Action<long>_TypeInfo);
                    /* try { // try from 033f8044 to 034f8047 has its CatchHandler @ 033f8070 */
                    /* try { // try from 033f8048 to 034f807f has its CatchHandler @ 033f7c0c */
      System_Action<long>___ctor();
      ppSVar4 = &EEOMEMBBGNA_<>c_TypeInfo->static_fields->__9__25_4;
      *ppSVar4 = pSVar11;
      thunk_FUN_01c20e04(ppSVar4,pSVar11);
    }
    ppSVar4 = &(__this->fields).HAHLDGJHODG;
    *ppSVar4 = pSVar11;
                    /* catch() { ... } // from try @ 033f8044 with catch @ 033f8070 */
    thunk_FUN_01c20e04(ppSVar4,pSVar11);
    if ((EEOMEMBBGNA_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033f8080 to 034f8087 has its CatchHandler @ 033f809c */
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 033f8088 to 034f8093 has its CatchHandler @ 033f7c0c */
    pSVar11 = EEOMEMBBGNA_<>c_TypeInfo->static_fields->__9__25_5;
    if (pSVar11 == (System_Action_long__o *)0x0) {
                    /* try { // try from 033f8094 to 034f809b has its CatchHandler @ 033f809c */
      if ((EEOMEMBBGNA_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 033f8080 with catch @ 033f809c
                       catch() { ... } // from try @ 033f8094 with catch @ 033f809c */
        thunk_FUN_01ba7564();
      }
      pSVar11 = (System_Action_long__o *)thunk_FUN_01bda818(System_Action<long>_TypeInfo);
      System_Action<long>___ctor();
      ppSVar4 = &EEOMEMBBGNA_<>c_TypeInfo->static_fields->__9__25_5;
      *ppSVar4 = pSVar11;
      thunk_FUN_01c20e04(ppSVar4,pSVar11);
    }
    ppSVar4 = &(__this->fields).KBBECJNEHBM;
    *ppSVar4 = pSVar11;
                    /* try { // try from 033f80f8 to 034f81bf has its CatchHandler @ 033f80f8
                       catch() { ... } // from try @ 033f80f8 with catch @ 033f80f8
                       catch() { ... } // from try @ 033f81e8 with catch @ 033f80f8
                       catch() { ... } // from try @ 033f8270 with catch @ 033f80f8
                       catch() { ... } // from try @ 033f829c with catch @ 033f80f8
                       catch() { ... } // from try @ 033f82dc with catch @ 033f80f8 */
    thunk_FUN_01c20e04(ppSVar4,pSVar11);
    if ((EEOMEMBBGNA_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar10 = EEOMEMBBGNA_<>c_TypeInfo->static_fields->__9__25_6;
    if (pSVar10 == (System_Action_MGDJPGGPDJI__o *)0x0) {
      if ((EEOMEMBBGNA_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar10 = (System_Action_MGDJPGGPDJI__o *)
                thunk_FUN_01bda818(System_Action<MGDJPGGPDJI>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar3 = &EEOMEMBBGNA_<>c_TypeInfo->static_fields->__9__25_6;
      *ppSVar3 = pSVar10;
      thunk_FUN_01c20e04(ppSVar3,pSVar10);
    }
    ppSVar3 = &(__this->fields).FAEDLDIIDMG;
    *ppSVar3 = pSVar10;
    thunk_FUN_01c20e04(ppSVar3,pSVar10);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields).MGMAHFNADPA = false;
    (__this->fields).NGOFLMHNOGM = -1;
    __this_00 = (CJFBGEEIPBA_o *)thunk_FUN_01bda818(CJFBGEEIPBA_TypeInfo);
    CJFBGEEIPBA___ctor(__this_00,(MethodInfo *)0x0);
    ppCVar5 = &(__this->fields).GMNJEBCECDA;
    *ppCVar5 = __this_00;
                    /* try { // try from 033f81c0 to 034f81c7 has its CatchHandler @ 033f8280 */
    thunk_FUN_01c20e04(ppCVar5,__this_00);
    pKVar6 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (pKVar6 != (KKLJIDJBFEI_o *)0x0) {
                    /* try { // try from 033f81dc to 034f81e7 has its CatchHandler @ 033f8274 */
      pDVar12 = (pKVar6->fields).super.FNHOHLGNHGN;
                    /* try { // try from 033f81e8 to 034f8267 has its CatchHandler @ 033f80f8 */
      pSVar7 = (System_Action_KEFHDOHHHML__o *)
               thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
      System_Action<object>___ctor();
      if (pDVar12 != (DCHAJIMIFHP_o *)0x0) {
        DCHAJIMIFHP__MPFFOIIBAKO(pDVar12,StringLiteral_17033/*"clan_member_join_event"*/,pSVar7,(MethodInfo *)0x0);
        pKVar6 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
        if (pKVar6 != (KKLJIDJBFEI_o *)0x0) {
          pDVar12 = (pKVar6->fields).super.FNHOHLGNHGN;
          pSVar7 = (System_Action_KEFHDOHHHML__o *)
                   thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
          System_Action<object>___ctor();
          if (pDVar12 != (DCHAJIMIFHP_o *)0x0) {
                    /* try { // try from 033f8268 to 034f826b has its CatchHandler @ 033f827c */
                    /* try { // try from 033f826c to 034f826f has its CatchHandler @ 033f8278 */
                    /* try { // try from 033f8270 to 034f8297 has its CatchHandler @ 033f80f8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f81dc with catch @ 033f8274
                        */
            DCHAJIMIFHP__MPFFOIIBAKO(pDVar12,StringLiteral_17035/*"clan_member_leave_event"*/,pSVar7,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f826c with catch @ 033f8278
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f8268 with catch @ 033f827c
                        */
            pKVar6 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f81c0 with catch @ 033f8280
                        */
            if (pKVar6 != (KKLJIDJBFEI_o *)0x0) {
              pDVar12 = (pKVar6->fields).super.FNHOHLGNHGN;
              pSVar7 = (System_Action_KEFHDOHHHML__o *)
                       thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
                    /* try { // try from 033f8298 to 034f829b has its CatchHandler @ 033f82c4 */
                    /* try { // try from 033f829c to 034f82d3 has its CatchHandler @ 033f80f8 */
              System_Action<object>___ctor();
              if (pDVar12 != (DCHAJIMIFHP_o *)0x0) {
                    /* catch() { ... } // from try @ 033f8298 with catch @ 033f82c4 */
                DCHAJIMIFHP__MPFFOIIBAKO(pDVar12,StringLiteral_17034/*"clan_member_kick_event"*/,pSVar7,(MethodInfo *)0x0);
                pKVar6 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                    /* try { // try from 033f82d4 to 034f82db has its CatchHandler @ 033f82f0 */
                if (pKVar6 != (KKLJIDJBFEI_o *)0x0) {
                  pDVar12 = (pKVar6->fields).super.FNHOHLGNHGN;
                    /* try { // try from 033f82dc to 034f82e7 has its CatchHandler @ 033f80f8 */
                    /* try { // try from 033f82e8 to 034f82ef has its CatchHandler @ 033f82f0 */
                  pSVar7 = (System_Action_KEFHDOHHHML__o *)
                           thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033f82d4 with catch @ 033f82f0
                       catch(type#2 @ 00000000) { ... } // from try @ 033f82e8 with catch @ 033f82f0
                        */
                  System_Action<object>___ctor();
                  if (pDVar12 != (DCHAJIMIFHP_o *)0x0) {
                    DCHAJIMIFHP__MPFFOIIBAKO(pDVar12,StringLiteral_17036/*"clan_member_rating_event"*/,pSVar7,(MethodInfo *)0x0);
                    pKVar6 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                    if (pKVar6 != (KKLJIDJBFEI_o *)0x0) {
                      pDVar12 = (pKVar6->fields).super.FNHOHLGNHGN;
                      pSVar7 = (System_Action_KEFHDOHHHML__o *)
                               thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
                      System_Action<object>___ctor();
                      if (pDVar12 != (DCHAJIMIFHP_o *)0x0) {
                        DCHAJIMIFHP__MPFFOIIBAKO
                                  (pDVar12,StringLiteral_17057/*"clan_update_profile_event"*/,pSVar7,(MethodInfo *)0x0);
                        pKVar6 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                        if (pKVar6 != (KKLJIDJBFEI_o *)0x0) {
                          pDVar12 = (pKVar6->fields).super.FNHOHLGNHGN;
                          pSVar7 = (System_Action_KEFHDOHHHML__o *)
                                   thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
                          System_Action<object>___ctor();
                          if (pDVar12 != (DCHAJIMIFHP_o *)0x0) {
                            DCHAJIMIFHP__MPFFOIIBAKO
                                      (pDVar12,StringLiteral_17017/*"clan_change_role_event"*/,pSVar7,(MethodInfo *)0x0);
                            pKVar6 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                            if (pKVar6 != (KKLJIDJBFEI_o *)0x0) {
                              pDVar12 = (pKVar6->fields).super.FNHOHLGNHGN;
                              pSVar7 = (System_Action_KEFHDOHHHML__o *)
                                       thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
                              System_Action<object>___ctor();
                              if (pDVar12 != (DCHAJIMIFHP_o *)0x0) {
                    /* try { // try from 033f8408 to 034f849b has its CatchHandler @ 033f8408
                       catch() { ... } // from try @ 033f8408 with catch @ 033f8408
                       catch() { ... } // from try @ 033f84c0 with catch @ 033f8408
                       catch() { ... } // from try @ 033f84f4 with catch @ 033f8408
                       catch() { ... } // from try @ 033f851c with catch @ 033f8408
                       catch() { ... } // from try @ 033f854c with catch @ 033f8408 */
                                DCHAJIMIFHP__MPFFOIIBAKO
                                          (pDVar12,StringLiteral_17014/*"clan_change_leader_event"*/,pSVar7,(MethodInfo *)0x0);
                                pKVar6 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                                pSVar9 = (System_Action_o *)
                                         thunk_FUN_01bda818(System_Action_TypeInfo);
                                System_Action___ctor();
                                if (pKVar6 != (KKLJIDJBFEI_o *)0x0) {
                                  KKLJIDJBFEI__HKAALOKPBPG(pKVar6,pSVar9,(MethodInfo *)0x0);
                                  return;
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
}


// ===== private void CGELDPIHHOP(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x32F8478]
// EEOMEMBBGNA$$CGELDPIHHOP @ RVA 0x32F8478

void EEOMEMBBGNA__CGELDPIHHOP(EEOMEMBBGNA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  CPNHNIKFGFB_o *__this_00;
  
  if ((DAT_045676a7 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
                    /* try { // try from 033f849c to 034f84a3 has its CatchHandler @ 033f8500 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_17030/*"clan_kick failed"*/);
                    /* try { // try from 033f84b4 to 034f84bf has its CatchHandler @ 033f84f8 */
    DAT_045676a7 = 1;
  }
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
                    /* try { // try from 033f8518 to 034f851b has its CatchHandler @ 033f853c */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033f851c to 034f8543 has its CatchHandler @ 033f8408 */
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_17030/*"clan_kick failed"*/,(MethodInfo *)0x0);
    return;
  }
                    /* try { // try from 033f84c0 to 034f84ef has its CatchHandler @ 033f8408 */
  bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
  if (!bVar1) {
                    /* catch() { ... } // from try @ 033f8518 with catch @ 033f853c */
    __this_00 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 033f8544 to 034f854b has its CatchHandler @ 033f8560 */
    if (__this_00 != (CPNHNIKFGFB_o *)0x0) {
                    /* try { // try from 033f854c to 034f8557 has its CatchHandler @ 033f8408 */
                    /* try { // try from 033f8558 to 034f855f has its CatchHandler @ 033f8560 */
      CPNHNIKFGFB__DIGPCFKCCBK
                (__this_00,(IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  lVar2 = thunk_FUN_01bda71c((IDCGLBOIAFJ->fields)._GOFDPKCMIJO_k__BackingField,
                             System_Action<KEFHDOHHHML>_TypeInfo);
  if (lVar2 != 0) {
                    /* try { // try from 033f84f0 to 034f84f3 has its CatchHandler @ 033f84fc */
                    /* try { // try from 033f84f4 to 034f8517 has its CatchHandler @ 033f8408 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f84b4 with catch @ 033f84f8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f84f0 with catch @ 033f84fc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f849c with catch @ 033f8500
                        */
                    /* WARNING: Could not recover jumptable at 0x033f8504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))
              (*(undefined8 *)(lVar2 + 0x40),IDCGLBOIAFJ,*(undefined8 *)(lVar2 + 0x28));
    return;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033f8544 with catch @ 033f8560
                       catch(type#2 @ 00000000) { ... } // from try @ 033f8558 with catch @ 033f8560
                        */
  return;
}


// ===== private void MECHLOOCDCI(bool LHDIIECKMPH = False)  [RVA 0x32F856C]
// EEOMEMBBGNA$$MECHLOOCDCI @ RVA 0x32F856C

void EEOMEMBBGNA__MECHLOOCDCI(EEOMEMBBGNA_o *__this,bool LHDIIECKMPH,MethodInfo *method)

{
  EEGDOGKBLNG_o *pEVar1;
  int64_t iVar2;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  System_Action_long__o *pSVar3;
  System_Action_o *pSVar4;
  
  method_00 = (MethodInfo *)(ulong)LHDIIECKMPH;
  if ((DAT_045676a8 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045676a8 = 1;
    method_00 = extraout_x1;
  }
  EEOMEMBBGNA__DLINOLNBJOL(__this,method_00);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pEVar1 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (pEVar1 != (EEGDOGKBLNG_o *)0x0) {
    EEGDOGKBLNG__AGCALOAKJEK(pEVar1,(MethodInfo *)0x0);
    pEVar1 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (pEVar1 != (EEGDOGKBLNG_o *)0x0) {
      EEGDOGKBLNG__FACPGEOBOAJ(pEVar1,(MethodInfo *)0x0);
      pEVar1 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (pEVar1 != (EEGDOGKBLNG_o *)0x0) {
        iVar2 = EEGDOGKBLNG__APCMGOCHMGC(pEVar1,(MethodInfo *)0x0);
        if (LHDIIECKMPH) {
          pSVar3 = (__this->fields).KBBECJNEHBM;
        }
        else {
          pSVar3 = (__this->fields).HAHLDGJHODG;
        }
        if (pSVar3 != (System_Action_long__o *)0x0) {
          (*(code *)(pSVar3->fields).super.super.invoke_impl)
                    ((pSVar3->fields).super.super.method_code,iVar2,
                     (pSVar3->fields).super.super.method);
          pSVar4 = (__this->fields).HGPMBNOIMIM;
          if (pSVar4 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033f8648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(pSVar4->fields).super.super.invoke_impl)
                      ((pSVar4->fields).super.super.method_code,(pSVar4->fields).super.super.method)
            ;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ILINPANMKLF(long KNPEFJLKLAL)  [RVA 0x32F86A0]
// EEOMEMBBGNA$$ILINPANMKLF @ RVA 0x32F86A0

void EEOMEMBBGNA__ILINPANMKLF(EEOMEMBBGNA_o *__this,int64_t KNPEFJLKLAL,MethodInfo *method)

{
  System_Action_KEFHDOHHHML__o *HFHIAKJDOGK;
  MethodInfo *method_00;
  
                    /* try { // try from 033f86c8 to 034f882f has its CatchHandler @ 033f86c8
                       catch() { ... } // from try @ 033f86c8 with catch @ 033f86c8
                       catch() { ... } // from try @ 033f8b4c with catch @ 033f86c8
                       catch() { ... } // from try @ 033f8b84 with catch @ 033f86c8
                       catch() { ... } // from try @ 033f8cd0 with catch @ 033f86c8
                       catch() { ... } // from try @ 033f8d28 with catch @ 033f86c8
                       catch() { ... } // from try @ 033f8e24 with catch @ 033f86c8 */
  if ((DAT_045676a9 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_EEOMEMBBGNA_EBHDCCFEEEG__);
    DAT_045676a9 = 1;
  }
  HFHIAKJDOGK = (System_Action_KEFHDOHHHML__o *)
                thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
  method_00 = (MethodInfo *)0x0;
  System_Action<object>___ctor();
  EEOMEMBBGNA__BGDACMBMPJP(__this,KNPEFJLKLAL,HFHIAKJDOGK,method_00);
  return;
}


// ===== private void LGLJPEHHFAO()  [RVA 0x32F6960]
// EEOMEMBBGNA$$LGLJPEHHFAO @ RVA 0x32F6960

void EEOMEMBBGNA__LGLJPEHHFAO(EEOMEMBBGNA_o *__this,MethodInfo *method)

{
  System_Func_MGDJPGGPDJI__int__o **ppSVar1;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  System_Collections_Generic_List_TSource__o *__this_00;
  Il2CppObject *pIVar2;
  KCJMBDCBIIF_o *__this_01;
  CBPENMDOJDB_o *pCVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  Il2CppObject *extraout_x1_01;
  Il2CppObject *extraout_x1_02;
  MethodInfo *method_00;
  OJEHKJHEBID_o *pOVar4;
  Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *source_00;
  int index;
  System_Func_MGDJPGGPDJI__int__o *keySelector;
  int iVar5;
  float fVar6;
  int iVar7;
  
                    /* try { // try from 033f6970 to 034f6973 has its CatchHandler @ 033f6990 */
                    /* try { // try from 033f6974 to 034f6997 has its CatchHandler @ 033f66f8 */
  if ((DAT_045676aa & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_OrderBy<MGDJPGGPDJI,_int>__);
                    /* catch() { ... } // from try @ 033f6970 with catch @ 033f6990 */
                    /* try { // try from 033f6998 to 034f69ab has its CatchHandler @ 033f6a10 */
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<MGDJPGGPDJI>__);
    FUN_01bab630(&System_Func<MGDJPGGPDJI,_int>_TypeInfo);
                    /* catch() { ... } // from try @ 033f68e8 with catch @ 033f69ac
                       try { // try from 033f69ac to 034f69c7 has its CatchHandler @ 033f66f8 */
                    /* catch() { ... } // from try @ 033f67c4 with catch @ 033f69b0 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGDJPGGPDJI>_get_Count__);
                    /* try { // try from 033f69c8 to 034f69cb has its CatchHandler @ 033f69ec */
    FUN_01bab630(&Method_System_Collections_Generic_List<MGDJPGGPDJI>_get_Item__);
                    /* try { // try from 033f69cc to 034f69f3 has its CatchHandler @ 033f66f8 */
    FUN_01bab630(&Method_EEOMEMBBGNA_<>c_PNADOAKANHE__);
    FUN_01bab630(&EEOMEMBBGNA_<>c_TypeInfo);
    DAT_045676aa = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 033f69c8 with catch @ 033f69ec */
  pOVar4 = (__this->fields).MICFEIBNOLM;
  if (pOVar4 == (OJEHKJHEBID_o *)0x0) {
    return;
  }
                    /* try { // try from 033f69f4 to 034f69fb has its CatchHandler @ 033f6a10 */
                    /* try { // try from 033f69fc to 034f6a07 has its CatchHandler @ 033f66f8 */
  source_00 = (pOVar4->fields).MABPCBMOECE;
                    /* try { // try from 033f6a08 to 034f6a0f has its CatchHandler @ 033f6a10 */
  if ((EEOMEMBBGNA_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EEOMEMBBGNA_<>c_TypeInfo,method);
                    /* catch() { ... } // from try @ 033f6940 with catch @ 033f6a10
                       catch() { ... } // from try @ 033f6998 with catch @ 033f6a10
                       catch() { ... } // from try @ 033f69f4 with catch @ 033f6a10
                       catch() { ... } // from try @ 033f6a08 with catch @ 033f6a10 */
    method = extraout_x1_00;
  }
  keySelector = EEOMEMBBGNA_<>c_TypeInfo->static_fields->__9__79_0;
  if (keySelector == (System_Func_MGDJPGGPDJI__int__o *)0x0) {
    if ((EEOMEMBBGNA_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EEOMEMBBGNA_<>c_TypeInfo,method);
    }
    keySelector = (System_Func_MGDJPGGPDJI__int__o *)
                  thunk_FUN_01bda818(System_Func<MGDJPGGPDJI,_int>_TypeInfo);
    System_Func<object,_int>___ctor();
    ppSVar1 = &EEOMEMBBGNA_<>c_TypeInfo->static_fields->__9__79_0;
    *ppSVar1 = keySelector;
    thunk_FUN_01c20e04(ppSVar1,keySelector);
  }
  method_00 = Method_System_Linq_Enumerable_OrderBy<MGDJPGGPDJI,_int>__;
  source = System_Linq_Enumerable__OrderBy<object,_int>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                      (System_Func_TSource__TKey__o *)keySelector,
                      (MethodInfo_1EA43B8 *)
                      Method_System_Linq_Enumerable_OrderBy<MGDJPGGPDJI,_int>__);
  __this_00 = System_Linq_Enumerable__ToList<object>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         Method_System_Linq_Enumerable_ToList<MGDJPGGPDJI>__);
  if (__this_00 != (System_Collections_Generic_List_TSource__o *)0x0) {
    if ((__this_00->fields)._size < 1) {
      iVar5 = 0;
      pIVar2 = extraout_x1_01;
    }
    else {
      index = 0;
      iVar5 = 0;
      do {
        method_00 = Method_System_Collections_Generic_List<MGDJPGGPDJI>_get_Item__;
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,index,
                            (MethodInfo_26E4ADC *)
                            Method_System_Collections_Generic_List<MGDJPGGPDJI>_get_Item__);
        if (pIVar2 == (Il2CppObject *)0x0) goto LAB_033f6b88;
        iVar7 = *(int *)((long)&pIVar2[2].monitor + 4);
        index = index + 1;
        fVar6 = KFCFGKEHPNK__IJLDCOOMEBN(index,(MethodInfo *)0x0);
        fVar6 = fVar6 * (float)iVar7;
        iVar7 = -0x80000000;
        if (fVar6 != INFINITY) {
          iVar7 = (int)fVar6;
        }
        iVar5 = iVar7 + iVar5;
        pIVar2 = extraout_x1_02;
      } while (index < (__this_00->fields)._size);
    }
    pOVar4 = (__this->fields).MICFEIBNOLM;
    if (pOVar4 != (OJEHKJHEBID_o *)0x0) {
      (pOVar4->fields).IBFEHEDKGAL = iVar5;
      EEOMEMBBGNA__CBPJBDDLNFI(__this,pIVar2,method_00);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 033f6b50 to 034f6e43 has its CatchHandler @ 033f6b50
                       catch() { ... } // from try @ 033f6b50 with catch @ 033f6b50
                       catch() { ... } // from try @ 033f6fb8 with catch @ 033f6b50
                       catch() { ... } // from try @ 033f70a0 with catch @ 033f6b50
                       catch() { ... } // from try @ 033f70a8 with catch @ 033f6b50
                       catch() { ... } // from try @ 033f70b4 with catch @ 033f6b50
                       catch() { ... } // from try @ 033f718c with catch @ 033f6b50 */
      __this_01 = HJPEKDOPBHN__ODLPHDBFGPL((MethodInfo *)0x0);
      if (__this_01 != (KCJMBDCBIIF_o *)0x0) {
        pCVar3 = KCJMBDCBIIF__ILBKEICPFNC(__this_01,(__this->fields).NGOFLMHNOGM,(MethodInfo *)0x0);
        if (pCVar3 == (CBPENMDOJDB_o *)0x0) {
          return;
        }
        (pCVar3->fields).NLLKMEMKBAF = iVar5;
        return;
      }
    }
  }
LAB_033f6b88:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IMJOCHPGEBL(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x32F8828]
// EEOMEMBBGNA$$IMJOCHPGEBL @ RVA 0x32F8828

void EEOMEMBBGNA__IMJOCHPGEBL(EEOMEMBBGNA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  CPNHNIKFGFB_o *__this_00;
  
                    /* try { // try from 033f8830 to 034f8857 has its CatchHandler @ 033f8d70 */
  if ((DAT_045676ab & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_17023/*"clan_find failed"*/);
    DAT_045676ab = 1;
  }
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_17023/*"clan_find failed"*/,(MethodInfo *)0x0);
    return;
  }
  bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
  if (!bVar1) {
                    /* try { // try from 033f88f0 to 034f88fb has its CatchHandler @ 033f8d54 */
    __this_00 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (CPNHNIKFGFB_o *)0x0) {
                    /* try { // try from 033f88fc to 034f8907 has its CatchHandler @ 033f8d50 */
      CPNHNIKFGFB__DIGPCFKCCBK
                (__this_00,(IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 033f888c to 034f88b7 has its CatchHandler @ 033f8d6c */
  lVar2 = thunk_FUN_01bda71c((IDCGLBOIAFJ->fields)._GOFDPKCMIJO_k__BackingField,
                             System_Action<KEFHDOHHHML>_TypeInfo);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x033f88b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))
              (*(undefined8 *)(lVar2 + 0x40),IDCGLBOIAFJ,*(undefined8 *)(lVar2 + 0x28));
    return;
  }
  return;
}


// ===== private void CBPJBDDLNFI(object IMMNELPBGIF)  [RVA 0x32F6B8C]
// EEOMEMBBGNA$$CBPJBDDLNFI @ RVA 0x32F6B8C

void EEOMEMBBGNA__CBPJBDDLNFI(EEOMEMBBGNA_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int EFJNKONCKNF;
  int HAOHGBBPBII;
  bool_conflict bVar1;
  bool IOLOMIIIOPM;
  int32_t iVar2;
  EEGDOGKBLNG_o *pEVar3;
  int64_t iVar4;
  EEOMEMBBGNA_o *pEVar5;
  MGDJPGGPDJI_o *pMVar6;
  CJFBGEEIPBA_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *pMVar7;
  System_Action_OJEHKJHEBID__o *pSVar8;
  
  if ((DAT_045676ac & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_17850/*"dlgWarning"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_17814/*"dlgPlayerLeftLobby"*/);
    DAT_045676ac = 1;
  }
  pSVar8 = (__this->fields).JNCKDHJJBPM;
  if (pSVar8 != (System_Action_OJEHKJHEBID__o *)0x0) {
    pMVar7 = (MethodInfo *)(pSVar8->fields).super.super.method;
    (*(code *)(pSVar8->fields).super.super.invoke_impl)
              ((pSVar8->fields).super.super.method_code,(__this->fields).MICFEIBNOLM);
    if ((__this->fields).MGMAHFNADPA == false) {
      return;
    }
    (__this->fields).MGMAHFNADPA = false;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (pEVar3 != (EEGDOGKBLNG_o *)0x0) {
      iVar4 = EEGDOGKBLNG__PALANAIJAFE(pEVar3,(MethodInfo *)0x0);
      if (iVar4 == 0) {
        return;
      }
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (pEVar3 != (EEGDOGKBLNG_o *)0x0) {
        iVar4 = EEGDOGKBLNG__APCMGOCHMGC(pEVar3,(MethodInfo *)0x0);
        pEVar5 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
        if (pEVar5 != (EEOMEMBBGNA_o *)0x0) {
          pMVar6 = EEOMEMBBGNA__MPCGKMBAHHO(pEVar5,iVar4,pMVar7);
          if (pMVar6 == (MGDJPGGPDJI_o *)0x0) {
            return;
          }
          EFJNKONCKNF = (pMVar6->fields).BDPMJNBHKIJ;
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
          }
          pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
          if (pEVar3 != (EEGDOGKBLNG_o *)0x0) {
            HAOHGBBPBII = (pEVar3->fields).LPMFKCDDEIA;
            pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
            if (pEVar3 != (EEGDOGKBLNG_o *)0x0) {
              iVar2 = EEGDOGKBLNG__NJNJAECEPCP(pEVar3,(MethodInfo *)0x0);
              pEVar5 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
              if ((pEVar5 != (EEOMEMBBGNA_o *)0x0) &&
                 (__this_00 = (pEVar5->fields).GMNJEBCECDA, __this_00 != (CJFBGEEIPBA_o *)0x0)) {
                IOLOMIIIOPM = CJFBGEEIPBA__EDBDHGCEMEA(__this_00,(MethodInfo *)0x0);
                pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                if (pEVar3 != (EEGDOGKBLNG_o *)0x0) {
                  bVar1 = (pEVar3->fields).PPKDOBDMEEK;
                  if (EFJNKONCKNF != HAOHGBBPBII) {
                    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                    if (pEVar3 == (EEGDOGKBLNG_o *)0x0) goto LAB_033f6e48;
                    pMVar7 = (MethodInfo *)0x0;
                    EEGDOGKBLNG__IJIJACHHPBO(pEVar3,EFJNKONCKNF,true,(MethodInfo *)0x0);
                    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    pEVar5 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
                    if (pEVar5 == (EEOMEMBBGNA_o *)0x0) goto LAB_033f6e48;
                    if (EFJNKONCKNF == 1) {
                      EEOMEMBBGNA__GMKFPMKJEPO(pEVar5,method_00);
                    }
                    else {
                      EEOMEMBBGNA__ICNCJDCHLJE(pEVar5,EFJNKONCKNF,HAOHGBBPBII,pMVar7);
                    }
                  }
                  if ((iVar2 != 3) && (!IOLOMIIIOPM && bVar1 != false)) {
                    JJPNLEPEAFM__JNDPLPKDPCP
                              (StringLiteral_17850/*"dlgWarning"*/,StringLiteral_17814/*"dlgPlayerLeftLobby"*/,StringLiteral_9679/*"OK"*/,
                               StringLiteral_1/*""*/,(System_Action_object__o *)0x0,1,0,false,false,
                               StringLiteral_1/*""*/,true,true,true,true,(MethodInfo *)0x0);
                  }
                  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                  if (pEVar3 != (EEGDOGKBLNG_o *)0x0) {
                    /* try { // try from 033f6e44 to 034f6e6b has its CatchHandler @ 033f70e8 */
                    EEGDOGKBLNG__LIAFPDDOGIH(pEVar3,IOLOMIIIOPM,true,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_033f6e48:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ELPDKEKBAMO(long FKIGDGJPIAC, Action<KEFHDOHHHML> GBLADNMICPP)  [RVA 0x32F89C4]
// EEOMEMBBGNA$$ELPDKEKBAMO @ RVA 0x32F89C4

void EEOMEMBBGNA__ELPDKEKBAMO
               (EEOMEMBBGNA_o *__this,int64_t FKIGDGJPIAC,System_Action_KEFHDOHHHML__o *GBLADNMICPP,
               MethodInfo *method)

{
  Google_Protobuf_WellKnownTypes_Int64Value_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  
                    /* try { // try from 033f89e4 to 034f8a0f has its CatchHandler @ 033f8b6c */
  if ((DAT_045676ad & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_EEOMEMBBGNA_CHAMCKJPFDF__);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Int64Value_TypeInfo);
    FUN_01bab630(&StringLiteral_17012/*"clan_change_leader"*/);
    DAT_045676ad = 1;
  }
  __this_00 = (Google_Protobuf_WellKnownTypes_Int64Value_o *)
              thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_Int64Value_TypeInfo);
  Google_Protobuf_WellKnownTypes_Int64Value___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Google_Protobuf_WellKnownTypes_Int64Value_o *)0x0) {
                    /* try { // try from 033f8a48 to 034f8a53 has its CatchHandler @ 033f8b5c */
    (__this_00->fields).value_ = FKIGDGJPIAC;
    __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                    /* try { // try from 033f8a60 to 034f8a67 has its CatchHandler @ 033f8b60 */
                    /* try { // try from 033f8a6c to 034f8a77 has its CatchHandler @ 033f8b64 */
    BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                  thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
                    /* try { // try from 033f8aa0 to 034f8b0f has its CatchHandler @ 033f8d4c */
      KDPDBGNOFEN__KLNMLOOCAAO
                ((KDPDBGNOFEN_o *)__this_01,StringLiteral_17012/*"clan_change_leader"*/,
                 (Google_Protobuf_IMessage_o *)__this_00,BLMFLPJJMPF,0.0,(Il2CppObject *)GBLADNMICPP
                 ,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void NFLCHIPCOMI(string KGLJICLJHEL, bool DDDGCNEHBCO, Action<KEFHDOHHHML> LPAJOAAAFGH)  [RVA 0x32F8AC4]
// EEOMEMBBGNA$$NFLCHIPCOMI @ RVA 0x32F8AC4

void EEOMEMBBGNA__NFLCHIPCOMI
               (EEOMEMBBGNA_o *__this,System_String_o *KGLJICLJHEL,bool DDDGCNEHBCO,
               System_Action_KEFHDOHHHML__o *LPAJOAAAFGH,MethodInfo *method)

{
  FAACNCKMEJM_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  
  if ((DAT_045676ae & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_EEOMEMBBGNA_IMJOCHPGEBL__);
    FUN_01bab630(&FAACNCKMEJM_TypeInfo);
    FUN_01bab630(&StringLiteral_17022/*"clan_find"*/);
                    /* try { // try from 033f8b2c to 034f8b33 has its CatchHandler @ 033f8b68 */
    DAT_045676ae = 1;
  }
  __this_00 = (FAACNCKMEJM_o *)thunk_FUN_01bda818(FAACNCKMEJM_TypeInfo);
                    /* try { // try from 033f8b38 to 034f8b3b has its CatchHandler @ 033f8b58 */
                    /* try { // try from 033f8b40 to 034f8b43 has its CatchHandler @ 033f8b54 */
  FAACNCKMEJM___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (FAACNCKMEJM_o *)0x0) {
                    /* try { // try from 033f8b48 to 034f8b4b has its CatchHandler @ 033f8b50 */
                    /* try { // try from 033f8b4c to 034f8b7f has its CatchHandler @ 033f86c8 */
                    /* catch() { ... } // from try @ 033f8b48 with catch @ 033f8b50 */
                    /* catch() { ... } // from try @ 033f8b40 with catch @ 033f8b54 */
                    /* catch() { ... } // from try @ 033f8b38 with catch @ 033f8b58 */
                    /* catch() { ... } // from try @ 033f8a48 with catch @ 033f8b5c */
                    /* catch() { ... } // from try @ 033f8a60 with catch @ 033f8b60 */
                    /* catch() { ... } // from try @ 033f8a6c with catch @ 033f8b64 */
    FAACNCKMEJM__HCOCAAIGNNL(__this_00,KGLJICLJHEL,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033f8b2c with catch @ 033f8b68 */
                    /* catch() { ... } // from try @ 033f89e4 with catch @ 033f8b6c */
                    /* catch() { ... } // from try @ 033f8988 with catch @ 033f8b70 */
    (__this_00->fields).FAJBKFIAOPL = DDDGCNEHBCO;
    __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                    /* try { // try from 033f8b80 to 034f8b83 has its CatchHandler @ 033f8d28 */
                    /* try { // try from 033f8b84 to 034f8c57 has its CatchHandler @ 033f86c8 */
    BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                  thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
      KDPDBGNOFEN__KLNMLOOCAAO
                ((KDPDBGNOFEN_o *)__this_01,StringLiteral_17022/*"clan_find"*/,
                 (Google_Protobuf_IMessage_o *)__this_00,BLMFLPJJMPF,0.0,(Il2CppObject *)LPAJOAAAFGH
                 ,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EHCGDODIIGF()  [RVA 0x32F8BDC]
// EEOMEMBBGNA$$EHCGDODIIGF @ RVA 0x32F8BDC

void EEOMEMBBGNA__EHCGDODIIGF(EEOMEMBBGNA_o *__this,MethodInfo *method)

{
  OJEHKJHEBID_o **ppOVar1;
  System_Action_OJEHKJHEBID__o *pSVar2;
  
  ppOVar1 = &(__this->fields).MICFEIBNOLM;
  (__this->fields).NGOFLMHNOGM = -1;
  if (*ppOVar1 == (OJEHKJHEBID_o *)0x0) {
    return;
  }
  (__this->fields).MICFEIBNOLM = (OJEHKJHEBID_o *)0x0;
  thunk_FUN_01c20e04(ppOVar1,0);
  pSVar2 = (__this->fields).JNCKDHJJBPM;
  if (pSVar2 != (System_Action_OJEHKJHEBID__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033f8690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,0,(pSVar2->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HNGLOPNCACI(Action<LFELBGMCDHD> CPECAEHDDDB)  [RVA 0x32F8BE0]
// EEOMEMBBGNA$$HNGLOPNCACI @ RVA 0x32F8BE0

/* WARNING: Removing unreachable block (ram,0x033f8e0c) */
/* WARNING: Removing unreachable block (ram,0x033f8e7c) */

void EEOMEMBBGNA__HNGLOPNCACI
               (EEOMEMBBGNA_o *__this,System_Action_LFELBGMCDHD__o *CPECAEHDDDB,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  IBMLPPNMDCI_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *__this_01;
  System_Collections_Generic_IEnumerator_T__o *pSVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  HCKCBFOGMMJ_o *__this_02;
  OJEHKJHEBID_o *pOVar7;
  System_Collections_Generic_IEnumerator_T__c *pSVar8;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_03;
  ulong uVar9;
  int32_t *piVar10;
  
  if ((DAT_045676af & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&IBMLPPNMDCI_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<MGDJPGGPDJI>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
                    /* try { // try from 033f8c58 to 034f8c5f has its CatchHandler @ 033f8d68 */
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_GetEnumerator__);
                    /* try { // try from 033f8c60 to 034f8c63 has its CatchHandler @ 033f8d58 */
    DAT_045676af = 1;
  }
  __this_00 = (IBMLPPNMDCI_o *)thunk_FUN_01bda818(IBMLPPNMDCI_TypeInfo);
  IBMLPPNMDCI___ctor(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 033f8c7c to 034f8ccf has its CatchHandler @ 033f8e38 */
  pOVar7 = (__this->fields).MICFEIBNOLM;
  if (pOVar7 == (OJEHKJHEBID_o *)0x0) {
    return;
  }
  __this_01 = (pOVar7->fields).MABPCBMOECE;
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *)0x0) {
    pSVar4 = Google_Protobuf_Collections_RepeatedField<object>__GetEnumerator
                       ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                        Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_GetEnumerator__
                       );
    if (pSVar4 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      pSVar8 = pSVar4->klass;
      uVar1._0_1_ = (pSVar8->_2).rank;
      uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar1;
      if (uVar9 != 0) {
                    /* try { // try from 033f8cd0 to 034f8cdf has its CatchHandler @ 033f86c8 */
        piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 033f8d00 to 034f8d27 has its CatchHandler @ 033f8e38 */
            pVVar5 = pSVar8->vtable + *piVar10;
            goto LAB_033f8d08;
          }
                    /* try { // try from 033f8ce0 to 034f8ce3 has its CatchHandler @ 033f8d44 */
          uVar9 = uVar9 - 1;
                    /* try { // try from 033f8ce4 to 034f8ceb has its CatchHandler @ 033f8d40 */
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
                    /* try { // try from 033f8cec to 034f8cef has its CatchHandler @ 033f8d3c */
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_033f8d08:
      uVar9 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
      if ((uVar9 & 1) == 0) {
        if (pSVar4 == (System_Collections_Generic_IEnumerator_T__o *)0x0) goto LAB_033f8e00;
                    /* catch() { ... } // from try @ 033f8d8c with catch @ 033f8da4 */
        pSVar8 = pSVar4->klass;
        uVar3._0_1_ = (pSVar8->_2).rank;
        uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
        uVar9 = (ulong)uVar3;
                    /* try { // try from 033f8db4 to 034f8e23 has its CatchHandler @ 033f8e38 */
        if (uVar9 == 0) goto LAB_033f8dd8;
        piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
        goto LAB_033f8dc0;
      }
      pSVar8 = pSVar4->klass;
      uVar2._0_1_ = (pSVar8->_2).rank;
      uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar2;
      if (uVar9 != 0) {
                    /* catch() { ... } // from try @ 033f8b80 with catch @ 033f8d28
                       try { // try from 033f8d28 to 034f8d8b has its CatchHandler @ 033f86c8 */
        piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
                    /* catch() { ... } // from try @ 033f893c with catch @ 033f8d34 */
                    /* catch() { ... } // from try @ 033f894c with catch @ 033f8d38 */
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IEnumerator<MGDJPGGPDJI>_TypeInfo) {
                    /* catch() { ... } // from try @ 033f8c60 with catch @ 033f8d58 */
            pVVar5 = pSVar8->vtable + *piVar10;
            goto LAB_033f8d64;
          }
                    /* catch() { ... } // from try @ 033f8cec with catch @ 033f8d3c */
          uVar9 = uVar9 - 1;
                    /* catch() { ... } // from try @ 033f8ce4 with catch @ 033f8d40 */
          piVar10 = piVar10 + 4;
                    /* catch() { ... } // from try @ 033f8ce0 with catch @ 033f8d44 */
        } while (uVar9 != 0);
      }
                    /* catch() { ... } // from try @ 033f8924 with catch @ 033f8d48 */
                    /* catch() { ... } // from try @ 033f8aa0 with catch @ 033f8d4c */
                    /* catch() { ... } // from try @ 033f88fc with catch @ 033f8d50 */
      pVVar5 = (VirtualInvokeData *)
               FUN_01b81914(pSVar4,System_Collections_Generic_IEnumerator<MGDJPGGPDJI>_TypeInfo,0);
                    /* catch() { ... } // from try @ 033f88f0 with catch @ 033f8d54 */
LAB_033f8d64:
                    /* catch() { ... } // from try @ 033f8c58 with catch @ 033f8d68 */
                    /* catch() { ... } // from try @ 033f888c with catch @ 033f8d6c */
      lVar6 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
                    /* catch() { ... } // from try @ 033f8830 with catch @ 033f8d70 */
      if (__this_00 == (IBMLPPNMDCI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_03 = (__this_00->fields).EHBNKDHKJNI;
      if (__this_03 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 033f8d8c to 034f8d8f has its CatchHandler @ 033f8da4 */
      Google_Protobuf_Collections_RepeatedField<long>__Add
                (__this_03,*(int64_t *)(lVar6 + 0x18),
                 Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
    } while( true );
  }
  goto LAB_033f8e74;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_033f8dc0:
    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
        (Il2CppClass *)System_IDisposable_TypeInfo) {
      pVVar5 = pSVar8->vtable + *piVar10;
      goto LAB_033f8df4;
    }
  }
LAB_033f8dd8:
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_IDisposable_TypeInfo,0);
LAB_033f8df4:
  (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
LAB_033f8e00:
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033f8e24 to 034f8e2f has its CatchHandler @ 033f86c8 */
    thunk_FUN_01ba7564();
  }
  __this_02 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
                    /* try { // try from 033f8e30 to 034f8e37 has its CatchHandler @ 033f8e38 */
  if (__this_02 != (HCKCBFOGMMJ_o *)0x0) {
                    /* catch() { ... } // from try @ 033f8c7c with catch @ 033f8e38
                       catch() { ... } // from try @ 033f8d00 with catch @ 033f8e38
                       catch() { ... } // from try @ 033f8db4 with catch @ 033f8e38
                       catch() { ... } // from try @ 033f8e30 with catch @ 033f8e38 */
                    /* try { // try from 033f8e3c to 034f9027 has its CatchHandler @ 033f8e3c
                       catch() { ... } // from try @ 033f8e3c with catch @ 033f8e3c
                       catch() { ... } // from try @ 033f9148 with catch @ 033f8e3c
                       catch() { ... } // from try @ 033f9280 with catch @ 033f8e3c
                       catch() { ... } // from try @ 033f92e0 with catch @ 033f8e3c
                       catch() { ... } // from try @ 033f9448 with catch @ 033f8e3c */
    HCKCBFOGMMJ__EFCMPBGIEGJ(__this_02,__this_00,CPECAEHDDDB,(MethodInfo *)0x0);
    return;
  }
LAB_033f8e74:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LPHIKAHDOHG(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x32F8F48]
// EEOMEMBBGNA$$LPHIKAHDOHG @ RVA 0x32F8F48

void EEOMEMBBGNA__LPHIKAHDOHG(EEOMEMBBGNA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  MGDJPGGPDJI_o *pMVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *NONPLOOOOAG;
  AKOMJPINHEN_o *__this_00;
  MethodInfo *method_00;
  Il2CppClass *pIVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_Action_MGDJPGGPDJI__o *pSVar10;
  
  if ((DAT_045676b0 & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<MGDJPGGPDJI>__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_17799/*"dlgMemberJoined"*/);
    FUN_01bab630(&StringLiteral_10815/*"RaidClansManager::onMemberJoinEvent clan_member_join_event"*/);
    DAT_045676b0 = 1;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__Log(StringLiteral_10815/*"RaidClansManager::onMemberJoinEvent clan_member_join_event"*/,(MethodInfo *)0x0);
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    pMVar3 = (MGDJPGGPDJI_o *)
             KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<MGDJPGGPDJI>__);
    if ((pMVar3 == (MGDJPGGPDJI_o *)0x0) || ((__this->fields).MICFEIBNOLM == (OJEHKJHEBID_o *)0x0))
    {
                    /* try { // try from 033f90d4 to 034f90db has its CatchHandler @ 033f9290 */
                    /* try { // try from 033f90e0 to 034f90eb has its CatchHandler @ 033f928c */
      return;
    }
                    /* try { // try from 033f9028 to 034f902f has its CatchHandler @ 033f92c4 */
    EEOMEMBBGNA__LIPJMNBEHGN(__this,pMVar3,method);
    pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
                    /* try { // try from 033f9040 to 034f9047 has its CatchHandler @ 033f92c0 */
    lVar5 = FUN_01bab718(string___TypeInfo,1);
    if (lVar5 != 0) {
                    /* try { // try from 033f9068 to 034f9077 has its CatchHandler @ 033f92b8 */
      if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      *(System_String_o **)(lVar5 + 0x20) = (pMVar3->fields).LLBEKLPKDHK;
                    /* try { // try from 033f9078 to 034f9083 has its CatchHandler @ 033f92b4 */
      thunk_FUN_01c20e04();
      uVar2 = StringLiteral_17799/*"dlgMemberJoined"*/;
      if (pIVar4 != (Il2CppObject *)0x0) {
        pIVar7 = pIVar4->klass;
        uVar1._0_1_ = (pIVar7->_2).rank;
        uVar1._1_1_ = (pIVar7->_2).minimumAlignment;
        uVar8 = (ulong)uVar1;
        if (uVar8 != 0) {
          piVar9 = &((pIVar7->_1).interfaceOffsets)->offset;
          do {
                    /* try { // try from 033f90ac to 034f90b7 has its CatchHandler @ 033f9298 */
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
              pVVar6 = pIVar7->vtable + (*piVar9 + 0xc);
              goto LAB_033f90f4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_033f90f4:
                    /* try { // try from 033f90fc to 034f9107 has its CatchHandler @ 033f9284 */
        NONPLOOOOAG = (System_String_o *)(*pVVar6->methodPtr)(pIVar4,uVar2,lVar5,pVVar6->method);
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
        }
                    /* try { // try from 033f9128 to 034f9137 has its CatchHandler @ 033f92ac */
        __this_00 = HJPEKDOPBHN__BMIEIJAJNAJ((MethodInfo *)0x0);
        if (__this_00 != (AKOMJPINHEN_o *)0x0) {
          method_00 = (MethodInfo *)0x3;
                    /* try { // try from 033f913c to 034f9147 has its CatchHandler @ 033f929c */
          AKOMJPINHEN__GJAEDMLMJIK(__this_00,NONPLOOOOAG,3,true,(MethodInfo *)0x0);
                    /* try { // try from 033f9148 to 034f925b has its CatchHandler @ 033f8e3c */
          pSVar10 = (__this->fields).GDANBHGOGAB;
          pMVar3 = EEOMEMBBGNA__MPCGKMBAHHO(__this,(pMVar3->fields).ANAJGHJEEOC,method_00);
          if (pSVar10 != (System_Action_MGDJPGGPDJI__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033f9178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(pSVar10->fields).super.super.invoke_impl)
                      ((pSVar10->fields).super.super.method_code,pMVar3,
                       (pSVar10->fields).super.super.method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OKAMOFKHOLK(Action<OJEHKJHEBID> CJNHFNHJHPE)  [RVA 0x32F9290]
// EEOMEMBBGNA$$OKAMOFKHOLK @ RVA 0x32F9290

void EEOMEMBBGNA__OKAMOFKHOLK
               (EEOMEMBBGNA_o *__this,System_Action_OJEHKJHEBID__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_OJEHKJHEBID__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_OJEHKJHEBID__o *pSVar5;
  System_Action_OJEHKJHEBID__o *source;
  
                    /* catch() { ... } // from try @ 033f90d4 with catch @ 033f9290 */
                    /* catch() { ... } // from try @ 033f9274 with catch @ 033f9294 */
                    /* catch() { ... } // from try @ 033f90ac with catch @ 033f9298 */
                    /* catch() { ... } // from try @ 033f913c with catch @ 033f929c */
                    /* catch() { ... } // from try @ 033f926c with catch @ 033f92a8 */
                    /* catch() { ... } // from try @ 033f9128 with catch @ 033f92ac */
                    /* catch() { ... } // from try @ 033f9264 with catch @ 033f92b0 */
  if ((DAT_045676b1 & 1) == 0) {
                    /* catch() { ... } // from try @ 033f9078 with catch @ 033f92b4 */
                    /* catch() { ... } // from try @ 033f9068 with catch @ 033f92b8 */
                    /* catch() { ... } // from try @ 033f925c with catch @ 033f92bc */
    FUN_01bab630(&System_Action<OJEHKJHEBID>_TypeInfo);
                    /* catch() { ... } // from try @ 033f9040 with catch @ 033f92c0 */
                    /* catch() { ... } // from try @ 033f9028 with catch @ 033f92c4 */
    DAT_045676b1 = 1;
  }
  source = (__this->fields).JNCKDHJJBPM;
  do {
                    /* try { // try from 033f92dc to 034f92df has its CatchHandler @ 033f9430 */
                    /* try { // try from 033f92e0 to 034f943f has its CatchHandler @ 033f8e3c */
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<OJEHKJHEBID>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<OJEHKJHEBID>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_OJEHKJHEBID__o *)FUN_01c07368(&__this->fields,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void HINLKLNCNDB()  [RVA 0x32F9340]
// EEOMEMBBGNA$$HINLKLNCNDB @ RVA 0x32F9340

void EEOMEMBBGNA__HINLKLNCNDB(EEOMEMBBGNA_o *__this,MethodInfo *method)

{
  EEGDOGKBLNG_o *pEVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045676b2 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045676b2 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pEVar1 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (pEVar1 != (EEGDOGKBLNG_o *)0x0) {
    if ((pEVar1->fields).LPMFKCDDEIA != 3) {
      return;
    }
    KFCFGKEHPNK__EECLBEHBHFI(2,(MethodInfo *)0x0);
    __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(__this_00,0x34,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EBHDCCFEEEG(KEFHDOHHHML IMMNELPBGIF)  [RVA 0x32F93D4]
// EEOMEMBBGNA$$EBHDCCFEEEG @ RVA 0x32F93D4

void EEOMEMBBGNA__EBHDCCFEEEG(EEOMEMBBGNA_o *__this,KEFHDOHHHML_o *IMMNELPBGIF,MethodInfo *method)

{
  OJEHKJHEBID_o *PBNPKBJKFHE;
  
  if ((DAT_045676b3 & 1) == 0) {
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<OJEHKJHEBID>__);
    DAT_045676b3 = 1;
  }
  if (IMMNELPBGIF == (KEFHDOHHHML_o *)0x0) {
                    /* try { // try from 033f9448 to 034f9453 has its CatchHandler @ 033f8e3c */
    return;
  }
  PBNPKBJKFHE = (OJEHKJHEBID_o *)
                KEFHDOHHHML__PFNEPJAFEDF<object>
                          (IMMNELPBGIF,Method_KEFHDOHHHML_PFNEPJAFEDF<OJEHKJHEBID>__);
  if (PBNPKBJKFHE == (OJEHKJHEBID_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 033f92dc with catch @ 033f9430 */
  if ((PBNPKBJKFHE->fields).ADEIKPGDIPM == (__this->fields).NGOFLMHNOGM) {
                    /* try { // try from 033f9440 to 034f9447 has its CatchHandler @ 033f945c */
    JJPNLEPEAFM__IJDLKDGICCE(PBNPKBJKFHE,1,(MethodInfo *)0x0);
    return;
  }
                    /* try { // try from 033f9454 to 034f945b has its CatchHandler @ 033f945c */
                    /* catch() { ... } // from try @ 033f9440 with catch @ 033f945c
                       catch() { ... } // from try @ 033f9454 with catch @ 033f945c */
  JJPNLEPEAFM__FOJKGPOJNBJ(PBNPKBJKFHE,1,(MethodInfo *)0x0);
  return;
}


// ===== public void EHKLFIEEDFN(long FKIGDGJPIAC, Action<KEFHDOHHHML> CJNAEPEJPMK)  [RVA 0x32F9464]
// EEOMEMBBGNA$$EHKLFIEEDFN @ RVA 0x32F9464

void EEOMEMBBGNA__EHKLFIEEDFN
               (EEOMEMBBGNA_o *__this,int64_t FKIGDGJPIAC,System_Action_KEFHDOHHHML__o *CJNAEPEJPMK,
               MethodInfo *method)

{
  Google_Protobuf_WellKnownTypes_Int64Value_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  
  if ((DAT_045676b4 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_EEOMEMBBGNA_CGELDPIHHOP__);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Int64Value_TypeInfo);
    FUN_01bab630(&StringLiteral_17029/*"clan_kick"*/);
    DAT_045676b4 = 1;
  }
  __this_00 = (Google_Protobuf_WellKnownTypes_Int64Value_o *)
              thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_Int64Value_TypeInfo);
  Google_Protobuf_WellKnownTypes_Int64Value___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Google_Protobuf_WellKnownTypes_Int64Value_o *)0x0) {
    (__this_00->fields).value_ = FKIGDGJPIAC;
    __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                    /* try { // try from 033f950c to 034f99c7 has its CatchHandler @ 033f950c
                       catch() { ... } // from try @ 033f950c with catch @ 033f950c
                       catch() { ... } // from try @ 033f99e8 with catch @ 033f950c
                       catch() { ... } // from try @ 033f9a58 with catch @ 033f950c
                       catch() { ... } // from try @ 033f9ae8 with catch @ 033f950c
                       catch() { ... } // from try @ 033f9b58 with catch @ 033f950c
                       catch() { ... } // from try @ 033f9cd4 with catch @ 033f950c
                       catch() { ... } // from try @ 033f9da4 with catch @ 033f950c
                       catch() { ... } // from try @ 033f9de8 with catch @ 033f950c
                       catch() { ... } // from try @ 033f9e0c with catch @ 033f950c
                       catch() { ... } // from try @ 033f9e4c with catch @ 033f950c
                       catch() { ... } // from try @ 033f9e84 with catch @ 033f950c
                       catch() { ... } // from try @ 033f9ee4 with catch @ 033f950c
                       catch() { ... } // from try @ 033f9f2c with catch @ 033f950c
                       catch() { ... } // from try @ 033f9f48 with catch @ 033f950c
                       catch() { ... } // from try @ 033f9f8c with catch @ 033f950c
                       catch() { ... } // from try @ 033f9fcc with catch @ 033f950c
                       catch() { ... } // from try @ 033fa018 with catch @ 033f950c
                       catch() { ... } // from try @ 033fa034 with catch @ 033f950c
                       catch() { ... } // from try @ 033fa080 with catch @ 033f950c
                       catch() { ... } // from try @ 033fa0a4 with catch @ 033f950c
                       catch() { ... } // from try @ 033fa0e4 with catch @ 033f950c */
    BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                  thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
      KDPDBGNOFEN__KLNMLOOCAAO
                ((KDPDBGNOFEN_o *)__this_01,StringLiteral_17029/*"clan_kick"*/,
                 (Google_Protobuf_IMessage_o *)__this_00,BLMFLPJJMPF,0.0,(Il2CppObject *)CJNAEPEJPMK
                 ,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void IDLCMDGPIBL(Action<long> CJNHFNHJHPE)  [RVA 0x32F9564]
// EEOMEMBBGNA$$IDLCMDGPIBL @ RVA 0x32F9564

void EEOMEMBBGNA__IDLCMDGPIBL
               (EEOMEMBBGNA_o *__this,System_Action_long__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_long__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_long__o *pSVar5;
  System_Action_long__o **ppSVar6;
  System_Action_long__o *a;
  
  if ((DAT_045676b5 & 1) == 0) {
    FUN_01bab630(&System_Action<long>_TypeInfo);
    DAT_045676b5 = 1;
  }
  ppSVar6 = &(__this->fields).HAHLDGJHODG;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<long>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<long>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_long__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void ADNALKOMLMF(long KNPEFJLKLAL, Action<KEFHDOHHHML> CPECAEHDDDB)  [RVA 0x32F9614]
// EEOMEMBBGNA$$ADNALKOMLMF @ RVA 0x32F9614

void EEOMEMBBGNA__ADNALKOMLMF
               (EEOMEMBBGNA_o *__this,int64_t KNPEFJLKLAL,System_Action_KEFHDOHHHML__o *CPECAEHDDDB,
               MethodInfo *method)

{
  if (0 < KNPEFJLKLAL) {
    EEOMEMBBGNA__BGDACMBMPJP(__this,KNPEFJLKLAL,CPECAEHDDDB,method);
    return;
  }
  return;
}


// ===== public void MFDOCMJONOH(Action<OJEHKJHEBID> CJNHFNHJHPE)  [RVA 0x32F9624]
// EEOMEMBBGNA$$MFDOCMJONOH @ RVA 0x32F9624

void EEOMEMBBGNA__MFDOCMJONOH
               (EEOMEMBBGNA_o *__this,System_Action_OJEHKJHEBID__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_OJEHKJHEBID__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_OJEHKJHEBID__o *pSVar5;
  System_Action_OJEHKJHEBID__o *a;
  
  if ((DAT_045676b6 & 1) == 0) {
    FUN_01bab630(&System_Action<OJEHKJHEBID>_TypeInfo);
    DAT_045676b6 = 1;
  }
  a = (__this->fields).JNCKDHJJBPM;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<OJEHKJHEBID>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<OJEHKJHEBID>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_OJEHKJHEBID__o *)FUN_01c07368(&__this->fields,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void LLPKEDJDCNK(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x32F96D4]
// EEOMEMBBGNA$$LLPKEDJDCNK @ RVA 0x32F96D4

void EEOMEMBBGNA__LLPKEDJDCNK(EEOMEMBBGNA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  MGDJPGGPDJI_o *pMVar2;
  MethodInfo *method_00;
  
  if ((DAT_045676b7 & 1) == 0) {
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<HBLHCCMEEEC>__);
    DAT_045676b7 = 1;
  }
  if (((IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) &&
      (pIVar1 = KEFHDOHHHML__PFNEPJAFEDF<object>
                          (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<HBLHCCMEEEC>__),
      pIVar1 != (Il2CppObject *)0x0)) &&
     (pMVar2 = EEOMEMBBGNA__MPCGKMBAHHO(__this,(int64_t)pIVar1[1].monitor,method),
     pMVar2 != (MGDJPGGPDJI_o *)0x0)) {
    (pMVar2->fields).NLLKMEMKBAF = *(int32_t *)&pIVar1[2].klass;
    EEOMEMBBGNA__LGLJPEHHFAO(__this,method_00);
    return;
  }
  return;
}


// ===== public void EMKEMHIPNOF(Action CJNHFNHJHPE)  [RVA 0x32F9758]
// EEOMEMBBGNA$$EMKEMHIPNOF @ RVA 0x32F9758

void EEOMEMBBGNA__EMKEMHIPNOF(EEOMEMBBGNA_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_045676b8 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_045676b8 = 1;
  }
  ppSVar4 = &(__this->fields).HGPMBNOIMIM;
  a = *ppSVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public void JODGPLBHHIA(Action<KEFHDOHHHML> DJLAJBEHLKN)  [RVA 0x32F97F4]
// EEOMEMBBGNA$$JODGPLBHHIA @ RVA 0x32F97F4

void EEOMEMBBGNA__JODGPLBHHIA
               (EEOMEMBBGNA_o *__this,System_Action_KEFHDOHHHML__o *DJLAJBEHLKN,MethodInfo *method)

{
  Google_Protobuf_WellKnownTypes_Empty_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  
  if ((DAT_045676b9 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_EEOMEMBBGNA_HMICIOJGIGL__);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Empty_TypeInfo);
    FUN_01bab630(&StringLiteral_17020/*"clan_destroy"*/);
    DAT_045676b9 = 1;
  }
  __this_00 = (Google_Protobuf_WellKnownTypes_Empty_o *)
              thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_Empty_TypeInfo);
  Google_Protobuf_WellKnownTypes_Empty___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
    KDPDBGNOFEN__KLNMLOOCAAO
              ((KDPDBGNOFEN_o *)__this_01,StringLiteral_17020/*"clan_destroy"*/,
               (Google_Protobuf_IMessage_o *)__this_00,BLMFLPJJMPF,0.0,(Il2CppObject *)DJLAJBEHLKN,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void IGNGEHDHCMG(Action<long> CJNHFNHJHPE)  [RVA 0x32F98E8]
// EEOMEMBBGNA$$IGNGEHDHCMG @ RVA 0x32F98E8

void EEOMEMBBGNA__IGNGEHDHCMG
               (EEOMEMBBGNA_o *__this,System_Action_long__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_long__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_long__o *pSVar5;
  System_Action_long__o **ppSVar6;
  System_Action_long__o *source;
  
  if ((DAT_045676ba & 1) == 0) {
    FUN_01bab630(&System_Action<long>_TypeInfo);
    DAT_045676ba = 1;
  }
  ppSVar6 = &(__this->fields).KBBECJNEHBM;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<long>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<long>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_long__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void CHAMCKJPFDF(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x32F9998]
// EEOMEMBBGNA$$CHAMCKJPFDF @ RVA 0x32F9998

void EEOMEMBBGNA__CHAMCKJPFDF(EEOMEMBBGNA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  CPNHNIKFGFB_o *__this_00;
  
  if ((DAT_045676bb & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 033f99c8 to 034f99cf has its CatchHandler @ 033f9f2c */
    FUN_01bab630(&StringLiteral_17013/*"clan_change_leader failed"*/);
    DAT_045676bb = 1;
  }
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
                    /* try { // try from 033f9a38 to 034f9a3f has its CatchHandler @ 033f9e30 */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 033f9a54 to 034f9a57 has its CatchHandler @ 033f9e24 */
                    /* try { // try from 033f9a58 to 034f9ac7 has its CatchHandler @ 033f950c */
    UnityEngine_Debug__LogError(StringLiteral_17013/*"clan_change_leader failed"*/,(MethodInfo *)0x0);
    return;
  }
                    /* try { // try from 033f99e4 to 034f99e7 has its CatchHandler @ 033f9eb4 */
                    /* try { // try from 033f99e8 to 034f9a37 has its CatchHandler @ 033f950c */
  bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
  if (!bVar1) {
    __this_00 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (CPNHNIKFGFB_o *)0x0) {
      CPNHNIKFGFB__DIGPCFKCCBK
                (__this_00,(IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  lVar2 = thunk_FUN_01bda71c((IDCGLBOIAFJ->fields)._GOFDPKCMIJO_k__BackingField,
                             System_Action<KEFHDOHHHML>_TypeInfo);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x033f9a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))
              (*(undefined8 *)(lVar2 + 0x40),IDCGLBOIAFJ,*(undefined8 *)(lVar2 + 0x28));
    return;
  }
  return;
}


// ===== private void AGHPILNDDIJ(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x32F9A8C]
// EEOMEMBBGNA$$AGHPILNDDIJ @ RVA 0x32F9A8C

void EEOMEMBBGNA__AGHPILNDDIJ(EEOMEMBBGNA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  EEHFEPPDBHL_o *pEVar1;
  OJEHKJHEBID_o *pOVar2;
  Il2CppObject *IMMNELPBGIF;
  
  if ((DAT_045676bc & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 033f9ac8 to 034f9acf has its CatchHandler @ 033fa018 */
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<EEHFEPPDBHL>__);
    FUN_01bab630(&StringLiteral_10818/*"RaidClansManager::onProfileUpdateEvent clan_update_profile_event"*/);
    DAT_045676bc = 1;
  }
                    /* try { // try from 033f9ae4 to 034f9ae7 has its CatchHandler @ 033f9fa4 */
                    /* try { // try from 033f9ae8 to 034f9b37 has its CatchHandler @ 033f950c */
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__Log(StringLiteral_10818/*"RaidClansManager::onProfileUpdateEvent clan_update_profile_event"*/,(MethodInfo *)0x0);
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    pEVar1 = (EEHFEPPDBHL_o *)
             KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<EEHFEPPDBHL>__);
    if ((pEVar1 != (EEHFEPPDBHL_o *)0x0) &&
       (pOVar2 = (__this->fields).MICFEIBNOLM, pOVar2 != (OJEHKJHEBID_o *)0x0)) {
      (pOVar2->fields).MMIHELOLFPP = pEVar1;
      thunk_FUN_01c20e04();
                    /* try { // try from 033f9b38 to 034f9b3f has its CatchHandler @ 033f9ec8 */
      EEOMEMBBGNA__CBPJBDDLNFI(__this,IMMNELPBGIF,method);
      return;
    }
                    /* try { // try from 033f9b54 to 034f9b57 has its CatchHandler @ 033f9e9c */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033f9b58 to 034f9c43 has its CatchHandler @ 033f950c */
  FUN_01bab8c8();
}


// ===== private void OAKAJKGEAKK(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x32F9B5C]
// EEOMEMBBGNA$$OAKAJKGEAKK @ RVA 0x32F9B5C

void EEOMEMBBGNA__OAKAJKGEAKK(EEOMEMBBGNA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  EPCCNLNOALL_o *ADHJMIOENHG;
  long lVar2;
  CPNHNIKFGFB_o *__this_00;
  System_Action_o *pSVar3;
  
  if ((DAT_045676bd & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<EPCCNLNOALL>__);
    FUN_01bab630(&StringLiteral_17019/*"clan_create failed"*/);
    DAT_045676bd = 1;
  }
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
                    /* try { // try from 033f9c44 to 034f9c4b has its CatchHandler @ 033f9ec0 */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 033f9c60 to 034f9cd3 has its CatchHandler @ 033fa084 */
    UnityEngine_Debug__LogError(StringLiteral_17019/*"clan_create failed"*/,(MethodInfo *)0x0);
    return;
  }
  bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
  if (bVar1) {
    ADHJMIOENHG = (EPCCNLNOALL_o *)
                  KEFHDOHHHML__PFNEPJAFEDF<object>
                            (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<EPCCNLNOALL>__);
    EEOMEMBBGNA__OGBNPDLJNBG(__this,ADHJMIOENHG,method);
    lVar2 = thunk_FUN_01bda71c((IDCGLBOIAFJ->fields)._GOFDPKCMIJO_k__BackingField,
                               System_Action<KEFHDOHHHML>_TypeInfo);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x18))
                (*(undefined8 *)(lVar2 + 0x40),IDCGLBOIAFJ,*(undefined8 *)(lVar2 + 0x28));
    }
    pSVar3 = (__this->fields).GHOPCFLDCPK;
    if (pSVar3 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033f9c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar3->fields).super.super.invoke_impl)
                ((pSVar3->fields).super.super.method_code,(pSVar3->fields).super.super.method);
      return;
    }
  }
  else {
    __this_00 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (CPNHNIKFGFB_o *)0x0) {
      CPNHNIKFGFB__DIGPCFKCCBK
                (__this_00,(IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BGDACMBMPJP(long KNPEFJLKLAL, Action<KEFHDOHHHML> HFHIAKJDOGK)  [RVA 0x32F8728]
// EEOMEMBBGNA$$BGDACMBMPJP @ RVA 0x32F8728

void EEOMEMBBGNA__BGDACMBMPJP
               (EEOMEMBBGNA_o *__this,int64_t KNPEFJLKLAL,System_Action_KEFHDOHHHML__o *HFHIAKJDOGK,
               MethodInfo *method)

{
  Google_Protobuf_WellKnownTypes_Int64Value_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  
  if ((DAT_045676be & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_EEOMEMBBGNA_DJLHKEGALPA__);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Int64Value_TypeInfo);
    FUN_01bab630(&StringLiteral_17026/*"clan_get_by_id"*/);
    DAT_045676be = 1;
  }
  __this_00 = (Google_Protobuf_WellKnownTypes_Int64Value_o *)
              thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_Int64Value_TypeInfo);
  Google_Protobuf_WellKnownTypes_Int64Value___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Google_Protobuf_WellKnownTypes_Int64Value_o *)0x0) {
    (__this_00->fields).value_ = KNPEFJLKLAL;
    __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                  thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
      KDPDBGNOFEN__KLNMLOOCAAO
                ((KDPDBGNOFEN_o *)__this_01,StringLiteral_17026/*"clan_get_by_id"*/,
                 (Google_Protobuf_IMessage_o *)__this_00,BLMFLPJJMPF,0.0,(Il2CppObject *)HFHIAKJDOGK
                 ,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MCCFMEACAPI(long KNPEFJLKLAL)  [RVA 0x32F9C8C]
// EEOMEMBBGNA$$MCCFMEACAPI @ RVA 0x32F9C8C

void EEOMEMBBGNA__MCCFMEACAPI(EEOMEMBBGNA_o *__this,int64_t KNPEFJLKLAL,MethodInfo *method)

{
  System_Action_KEFHDOHHHML__o *HFHIAKJDOGK;
  MethodInfo *extraout_x1;
  MethodInfo *pMVar1;
  
  pMVar1 = (MethodInfo *)KNPEFJLKLAL;
  if ((DAT_045676bf & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_EEOMEMBBGNA_AEDKILJCAHD__);
    DAT_045676bf = 1;
    pMVar1 = extraout_x1;
  }
  (__this->fields).MGMAHFNADPA = true;
                    /* try { // try from 033f9cd4 to 034f9d43 has its CatchHandler @ 033f950c */
  if (0 < KNPEFJLKLAL) {
    (__this->fields).NGOFLMHNOGM = KNPEFJLKLAL;
    HFHIAKJDOGK = (System_Action_KEFHDOHHHML__o *)
                  thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
    pMVar1 = (MethodInfo *)0x0;
    System_Action<object>___ctor();
    EEOMEMBBGNA__BGDACMBMPJP(__this,KNPEFJLKLAL,HFHIAKJDOGK,pMVar1);
    return;
  }
  EEOMEMBBGNA__DLINOLNBJOL(__this,pMVar1);
  (__this->fields).MGMAHFNADPA = false;
  return;
}


// ===== public void DLOJCINMBIO(Action<long> CJNHFNHJHPE)  [RVA 0x32F9D38]
// EEOMEMBBGNA$$DLOJCINMBIO @ RVA 0x32F9D38

void EEOMEMBBGNA__DLOJCINMBIO
               (EEOMEMBBGNA_o *__this,System_Action_long__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_long__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_long__o *pSVar5;
  System_Action_long__o **ppSVar6;
  System_Action_long__o *a;
  
                    /* try { // try from 033f9d44 to 034f9d4b has its CatchHandler @ 033f9fb0 */
  if ((DAT_045676c0 & 1) == 0) {
    FUN_01bab630(&System_Action<long>_TypeInfo);
                    /* try { // try from 033f9d68 to 034f9d7f has its CatchHandler @ 033f9f8c */
    DAT_045676c0 = 1;
  }
  ppSVar6 = &(__this->fields).KBBECJNEHBM;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<long>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
                    /* try { // try from 033f9d94 to 034f9da3 has its CatchHandler @ 033f9e10 */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<long>_TypeInfo);
                    /* try { // try from 033f9da4 to 034f9ddb has its CatchHandler @ 033f950c */
      if (lVar4 == 0) {
                    /* try { // try from 033f9ddc to 034f9ddf has its CatchHandler @ 033f9f98 */
                    /* try { // try from 033f9de0 to 034f9de3 has its CatchHandler @ 033f9f94 */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033f9de4 to 034f9de7 has its CatchHandler @ 033f9f90 */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_long__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void AEDKILJCAHD(KEFHDOHHHML IMMNELPBGIF)  [RVA 0x32F9DE8]
// EEOMEMBBGNA$$AEDKILJCAHD @ RVA 0x32F9DE8

void EEOMEMBBGNA__AEDKILJCAHD(EEOMEMBBGNA_o *__this,KEFHDOHHHML_o *IMMNELPBGIF,MethodInfo *method)

{
  OJEHKJHEBID_o *PBNPKBJKFHE;
  
                    /* try { // try from 033f9de8 to 034f9deb has its CatchHandler @ 033f950c */
                    /* try { // try from 033f9dec to 034f9def has its CatchHandler @ 033f9ea8 */
                    /* try { // try from 033f9df0 to 034f9df3 has its CatchHandler @ 033f9e90 */
                    /* try { // try from 033f9df4 to 034f9df7 has its CatchHandler @ 033fa080 */
                    /* try { // try from 033f9df8 to 034f9dfb has its CatchHandler @ 033f9e84 */
                    /* try { // try from 033f9dfc to 034f9dff has its CatchHandler @ 033fa080 */
                    /* try { // try from 033f9e00 to 034f9e03 has its CatchHandler @ 033f9e18 */
  if ((DAT_045676c1 & 1) == 0) {
                    /* try { // try from 033f9e04 to 034f9e07 has its CatchHandler @ 033f9e14 */
                    /* try { // try from 033f9e08 to 034f9e0b has its CatchHandler @ 033f9e0c */
                    /* catch() { ... } // from try @ 033f9e08 with catch @ 033f9e0c
                       try { // try from 033f9e0c to 034f9e47 has its CatchHandler @ 033f950c */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* catch() { ... } // from try @ 033f9d94 with catch @ 033f9e10 */
                    /* catch() { ... } // from try @ 033f9e04 with catch @ 033f9e14 */
                    /* catch() { ... } // from try @ 033f9e00 with catch @ 033f9e18 */
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<OJEHKJHEBID>__);
                    /* catch() { ... } // from try @ 033f9a54 with catch @ 033f9e24 */
    FUN_01bab630(&StringLiteral_20014/*"onGetPlayerClan failed"*/);
    DAT_045676c1 = 1;
  }
                    /* catch() { ... } // from try @ 033f9a38 with catch @ 033f9e30 */
  if (IMMNELPBGIF != (KEFHDOHHHML_o *)0x0) {
    PBNPKBJKFHE = (OJEHKJHEBID_o *)
                  KEFHDOHHHML__PFNEPJAFEDF<object>
                            (IMMNELPBGIF,Method_KEFHDOHHHML_PFNEPJAFEDF<OJEHKJHEBID>__);
                    /* try { // try from 033f9e48 to 034f9e4b has its CatchHandler @ 033f9e68 */
    if (PBNPKBJKFHE != (OJEHKJHEBID_o *)0x0) {
                    /* try { // try from 033f9e4c to 034f9e6f has its CatchHandler @ 033f950c */
      EEOMEMBBGNA__DCFBDLHNGJP(__this,PBNPKBJKFHE,method);
      return;
    }
                    /* catch() { ... } // from try @ 033f9e48 with catch @ 033f9e68 */
                    /* try { // try from 033f9e70 to 034f9e83 has its CatchHandler @ 033fa0f8 */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* catch() { ... } // from try @ 033f9df8 with catch @ 033f9e84
                       try { // try from 033f9e84 to 034f9edf has its CatchHandler @ 033f950c */
                    /* catch() { ... } // from try @ 033f9df0 with catch @ 033f9e90 */
    UnityEngine_Debug__LogError(StringLiteral_20014/*"onGetPlayerClan failed"*/,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GMKFPMKJEPO()  [RVA 0x32F7658]
// EEOMEMBBGNA$$GMKFPMKJEPO @ RVA 0x32F7658

void EEOMEMBBGNA__GMKFPMKJEPO(EEOMEMBBGNA_o *__this,MethodInfo *method)

{
  OHPOFOPJIMB_o *KCPFFLHCCIN;
  CFMDGLMCNIL_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045676c2 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&JOAFCNEGILC_TypeInfo);
                    /* try { // try from 033f7698 to 034f769f has its CatchHandler @ 033f7858 */
    DAT_045676c2 = 1;
    method = extraout_x1;
  }
  KCPFFLHCCIN = (OHPOFOPJIMB_o *)thunk_FUN_01bda818(JOAFCNEGILC_TypeInfo,method);
                    /* try { // try from 033f76ac to 034f76b3 has its CatchHandler @ 033f77a8 */
  JOAFCNEGILC___ctor((JOAFCNEGILC_o *)KCPFFLHCCIN,(MethodInfo *)0x0);
                    /* try { // try from 033f76b4 to 034f76eb has its CatchHandler @ 033f75f4 */
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__POHONLHCOJN((MethodInfo *)0x0);
  if (__this_00 != (CFMDGLMCNIL_o *)0x0) {
    CFMDGLMCNIL__MPFFOIIBAKO(__this_00,KCPFFLHCCIN,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public OJEHKJHEBID HGLEAIDENOH()  [RVA 0x32F9E98]
// EEOMEMBBGNA$$HGLEAIDENOH @ RVA 0x32F9E98

OJEHKJHEBID_o * EEOMEMBBGNA__HGLEAIDENOH(EEOMEMBBGNA_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 033f9b54 with catch @ 033f9e9c */
  return (__this->fields).MICFEIBNOLM;
}


// ===== private void LPGFLHCGJLP(KEFHDOHHHML IMMNELPBGIF)  [RVA 0x32F9EA0]
// EEOMEMBBGNA$$LPGFLHCGJLP @ RVA 0x32F9EA0

void EEOMEMBBGNA__LPGFLHCGJLP(EEOMEMBBGNA_o *__this,KEFHDOHHHML_o *IMMNELPBGIF,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
                    /* catch() { ... } // from try @ 033f9dec with catch @ 033f9ea8 */
                    /* catch() { ... } // from try @ 033f99e4 with catch @ 033f9eb4 */
  if ((DAT_045676c3 & 1) == 0) {
                    /* catch() { ... } // from try @ 033f9c44 with catch @ 033f9ec0 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* catch() { ... } // from try @ 033f9b38 with catch @ 033f9ec8 */
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<OJEHKJHEBID>__);
    __this = (EEOMEMBBGNA_o *)FUN_01bab630(&StringLiteral_20014/*"onGetPlayerClan failed"*/);
                    /* try { // try from 033f9ee0 to 034f9ee3 has its CatchHandler @ 033f9f08 */
    DAT_045676c3 = 1;
  }
                    /* try { // try from 033f9ee4 to 034f9f17 has its CatchHandler @ 033f950c */
  if (IMMNELPBGIF != (KEFHDOHHHML_o *)0x0) {
    pIVar1 = KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IMMNELPBGIF,Method_KEFHDOHHHML_PFNEPJAFEDF<OJEHKJHEBID>__);
    if (pIVar1 != (Il2CppObject *)0x0) {
                    /* catch() { ... } // from try @ 033f9ee0 with catch @ 033f9f08 */
      return;
    }
                    /* try { // try from 033f9f18 to 034f9f2b has its CatchHandler @ 033fa0f8 */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* catch() { ... } // from try @ 033f99c8 with catch @ 033f9f2c
                       try { // try from 033f9f2c to 034f9f43 has its CatchHandler @ 033f950c */
    UnityEngine_Debug__LogError(StringLiteral_20014/*"onGetPlayerClan failed"*/,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== private void AMPHGEFLMAN(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x32F9F44]
// EEOMEMBBGNA$$AMPHGEFLMAN @ RVA 0x32F9F44

void EEOMEMBBGNA__AMPHGEFLMAN(EEOMEMBBGNA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  CPNHNIKFGFB_o *__this_00;
  
                    /* try { // try from 033f9f44 to 034f9f47 has its CatchHandler @ 033f9f70 */
                    /* try { // try from 033f9f48 to 034f9f77 has its CatchHandler @ 033f950c */
  if ((DAT_045676c4 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
                    /* catch() { ... } // from try @ 033f9f44 with catch @ 033f9f70 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 033f9f78 to 034f9f8b has its CatchHandler @ 033fa0f8 */
    FUN_01bab630(&StringLiteral_17016/*"clan_change_role failed"*/);
    DAT_045676c4 = 1;
  }
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* catch() { ... } // from try @ 033f9fc8 with catch @ 033f9ff4 */
                    /* try { // try from 033fa004 to 034fa017 has its CatchHandler @ 033fa0f8 */
    UnityEngine_Debug__LogError(StringLiteral_17016/*"clan_change_role failed"*/,(MethodInfo *)0x0);
    return;
  }
                    /* catch() { ... } // from try @ 033f9d68 with catch @ 033f9f8c
                       try { // try from 033f9f8c to 034f9fc7 has its CatchHandler @ 033f950c */
                    /* catch() { ... } // from try @ 033f9de4 with catch @ 033f9f90 */
                    /* catch() { ... } // from try @ 033f9de0 with catch @ 033f9f94 */
  bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033f9ddc with catch @ 033f9f98 */
  if (!bVar1) {
    __this_00 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (CPNHNIKFGFB_o *)0x0) {
                    /* catch() { ... } // from try @ 033f9ac8 with catch @ 033fa018
                       try { // try from 033fa018 to 034fa02f has its CatchHandler @ 033f950c */
      CPNHNIKFGFB__DIGPCFKCCBK
                (__this_00,(IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033fa034 to 034fa06b has its CatchHandler @ 033f950c */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 033f9ae4 with catch @ 033f9fa4 */
  lVar2 = thunk_FUN_01bda71c((IDCGLBOIAFJ->fields)._GOFDPKCMIJO_k__BackingField,
                             System_Action<KEFHDOHHHML>_TypeInfo);
                    /* catch() { ... } // from try @ 033f9d44 with catch @ 033f9fb0 */
  if (lVar2 != 0) {
                    /* try { // try from 033f9fc8 to 034f9fcb has its CatchHandler @ 033f9ff4 */
                    /* try { // try from 033f9fcc to 034fa003 has its CatchHandler @ 033f950c */
                    /* WARNING: Could not recover jumptable at 0x033f9fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))
              (*(undefined8 *)(lVar2 + 0x40),IDCGLBOIAFJ,*(undefined8 *)(lVar2 + 0x28));
    return;
  }
                    /* try { // try from 033fa030 to 034fa033 has its CatchHandler @ 033fa05c */
  return;
}


// ===== public void DLINOLNBJOL()  [RVA 0x32F8650]
// EEOMEMBBGNA$$DLINOLNBJOL @ RVA 0x32F8650

void EEOMEMBBGNA__DLINOLNBJOL(EEOMEMBBGNA_o *__this,MethodInfo *method)

{
  OJEHKJHEBID_o **ppOVar1;
  System_Action_OJEHKJHEBID__o *pSVar2;
  
  ppOVar1 = &(__this->fields).MICFEIBNOLM;
  (__this->fields).NGOFLMHNOGM = -1;
  if (*ppOVar1 == (OJEHKJHEBID_o *)0x0) {
    return;
  }
  (__this->fields).MICFEIBNOLM = (OJEHKJHEBID_o *)0x0;
  thunk_FUN_01c20e04(ppOVar1,0);
  pSVar2 = (__this->fields).JNCKDHJJBPM;
  if (pSVar2 != (System_Action_OJEHKJHEBID__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033f8690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,0,(pSVar2->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GCBEBBGLNGI(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x32F6508]
// EEOMEMBBGNA$$GCBEBBGLNGI @ RVA 0x32F6508

void EEOMEMBBGNA__GCBEBBGLNGI(EEOMEMBBGNA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  KAMBBJFPLGM_o *LLJHKLPGMGC;
  EEGDOGKBLNG_o *__this_00;
  long lVar2;
  CPNHNIKFGFB_o *__this_01;
  MethodInfo *method_00;
  
  if ((DAT_045676c5 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<KAMBBJFPLGM>__);
    DAT_045676c5 = 1;
  }
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
    return;
  }
  bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
  if (bVar1) {
    LLJHKLPGMGC = (KAMBBJFPLGM_o *)
                  KEFHDOHHHML__PFNEPJAFEDF<object>
                            (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<KAMBBJFPLGM>__);
                    /* try { // try from 033f658c to 034f6637 has its CatchHandler @ 033f658c
                       catch() { ... } // from try @ 033f658c with catch @ 033f658c
                       catch() { ... } // from try @ 033f6654 with catch @ 033f658c
                       catch() { ... } // from try @ 033f66a8 with catch @ 033f658c
                       catch() { ... } // from try @ 033f66e0 with catch @ 033f658c */
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      EEGDOGKBLNG__JOMFHMDCMNG(__this_00,LLJHKLPGMGC,(MethodInfo *)0x0);
      lVar2 = thunk_FUN_01bda71c((IDCGLBOIAFJ->fields)._GOFDPKCMIJO_k__BackingField,
                                 System_Action<KEFHDOHHHML>_TypeInfo);
      if (lVar2 != 0) {
        method_00 = *(MethodInfo **)(lVar2 + 0x28);
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),IDCGLBOIAFJ);
      }
      EEOMEMBBGNA__MECHLOOCDCI(__this,false,method_00);
      return;
    }
  }
  else {
    __this_01 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_01 != (CPNHNIKFGFB_o *)0x0) {
      CPNHNIKFGFB__DIGPCFKCCBK
                (__this_01,(IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DCFBDLHNGJP(OJEHKJHEBID PBNPKBJKFHE)  [RVA 0x32F7994]
// EEOMEMBBGNA$$DCFBDLHNGJP @ RVA 0x32F7994

void EEOMEMBBGNA__DCFBDLHNGJP(EEOMEMBBGNA_o *__this,OJEHKJHEBID_o *PBNPKBJKFHE,MethodInfo *method)

{
  CJFBGEEIPBA_o *__this_00;
  System_Action_LFELBGMCDHD__o *CPECAEHDDDB;
  MethodInfo *method_00;
  int64_t iVar1;
  System_Action_o *pSVar2;
  OJEHKJHEBID_o **ppOVar3;
  
  if ((DAT_045676c6 & 1) == 0) {
    FUN_01bab630(&System_Action<LFELBGMCDHD>_TypeInfo);
    FUN_01bab630(&Method_EEOMEMBBGNA_CBPJBDDLNFI__);
    DAT_045676c6 = 1;
  }
  if (PBNPKBJKFHE == (OJEHKJHEBID_o *)0x0) {
                    /* try { // try from 033f7a64 to 034f7b47 has its CatchHandler @ 033f7a64
                       catch() { ... } // from try @ 033f7a64 with catch @ 033f7a64
                       catch() { ... } // from try @ 033f7b6c with catch @ 033f7a64
                       catch() { ... } // from try @ 033f7b98 with catch @ 033f7a64
                       catch() { ... } // from try @ 033f7bc4 with catch @ 033f7a64
                       catch() { ... } // from try @ 033f7bf4 with catch @ 033f7a64 */
    return;
  }
  iVar1 = (PBNPKBJKFHE->fields).ADEIKPGDIPM;
  ppOVar3 = &(__this->fields).MICFEIBNOLM;
  *ppOVar3 = PBNPKBJKFHE;
  (__this->fields).NGOFLMHNOGM = iVar1;
  thunk_FUN_01c20e04(ppOVar3,PBNPKBJKFHE);
  __this_00 = (__this->fields).GMNJEBCECDA;
  if (__this_00 != (CJFBGEEIPBA_o *)0x0) {
    CJFBGEEIPBA__EHENAJFMBBA(__this_00,*ppOVar3,(MethodInfo *)0x0);
  }
  CPECAEHDDDB = (System_Action_LFELBGMCDHD__o *)
                thunk_FUN_01bda818(System_Action<LFELBGMCDHD>_TypeInfo);
  method_00 = Method_EEOMEMBBGNA_CBPJBDDLNFI__;
  System_Action<object>___ctor();
  EEOMEMBBGNA__HNGLOPNCACI(__this,CPECAEHDDDB,method_00);
  pSVar2 = (__this->fields).GHOPCFLDCPK;
  if (pSVar2 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033f7a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EGLODFFNHNO(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x32FA038]
// EEOMEMBBGNA$$EGLODFFNHNO @ RVA 0x32FA038

void EEOMEMBBGNA__EGLODFFNHNO(EEOMEMBBGNA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  CPNHNIKFGFB_o *__this_00;
  
  if ((DAT_045676c7 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
                    /* catch() { ... } // from try @ 033fa030 with catch @ 033fa05c */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 033fa06c to 034fa07f has its CatchHandler @ 033fa0f8 */
    FUN_01bab630(&StringLiteral_17056/*"clan_update_profile failed"*/);
    DAT_045676c7 = 1;
  }
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
                    /* catch() { ... } // from try @ 033fa0a0 with catch @ 033fa0cc */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033fa0dc to 034fa0e3 has its CatchHandler @ 033fa0f8 */
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 033fa0e4 to 034fa0ef has its CatchHandler @ 033f950c */
                    /* try { // try from 033fa0f0 to 034fa0f7 has its CatchHandler @ 033fa0f8 */
                    /* catch() { ... } // from try @ 033f9e70 with catch @ 033fa0f8
                       catch() { ... } // from try @ 033f9f18 with catch @ 033fa0f8
                       catch() { ... } // from try @ 033f9f78 with catch @ 033fa0f8
                       catch() { ... } // from try @ 033fa004 with catch @ 033fa0f8
                       catch() { ... } // from try @ 033fa06c with catch @ 033fa0f8
                       catch() { ... } // from try @ 033fa0dc with catch @ 033fa0f8
                       catch() { ... } // from try @ 033fa0f0 with catch @ 033fa0f8 */
    UnityEngine_Debug__LogError(StringLiteral_17056/*"clan_update_profile failed"*/,(MethodInfo *)0x0);
    return;
  }
                    /* catch() { ... } // from try @ 033f9df4 with catch @ 033fa080
                       catch() { ... } // from try @ 033f9dfc with catch @ 033fa080
                       try { // try from 033fa080 to 034fa09f has its CatchHandler @ 033f950c */
                    /* catch() { ... } // from try @ 033f9c60 with catch @ 033fa084 */
  bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
  if (!bVar1) {
    __this_00 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (CPNHNIKFGFB_o *)0x0) {
      CPNHNIKFGFB__DIGPCFKCCBK
                (__this_00,(IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 033fa0a0 to 034fa0a3 has its CatchHandler @ 033fa0cc */
  lVar2 = thunk_FUN_01bda71c((IDCGLBOIAFJ->fields)._GOFDPKCMIJO_k__BackingField,
                             System_Action<KEFHDOHHHML>_TypeInfo);
                    /* try { // try from 033fa0a4 to 034fa0db has its CatchHandler @ 033f950c */
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x033fa0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),0,*(undefined8 *)(lVar2 + 0x28));
    return;
  }
  return;
}


// ===== private void OIHOMNDJOMI(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x32FA12C]
// EEOMEMBBGNA$$OIHOMNDJOMI @ RVA 0x32FA12C

void EEOMEMBBGNA__OIHOMNDJOMI(EEOMEMBBGNA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  Il2CppObject *pIVar3;
  EEGDOGKBLNG_o *__this_00;
  Il2CppClass *pIVar4;
  MGDJPGGPDJI_o *pMVar5;
  long lVar6;
  VirtualInvokeData *pVVar7;
  System_String_o *NONPLOOOOAG;
  AKOMJPINHEN_o *__this_01;
  MethodInfo *pMVar8;
  MethodInfo *in_x3;
  OJEHKJHEBID_o *pOVar9;
  System_Action_long__o *pSVar10;
  ulong uVar11;
  int32_t *piVar12;
  Il2CppClass *PEJIFIIDFMM;
  
  if ((DAT_045676c8 & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<LKAFKHBBNOH>__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_17800/*"dlgMemberKicked"*/);
    FUN_01bab630(&StringLiteral_10816/*"RaidClansManager::onMemberKickEvent clan_member_kick_event"*/);
    DAT_045676c8 = 1;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__Log(StringLiteral_10816/*"RaidClansManager::onMemberKickEvent clan_member_kick_event"*/,(MethodInfo *)0x0);
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    pIVar3 = KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<LKAFKHBBNOH>__);
    if ((pIVar3 == (Il2CppObject *)0x0) || ((__this->fields).MICFEIBNOLM == (OJEHKJHEBID_o *)0x0)) {
      return;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
      pIVar4 = (Il2CppClass *)EEGDOGKBLNG__APCMGOCHMGC(__this_00,(MethodInfo *)0x0);
      PEJIFIIDFMM = pIVar3[2].klass;
      if (PEJIFIIDFMM == pIVar4) {
        pOVar9 = (__this->fields).MICFEIBNOLM;
        if (pOVar9 != (OJEHKJHEBID_o *)0x0) {
          pMVar8 = (MethodInfo *)(pOVar9->fields).GJNOEAKNMOG;
          EEOMEMBBGNA__MONHMPCJOFE
                    ((EEOMEMBBGNA_o *)pIVar4,(int64_t)pIVar4,(System_String_o *)pMVar8,in_x3);
          EEOMEMBBGNA__MECHLOOCDCI(__this,true,pMVar8);
          return;
        }
      }
      else {
        pMVar5 = EEOMEMBBGNA__MPCGKMBAHHO(__this,(int64_t)PEJIFIIDFMM,method);
        if (pMVar5 != (MGDJPGGPDJI_o *)0x0) {
          pIVar3 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                             (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
                    /* try { // try from 033fa2ac to 034fa4cb has its CatchHandler @ 033fa2ac
                       catch() { ... } // from try @ 033fa2ac with catch @ 033fa2ac
                       catch() { ... } // from try @ 033fa5f0 with catch @ 033fa2ac
                       catch() { ... } // from try @ 033fa734 with catch @ 033fa2ac
                       catch() { ... } // from try @ 033fa73c with catch @ 033fa2ac
                       catch() { ... } // from try @ 033fa808 with catch @ 033fa2ac */
          lVar6 = FUN_01bab718(string___TypeInfo,1);
          if (lVar6 == 0) goto LAB_033fa3d4;
          if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          *(System_String_o **)(lVar6 + 0x20) = (pMVar5->fields).LLBEKLPKDHK;
          thunk_FUN_01c20e04();
          uVar2 = StringLiteral_17800/*"dlgMemberKicked"*/;
          if (pIVar3 == (Il2CppObject *)0x0) goto LAB_033fa3d4;
          pIVar4 = pIVar3->klass;
          uVar1._0_1_ = (pIVar4->_2).rank;
          uVar1._1_1_ = (pIVar4->_2).minimumAlignment;
          uVar11 = (ulong)uVar1;
          if (uVar11 != 0) {
            piVar12 = &((pIVar4->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                  (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                pVVar7 = pIVar4->vtable + (*piVar12 + 0xc);
                goto LAB_033fa350;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar3,BLEFOFGCKEF_TypeInfo,0xc);
LAB_033fa350:
          NONPLOOOOAG = (System_String_o *)(*pVVar7->methodPtr)(pIVar3,uVar2,lVar6,pVVar7->method);
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
          }
          __this_01 = HJPEKDOPBHN__BMIEIJAJNAJ((MethodInfo *)0x0);
          if (__this_01 == (AKOMJPINHEN_o *)0x0) goto LAB_033fa3d4;
          AKOMJPINHEN__GJAEDMLMJIK(__this_01,NONPLOOOOAG,3,true,(MethodInfo *)0x0);
        }
        pSVar10 = (__this->fields).KBBECJNEHBM;
        if (pSVar10 != (System_Action_long__o *)0x0) {
          pMVar8 = (MethodInfo *)(pSVar10->fields).super.super.method;
          (*(code *)(pSVar10->fields).super.super.invoke_impl)
                    ((pSVar10->fields).super.super.method_code,PEJIFIIDFMM);
          EEOMEMBBGNA__MCDBOKFCGNK(__this,(int64_t)PEJIFIIDFMM,pMVar8);
          return;
        }
      }
    }
  }
LAB_033fa3d4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LIPJMNBEHGN(MGDJPGGPDJI KGCNBJOCNHC)  [RVA 0x32F9184]
// EEOMEMBBGNA$$LIPJMNBEHGN @ RVA 0x32F9184

void EEOMEMBBGNA__LIPJMNBEHGN(EEOMEMBBGNA_o *__this,MGDJPGGPDJI_o *KGCNBJOCNHC,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *__this_00;
  HCKCBFOGMMJ_o *__this_01;
  System_Action_LFELBGMCDHD__o *BLMFLPJJMPF;
  OJEHKJHEBID_o *pOVar1;
  int64_t BFCOKBECIDF;
  
  if ((DAT_045676c9 & 1) == 0) {
    FUN_01bab630(&System_Action<LFELBGMCDHD>_TypeInfo);
    FUN_01bab630(&Method_EEOMEMBBGNA_CBPJBDDLNFI__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_Add__);
    DAT_045676c9 = 1;
  }
  pOVar1 = (__this->fields).MICFEIBNOLM;
  if (pOVar1 != (OJEHKJHEBID_o *)0x0) {
    __this_00 = (pOVar1->fields).MABPCBMOECE;
    if (__this_00 != (Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *)0x0) {
      Google_Protobuf_Collections_RepeatedField<object>__Add
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                 (Il2CppObject *)KGCNBJOCNHC,
                 Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_Add__);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
      if (KGCNBJOCNHC != (MGDJPGGPDJI_o *)0x0) {
        BFCOKBECIDF = (KGCNBJOCNHC->fields).ANAJGHJEEOC;
        BLMFLPJJMPF = (System_Action_LFELBGMCDHD__o *)
                      thunk_FUN_01bda818(System_Action<LFELBGMCDHD>_TypeInfo);
        System_Action<object>___ctor();
        if (__this_01 != (HCKCBFOGMMJ_o *)0x0) {
                    /* try { // try from 033f925c to 034f925f has its CatchHandler @ 033f92bc */
                    /* try { // try from 033f9264 to 034f9267 has its CatchHandler @ 033f92b0 */
                    /* try { // try from 033f926c to 034f926f has its CatchHandler @ 033f92a8 */
                    /* try { // try from 033f9274 to 034f9277 has its CatchHandler @ 033f9294 */
          HCKCBFOGMMJ__JOMFHMDCMNG(__this_01,BFCOKBECIDF,BLMFLPJJMPF,(MethodInfo *)0x0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033f90e0 with catch @ 033f928c */
    FUN_01bab8c8();
  }
                    /* try { // try from 033f927c to 034f927f has its CatchHandler @ 033f9288 */
                    /* try { // try from 033f9280 to 034f92db has its CatchHandler @ 033f8e3c */
                    /* catch() { ... } // from try @ 033f90fc with catch @ 033f9284 */
                    /* catch() { ... } // from try @ 033f927c with catch @ 033f9288 */
  return;
}


// ===== public void ICNCJDCHLJE(int EJCBNPCNCBF, int HAOHGBBPBII)  [RVA 0x32F891C]
// EEOMEMBBGNA$$ICNCJDCHLJE @ RVA 0x32F891C

void EEOMEMBBGNA__ICNCJDCHLJE
               (EEOMEMBBGNA_o *__this,int32_t EJCBNPCNCBF,int32_t HAOHGBBPBII,MethodInfo *method)

{
  MFKCBFODPNJ_o *__this_00;
  CFMDGLMCNIL_o *__this_01;
  
                    /* try { // try from 033f8924 to 034f892b has its CatchHandler @ 033f8d48 */
                    /* try { // try from 033f893c to 034f893f has its CatchHandler @ 033f8d34 */
  if ((DAT_045676ca & 1) == 0) {
                    /* try { // try from 033f894c to 034f894f has its CatchHandler @ 033f8d38 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&MFKCBFODPNJ_TypeInfo);
    DAT_045676ca = 1;
  }
  __this_00 = (MFKCBFODPNJ_o *)thunk_FUN_01bda818(MFKCBFODPNJ_TypeInfo);
  MFKCBFODPNJ___ctor(__this_00,EJCBNPCNCBF,HAOHGBBPBII,(MethodInfo *)0x0);
                    /* try { // try from 033f8988 to 034f89af has its CatchHandler @ 033f8b70 */
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = HJPEKDOPBHN__POHONLHCOJN((MethodInfo *)0x0);
  if (__this_01 != (CFMDGLMCNIL_o *)0x0) {
    CFMDGLMCNIL__MPFFOIIBAKO(__this_01,(OHPOFOPJIMB_o *)__this_00,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void FOJEJJGMIGP(NLIPDAGCACO DMEEPJJNEAB = 0)  [RVA 0x32FA3DC]
// EEOMEMBBGNA$$FOJEJJGMIGP @ RVA 0x32FA3DC

void EEOMEMBBGNA__FOJEJJGMIGP(EEOMEMBBGNA_o *__this,int32_t DMEEPJJNEAB,MethodInfo *method)

{
  OJEHKJHEBID_o *PBNPKBJKFHE;
  
  PBNPKBJKFHE = (__this->fields).MICFEIBNOLM;
  if (PBNPKBJKFHE != (OJEHKJHEBID_o *)0x0) {
    JJPNLEPEAFM__IJDLKDGICCE(PBNPKBJKFHE,DMEEPJJNEAB,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public void LLNDCMBPEJP(Action CJNHFNHJHPE)  [RVA 0x32FA3F0]
// EEOMEMBBGNA$$LLNDCMBPEJP @ RVA 0x32FA3F0

void EEOMEMBBGNA__LLNDCMBPEJP(EEOMEMBBGNA_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_045676cb & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_045676cb = 1;
  }
  ppSVar4 = &(__this->fields).GHOPCFLDCPK;
  a = *ppSVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public void FKOLNCFEANA(long KNPEFJLKLAL, Action<KEFHDOHHHML> PFEFEKFHILE)  [RVA 0x32FA48C]
// EEOMEMBBGNA$$FKOLNCFEANA @ RVA 0x32FA48C

void EEOMEMBBGNA__FKOLNCFEANA
               (EEOMEMBBGNA_o *__this,int64_t KNPEFJLKLAL,System_Action_KEFHDOHHHML__o *PFEFEKFHILE,
               MethodInfo *method)

{
  Google_Protobuf_WellKnownTypes_Int64Value_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  
  if ((DAT_045676cc & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
                    /* try { // try from 033fa4cc to 034fa4f3 has its CatchHandler @ 033fa76c */
    FUN_01bab630(&Method_EEOMEMBBGNA_CONJKPKBICI__);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Int64Value_TypeInfo);
    FUN_01bab630(&StringLiteral_17024/*"clan_free_join"*/);
    DAT_045676cc = 1;
  }
  __this_00 = (Google_Protobuf_WellKnownTypes_Int64Value_o *)
              thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_Int64Value_TypeInfo);
  Google_Protobuf_WellKnownTypes_Int64Value___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Google_Protobuf_WellKnownTypes_Int64Value_o *)0x0) {
    (__this_00->fields).value_ = KNPEFJLKLAL;
    __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                    /* try { // try from 033fa528 to 034fa553 has its CatchHandler @ 033fa768 */
    BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                  thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
                    /* try { // try from 033fa55c to 034fa5a3 has its CatchHandler @ 033fa770 */
      KDPDBGNOFEN__KLNMLOOCAAO
                ((KDPDBGNOFEN_o *)__this_01,StringLiteral_17024/*"clan_free_join"*/,
                 (Google_Protobuf_IMessage_o *)__this_00,BLMFLPJJMPF,0.0,(Il2CppObject *)PFEFEKFHILE
                 ,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EPFNDIJOAKH(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x32FA58C]
// EEOMEMBBGNA$$EPFNDIJOAKH @ RVA 0x32FA58C

void EEOMEMBBGNA__EPFNDIJOAKH(EEOMEMBBGNA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *NONPLOOOOAG;
  AKOMJPINHEN_o *__this_00;
  EEGDOGKBLNG_o *__this_01;
  void *pvVar7;
  MethodInfo *pMVar8;
  Il2CppClass *pIVar9;
  System_Action_long__o *pSVar10;
  ulong uVar11;
  int32_t *piVar12;
  void *PEJIFIIDFMM;
  
  if ((DAT_045676cd & 1) == 0) {
                    /* try { // try from 033fa5b8 to 034fa5bb has its CatchHandler @ 033fa760 */
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 033fa5d4 to 034fa5db has its CatchHandler @ 033fa74c */
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 033fa5e8 to 034fa5ef has its CatchHandler @ 033fa750 */
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<MGDJPGGPDJI>__);
                    /* try { // try from 033fa5f0 to 034fa71b has its CatchHandler @ 033fa2ac */
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_17801/*"dlgMemberLeaved"*/);
    FUN_01bab630(&StringLiteral_10817/*"RaidClansManager::onMemberLeaveEvent clan_member_leave_event"*/);
    DAT_045676cd = 1;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__Log(StringLiteral_10817/*"RaidClansManager::onMemberLeaveEvent clan_member_leave_event"*/,(MethodInfo *)0x0);
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    pIVar3 = KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<MGDJPGGPDJI>__);
    if ((pIVar3 == (Il2CppObject *)0x0) || ((__this->fields).MICFEIBNOLM == (OJEHKJHEBID_o *)0x0)) {
      return;
    }
    pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar5 = FUN_01bab718(string___TypeInfo,1);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      *(Il2CppClass **)(lVar5 + 0x20) = pIVar3[2].klass;
      thunk_FUN_01c20e04();
      uVar2 = StringLiteral_17801/*"dlgMemberLeaved"*/;
      if (pIVar4 != (Il2CppObject *)0x0) {
        pIVar9 = pIVar4->klass;
        uVar1._0_1_ = (pIVar9->_2).rank;
        uVar1._1_1_ = (pIVar9->_2).minimumAlignment;
        uVar11 = (ulong)uVar1;
        if (uVar11 != 0) {
          piVar12 = &((pIVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                    /* try { // try from 033fa71c to 034fa723 has its CatchHandler @ 033fa764 */
                    /* try { // try from 033fa724 to 034fa727 has its CatchHandler @ 033fa75c */
                    /* try { // try from 033fa728 to 034fa72b has its CatchHandler @ 033fa758 */
              pVVar6 = pIVar9->vtable + (*piVar12 + 0xc);
              goto LAB_033fa72c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_033fa72c:
                    /* try { // try from 033fa72c to 034fa72f has its CatchHandler @ 033fa754 */
                    /* try { // try from 033fa730 to 034fa733 has its CatchHandler @ 033fa748 */
                    /* try { // try from 033fa734 to 034fa737 has its CatchHandler @ 033fa2ac */
                    /* try { // try from 033fa738 to 034fa73b has its CatchHandler @ 033fa744 */
                    /* try { // try from 033fa73c to 034fa77f has its CatchHandler @ 033fa2ac */
        NONPLOOOOAG = (System_String_o *)(*pVVar6->methodPtr)(pIVar4,uVar2,lVar5,pVVar6->method);
                    /* catch() { ... } // from try @ 033fa738 with catch @ 033fa744 */
                    /* catch() { ... } // from try @ 033fa730 with catch @ 033fa748 */
                    /* catch() { ... } // from try @ 033fa5d4 with catch @ 033fa74c */
                    /* catch() { ... } // from try @ 033fa5e8 with catch @ 033fa750 */
                    /* catch() { ... } // from try @ 033fa72c with catch @ 033fa754 */
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 033fa728 with catch @ 033fa758 */
                    /* catch() { ... } // from try @ 033fa724 with catch @ 033fa75c */
          thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
        }
                    /* catch() { ... } // from try @ 033fa5b8 with catch @ 033fa760 */
                    /* catch() { ... } // from try @ 033fa71c with catch @ 033fa764 */
        __this_00 = HJPEKDOPBHN__BMIEIJAJNAJ((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033fa528 with catch @ 033fa768 */
        if (__this_00 != (AKOMJPINHEN_o *)0x0) {
                    /* catch() { ... } // from try @ 033fa4cc with catch @ 033fa76c */
          pMVar8 = (MethodInfo *)0x3;
                    /* catch() { ... } // from try @ 033fa55c with catch @ 033fa770 */
          AKOMJPINHEN__GJAEDMLMJIK(__this_00,NONPLOOOOAG,3,true,(MethodInfo *)0x0);
                    /* try { // try from 033fa780 to 034fa783 has its CatchHandler @ 033fa798 */
          PEJIFIIDFMM = pIVar3[1].monitor;
          __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
          if (__this_01 != (EEGDOGKBLNG_o *)0x0) {
            pvVar7 = (void *)EEGDOGKBLNG__APCMGOCHMGC(__this_01,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033fa780 with catch @ 033fa798 */
            if (PEJIFIIDFMM == pvVar7) {
                    /* try { // try from 033fa7a0 to 034fa807 has its CatchHandler @ 033fa81c */
              EEOMEMBBGNA__MECHLOOCDCI(__this,false,pMVar8);
              return;
            }
            pSVar10 = (__this->fields).HAHLDGJHODG;
            if (pSVar10 != (System_Action_long__o *)0x0) {
              pMVar8 = (MethodInfo *)(pSVar10->fields).super.super.method;
              (*(code *)(pSVar10->fields).super.super.invoke_impl)
                        ((pSVar10->fields).super.super.method_code,PEJIFIIDFMM);
              EEOMEMBBGNA__MCDBOKFCGNK(__this,(int64_t)PEJIFIIDFMM,pMVar8);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void PMFGHFNAOPK(Action<long> CJNHFNHJHPE)  [RVA 0x32FA7F4]
// EEOMEMBBGNA$$PMFGHFNAOPK @ RVA 0x32FA7F4

void EEOMEMBBGNA__PMFGHFNAOPK
               (EEOMEMBBGNA_o *__this,System_Action_long__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_long__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_long__o *pSVar5;
  System_Action_long__o **ppSVar6;
  System_Action_long__o *source;
  
                    /* try { // try from 033fa808 to 034fa813 has its CatchHandler @ 033fa2ac */
                    /* try { // try from 033fa814 to 034fa81b has its CatchHandler @ 033fa81c */
  if ((DAT_045676ce & 1) == 0) {
                    /* catch() { ... } // from try @ 033fa7a0 with catch @ 033fa81c
                       catch() { ... } // from try @ 033fa814 with catch @ 033fa81c */
    FUN_01bab630(&System_Action<long>_TypeInfo);
    DAT_045676ce = 1;
  }
  ppSVar6 = &(__this->fields).HAHLDGJHODG;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<long>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<long>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_long__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void DJLHKEGALPA(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x32FA8A4]
// EEOMEMBBGNA$$DJLHKEGALPA @ RVA 0x32FA8A4

void EEOMEMBBGNA__DJLHKEGALPA(EEOMEMBBGNA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  CPNHNIKFGFB_o *__this_00;
  
  if ((DAT_045676cf & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_17027/*"clan_get_by_id failed"*/);
    DAT_045676cf = 1;
  }
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_17027/*"clan_get_by_id failed"*/,(MethodInfo *)0x0);
    return;
  }
  bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
  if (!bVar1) {
    __this_00 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (CPNHNIKFGFB_o *)0x0) {
      CPNHNIKFGFB__DIGPCFKCCBK
                (__this_00,(IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  lVar2 = thunk_FUN_01bda71c((IDCGLBOIAFJ->fields)._GOFDPKCMIJO_k__BackingField,
                             System_Action<KEFHDOHHHML>_TypeInfo);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x033fa930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))
              (*(undefined8 *)(lVar2 + 0x40),IDCGLBOIAFJ,*(undefined8 *)(lVar2 + 0x28));
    return;
  }
                    /* try { // try from 033fa988 to 034faacb has its CatchHandler @ 033fa988
                       catch() { ... } // from try @ 033fa988 with catch @ 033fa988
                       catch() { ... } // from try @ 033fab50 with catch @ 033fa988
                       catch() { ... } // from try @ 033fabb0 with catch @ 033fa988
                       catch() { ... } // from try @ 033fabf0 with catch @ 033fa988
                       catch() { ... } // from try @ 033fac20 with catch @ 033fa988 */
  return;
}


// ===== public IBMLPPNMDCI MDJLMHOCDCF()  [RVA 0x32FA998]
// EEOMEMBBGNA$$MDJLMHOCDCF @ RVA 0x32FA998

/* WARNING: Removing unreachable block (ram,0x033fabcc) */

IBMLPPNMDCI_o * EEOMEMBBGNA__MDJLMHOCDCF(EEOMEMBBGNA_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  IBMLPPNMDCI_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *__this_01;
  System_Collections_Generic_IEnumerator_T__o *pSVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  MethodInfo *extraout_x1;
  OJEHKJHEBID_o *pOVar7;
  System_Collections_Generic_IEnumerator_T__c *pSVar8;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_02;
  ulong uVar9;
  int32_t *piVar10;
  
  if ((DAT_045676d0 & 1) == 0) {
    FUN_01bab630(&IBMLPPNMDCI_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<MGDJPGGPDJI>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_GetEnumerator__);
    DAT_045676d0 = 1;
    method = extraout_x1;
  }
  __this_00 = (IBMLPPNMDCI_o *)thunk_FUN_01bda818(IBMLPPNMDCI_TypeInfo,method);
  IBMLPPNMDCI___ctor(__this_00,(MethodInfo *)0x0);
  pOVar7 = (__this->fields).MICFEIBNOLM;
  if (pOVar7 == (OJEHKJHEBID_o *)0x0) {
    return __this_00;
  }
  __this_01 = (pOVar7->fields).MABPCBMOECE;
  if (__this_01 == (Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033fabac with catch @ 033fabc4
                        */
    FUN_01bab8c8();
  }
  pSVar4 = Google_Protobuf_Collections_RepeatedField<object>__GetEnumerator
                     ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                      Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_GetEnumerator__)
  ;
  if (pSVar4 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033faba8 with catch @ 033fabc8
                        */
    FUN_01bab8c8();
  }
  do {
    pSVar8 = pSVar4->klass;
    uVar1._0_1_ = (pSVar8->_2).rank;
    uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar1;
    if (uVar9 != 0) {
      piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar5 = pSVar8->vtable + *piVar10;
          goto LAB_033faaac;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_033faaac:
    uVar9 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    if ((uVar9 & 1) == 0) {
                    /* try { // try from 033fab38 to 034fab3f has its CatchHandler @ 033fabb8 */
      if (pSVar4 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
        return __this_00;
      }
                    /* try { // try from 033fab44 to 034fab4f has its CatchHandler @ 033fabb4 */
      pSVar8 = pSVar4->klass;
      uVar3._0_1_ = (pSVar8->_2).rank;
      uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar3;
                    /* try { // try from 033fab50 to 034faba3 has its CatchHandler @ 033fa988 */
      if (uVar9 == 0) goto LAB_033fab78;
      piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
      break;
    }
    pSVar8 = pSVar4->klass;
    uVar2._0_1_ = (pSVar8->_2).rank;
    uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar2;
    if (uVar9 != 0) {
                    /* try { // try from 033faacc to 034faad3 has its CatchHandler @ 033fabd0 */
      piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IEnumerator<MGDJPGGPDJI>_TypeInfo) {
          pVVar5 = pSVar8->vtable + *piVar10;
          goto LAB_033fab08;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
                    /* try { // try from 033faae8 to 034faafb has its CatchHandler @ 033fabd4 */
      } while (uVar9 != 0);
    }
    pVVar5 = (VirtualInvokeData *)
             FUN_01b81914(pSVar4,System_Collections_Generic_IEnumerator<MGDJPGGPDJI>_TypeInfo,0);
LAB_033fab08:
                    /* try { // try from 033fab10 to 034fab17 has its CatchHandler @ 033fabc0 */
    lVar6 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    if (__this_00 == (IBMLPPNMDCI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033fab24 with catch @ 033fabbc
                        */
      FUN_01bab8c8();
    }
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033fab10 with catch @ 033fabc0
                        */
      FUN_01bab8c8();
    }
    __this_02 = (__this_00->fields).EHBNKDHKJNI;
    if (__this_02 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033fab38 with catch @ 033fabb8
                        */
      FUN_01bab8c8();
    }
                    /* try { // try from 033fab24 to 034fab2b has its CatchHandler @ 033fabbc */
    Google_Protobuf_Collections_RepeatedField<long>__Add
              (__this_02,*(int64_t *)(lVar6 + 0x18),
               Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
        (Il2CppClass *)System_IDisposable_TypeInfo) {
      pVVar5 = pSVar8->vtable + *piVar10;
      goto LAB_033fab94;
    }
  }
LAB_033fab78:
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_IDisposable_TypeInfo,0);
LAB_033fab94:
  (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
                    /* try { // try from 033faba4 to 034faba7 has its CatchHandler @ 033fabcc */
                    /* try { // try from 033faba8 to 034fabab has its CatchHandler @ 033fabc8 */
                    /* try { // try from 033fabac to 034fabaf has its CatchHandler @ 033fabc4 */
                    /* try { // try from 033fabb0 to 034fabeb has its CatchHandler @ 033fa988 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033fab44 with catch @ 033fabb4
                        */
  return __this_00;
}


// ===== public void PLBALCBJMMP(Action CJNHFNHJHPE)  [RVA 0x32FAC90]
// EEOMEMBBGNA$$PLBALCBJMMP @ RVA 0x32FAC90

void EEOMEMBBGNA__PLBALCBJMMP(EEOMEMBBGNA_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_045676d1 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_045676d1 = 1;
  }
  ppSVar4 = &(__this->fields).HGPMBNOIMIM;
  source = *ppSVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public CJFBGEEIPBA JJDKNEJADJF()  [RVA 0x32FAD2C]
// EEOMEMBBGNA$$JJDKNEJADJF @ RVA 0x32FAD2C

CJFBGEEIPBA_o * EEOMEMBBGNA__JJDKNEJADJF(EEOMEMBBGNA_o *__this,MethodInfo *method)

{
  return (__this->fields).GMNJEBCECDA;
}


// ===== public void EHAGBFLBLBM(Action<MGDJPGGPDJI> CJNHFNHJHPE)  [RVA 0x32FAD34]
// EEOMEMBBGNA$$EHAGBFLBLBM @ RVA 0x32FAD34

void EEOMEMBBGNA__EHAGBFLBLBM
               (EEOMEMBBGNA_o *__this,System_Action_MGDJPGGPDJI__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_MGDJPGGPDJI__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_MGDJPGGPDJI__o *pSVar5;
  System_Action_MGDJPGGPDJI__o **ppSVar6;
  System_Action_MGDJPGGPDJI__o *source;
  
  if ((DAT_045676d2 & 1) == 0) {
    FUN_01bab630(&System_Action<MGDJPGGPDJI>_TypeInfo);
    DAT_045676d2 = 1;
  }
  ppSVar6 = &(__this->fields).GDANBHGOGAB;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<MGDJPGGPDJI>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<MGDJPGGPDJI>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_MGDJPGGPDJI__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void DEGNMFHGAFB(Action<MGDJPGGPDJI> CJNHFNHJHPE)  [RVA 0x32FADE4]
// EEOMEMBBGNA$$DEGNMFHGAFB @ RVA 0x32FADE4

void EEOMEMBBGNA__DEGNMFHGAFB
               (EEOMEMBBGNA_o *__this,System_Action_MGDJPGGPDJI__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_MGDJPGGPDJI__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_MGDJPGGPDJI__o *pSVar5;
  System_Action_MGDJPGGPDJI__o **ppSVar6;
  System_Action_MGDJPGGPDJI__o *a;
  
  if ((DAT_045676d3 & 1) == 0) {
    FUN_01bab630(&System_Action<MGDJPGGPDJI>_TypeInfo);
    DAT_045676d3 = 1;
  }
  ppSVar6 = &(__this->fields).FAEDLDIIDMG;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<MGDJPGGPDJI>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<MGDJPGGPDJI>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_MGDJPGGPDJI__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void JIBNOKGNLEN(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x32FAE94]
// EEOMEMBBGNA$$JIBNOKGNLEN @ RVA 0x32FAE94

void EEOMEMBBGNA__JIBNOKGNLEN(EEOMEMBBGNA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  int32_t EFJNKONCKNF;
  int32_t HAOHGBBPBII;
  ushort uVar1;
  undefined8 uVar2;
  Il2CppObject *pIVar3;
  MGDJPGGPDJI_o *pMVar4;
  EEGDOGKBLNG_o *pEVar5;
  long lVar6;
  System_String_o *pSVar7;
  VirtualInvokeData *pVVar8;
  AKOMJPINHEN_o *__this_00;
  int64_t iVar9;
  EEOMEMBBGNA_o *__this_01;
  MethodInfo *method_00;
  Il2CppClass *pIVar10;
  System_Action_MGDJPGGPDJI__o *pSVar11;
  ulong uVar12;
  int32_t *piVar13;
  
  if ((DAT_045676d4 & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<HBHFOKIPAHA>__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_17802/*"dlgNewRole"*/);
    FUN_01bab630(&StringLiteral_10819/*"RaidClansManager::onRoleChangeEvent clan_member_leave_event"*/);
    DAT_045676d4 = 1;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__Log(StringLiteral_10819/*"RaidClansManager::onRoleChangeEvent clan_member_leave_event"*/,(MethodInfo *)0x0);
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    pIVar3 = KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<HBHFOKIPAHA>__);
    if (((pIVar3 == (Il2CppObject *)0x0) || ((__this->fields).MICFEIBNOLM == (OJEHKJHEBID_o *)0x0))
       || (pMVar4 = EEOMEMBBGNA__MPCGKMBAHHO(__this,(int64_t)pIVar3[2].klass,method),
          pMVar4 == (MGDJPGGPDJI_o *)0x0)) {
      return;
    }
    EFJNKONCKNF = *(int32_t *)&pIVar3[2].monitor;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pEVar5 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (pEVar5 != (EEGDOGKBLNG_o *)0x0) {
      HAOHGBBPBII = (pEVar5->fields).LPMFKCDDEIA;
      (pMVar4->fields).BDPMJNBHKIJ = EFJNKONCKNF;
      pIVar3 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar6 = FUN_01bab718(string___TypeInfo,2);
      if (lVar6 != 0) {
        if (*(int *)(lVar6 + 0x18) != 0) {
          *(undefined8 *)(lVar6 + 0x20) = (pMVar4->fields).LLBEKLPKDHK;
          thunk_FUN_01c20e04((undefined8 *)(lVar6 + 0x20));
          pSVar7 = IDGOGBNEGAM__ONLBMMFEPOI(EFJNKONCKNF,(MethodInfo *)0x0);
          if (1 < *(uint *)(lVar6 + 0x18)) {
            *(System_String_o **)(lVar6 + 0x28) = pSVar7;
            thunk_FUN_01c20e04();
            uVar2 = StringLiteral_17802/*"dlgNewRole"*/;
            if (pIVar3 != (Il2CppObject *)0x0) {
              pIVar10 = pIVar3->klass;
              uVar1._0_1_ = (pIVar10->_2).rank;
              uVar1._1_1_ = (pIVar10->_2).minimumAlignment;
              uVar12 = (ulong)uVar1;
              if (uVar12 != 0) {
                piVar13 = &((pIVar10->_1).interfaceOffsets)->offset;
                do {
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                      (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                    pVVar8 = pIVar10->vtable + (*piVar13 + 0xc);
                    goto LAB_033fb0b4;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              pVVar8 = (VirtualInvokeData *)FUN_01b81914(pIVar3,BLEFOFGCKEF_TypeInfo,0xc);
LAB_033fb0b4:
              pSVar7 = (System_String_o *)(*pVVar8->methodPtr)(pIVar3,uVar2,lVar6,pVVar8->method);
              __this_00 = HJPEKDOPBHN__BMIEIJAJNAJ((MethodInfo *)0x0);
              if (__this_00 != (AKOMJPINHEN_o *)0x0) {
                AKOMJPINHEN__GJAEDMLMJIK(__this_00,pSVar7,3,true,(MethodInfo *)0x0);
                lVar6 = (pMVar4->fields).ANAJGHJEEOC;
                pEVar5 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                if (pEVar5 != (EEGDOGKBLNG_o *)0x0) {
                  iVar9 = EEGDOGKBLNG__APCMGOCHMGC(pEVar5,(MethodInfo *)0x0);
                  if (lVar6 == iVar9) {
                    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    pEVar5 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                    if (pEVar5 == (EEGDOGKBLNG_o *)0x0) goto LAB_033fb174;
                    method_00 = (MethodInfo *)0x0;
                    EEGDOGKBLNG__IJIJACHHPBO
                              (pEVar5,(pMVar4->fields).BDPMJNBHKIJ,true,(MethodInfo *)0x0);
                    EEOMEMBBGNA__ICNCJDCHLJE(__this_01,EFJNKONCKNF,HAOHGBBPBII,method_00);
                  }
                  pSVar11 = (__this->fields).FAEDLDIIDMG;
                  if (pSVar11 != (System_Action_MGDJPGGPDJI__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033fb170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)(pSVar11->fields).super.super.invoke_impl)
                              ((pSVar11->fields).super.super.method_code,pMVar4,
                               (pSVar11->fields).super.super.method);
                    return;
                  }
                }
              }
            }
            goto LAB_033fb174;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
  }
LAB_033fb174:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void FBKGMIENPFK(EEHFEPPDBHL GMDFNEFPFJH, Action<KEFHDOHHHML> LPAJOAAAFGH)  [RVA 0x32FB17C]
// EEOMEMBBGNA$$FBKGMIENPFK @ RVA 0x32FB17C

void EEOMEMBBGNA__FBKGMIENPFK
               (EEOMEMBBGNA_o *__this,EEHFEPPDBHL_o *GMDFNEFPFJH,
               System_Action_KEFHDOHHHML__o *LPAJOAAAFGH,MethodInfo *method)

{
  KKLJIDJBFEI_o *__this_00;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  
  if ((DAT_045676d5 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_EEOMEMBBGNA_EGLODFFNHNO__);
    FUN_01bab630(&StringLiteral_17055/*"clan_update_profile"*/);
    DAT_045676d5 = 1;
  }
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
    KDPDBGNOFEN__KLNMLOOCAAO
              ((KDPDBGNOFEN_o *)__this_00,StringLiteral_17055/*"clan_update_profile"*/,
               (Google_Protobuf_IMessage_o *)GMDFNEFPFJH,BLMFLPJJMPF,0.0,(Il2CppObject *)LPAJOAAAFGH
               ,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LIINOLOJPAD(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x32FB24C]
// EEOMEMBBGNA$$LIINOLOJPAD @ RVA 0x32FB24C

void EEOMEMBBGNA__LIINOLOJPAD(EEOMEMBBGNA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  if ((DAT_045676d6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_17032/*"clan_leave failed"*/);
    DAT_045676d6 = 1;
  }
                    /* try { // try from 033fb288 to 034fb3ab has its CatchHandler @ 033fb288
                       catch() { ... } // from try @ 033fb288 with catch @ 033fb288
                       catch() { ... } // from try @ 033fb5d0 with catch @ 033fb288
                       catch() { ... } // from try @ 033fb690 with catch @ 033fb288
                       catch() { ... } // from try @ 033fb698 with catch @ 033fb288
                       catch() { ... } // from try @ 033fb7a8 with catch @ 033fb288 */
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    EEOMEMBBGNA__GCBEBBGLNGI(__this,IDCGLBOIAFJ,method);
    return;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_17032/*"clan_leave failed"*/,(MethodInfo *)0x0);
  return;
}


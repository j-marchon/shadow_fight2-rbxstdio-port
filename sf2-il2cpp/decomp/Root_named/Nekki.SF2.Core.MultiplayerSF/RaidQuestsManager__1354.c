// Original name: Nekki.SF2.Core.MultiplayerSF.RaidQuestsManager  (obfuscated GALHNMPIEHA)
// TypeDefIndex 1354
// Namespace: 
// public class RaidQuestsManager
// Fields:
//   private Action IFNPPPGCCKO; // 0x10
//   private Action NGKIIKLBJLE; // 0x18
//   private BPBGAAHBFKH <MBJGPIOFAEE>k__BackingField; // 0x20
//   private readonly List<BDMABHJEEGD> <LGNMHMIHFAF>k__BackingField; // 0x28
//   private int <BADKBIBHMEJ>k__BackingField; // 0x30
//   private readonly List<BDMABHJEEGD> MBGDIKJNDMJ; // 0x38
//   private bool HDPCPPJGGCI; // 0x40

// ===== public void CADLDOGMOJO()  [RVA 0x3164EB8]
// RaidQuestsManager$$CADLDOGMOJO @ RVA 0x3164EB8

void RaidQuestsManager__CADLDOGMOJO(RaidQuestsManager_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  RaidQuestsManager__HOPNFIPNLHB(__this,0,in_x2);
  return;
}


// ===== public static bool OALAPMJJBLJ(BDMABHJEEGD JOBNGBCPEGO)  [RVA 0x3164F0C]
// RaidQuestsManager$$OALAPMJJBLJ @ RVA 0x3164F0C

bool RaidQuestsManager__OALAPMJJBLJ(BDMABHJEEGD_o *JOBNGBCPEGO,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  RaidConfig_o *pJVar3;
  SFRequestSender_o *__this;
  MethodInfo *extraout_x1;
  RaidConfig_NMAJABPDEPE_o *pJVar4;
  PGICCMFLDPI_o *pPVar5;
  long lVar6;
  
  if ((DAT_045668ae & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045668ae = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pJVar3 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (((pJVar3 != (RaidConfig_o *)0x0) &&
      (pJVar4 = (pJVar3->fields)._IGLEEEJGEEJ_k__BackingField,
      pJVar4 != (RaidConfig_NMAJABPDEPE_o *)0x0)) && (JOBNGBCPEGO != (BDMABHJEEGD_o *)0x0)) {
    pPVar5 = (JOBNGBCPEGO->fields).GMHNOGKNFNB;
    if (pPVar5 == (PGICCMFLDPI_o *)0x0) {
      bVar2 = true;
    }
    else {
      uVar1 = (pJVar4->fields).OIMHAENFHBJ;
      lVar6 = (pPVar5->fields).GDKPGIBMFPA;
      __this = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
      if ((__this == (SFRequestSender_o *)0x0) ||
         (pPVar5 = SFRequestSender__MPBLBEGCAKP(__this,(MethodInfo *)0x0),
         pPVar5 == (PGICCMFLDPI_o *)0x0)) goto LAB_03264fb8;
      bVar2 = (long)(lVar6 + (ulong)uVar1 * 1000) <= (pPVar5->fields).GDKPGIBMFPA;
    }
    return bVar2;
  }
LAB_03264fb8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AKEKGJAFBOC()  [RVA 0x3164FBC]
// RaidQuestsManager$$AKEKGJAFBOC @ RVA 0x3164FBC

void RaidQuestsManager__AKEKGJAFBOC(RaidQuestsManager_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_BDMABHJEEGD__o *pSVar1;
  BPBGAAHBFKH_o **ppBVar2;
  
  if ((DAT_045668af & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BDMABHJEEGD>_Clear__);
    DAT_045668af = 1;
  }
  ppBVar2 = &(__this->fields)._MBJGPIOFAEE_k__BackingField;
  *ppBVar2 = (BPBGAAHBFKH_o *)0x0;
  thunk_FUN_01c20e04(ppBVar2,0);
  pSVar1 = (__this->fields)._LGNMHMIHFAF_k__BackingField;
  if (pSVar1 != (System_Collections_Generic_List_BDMABHJEEGD__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void HEHKMLCAEHH(object IMMNELPBGIF)  [RVA 0x316503C]
// RaidQuestsManager$$HEHKMLCAEHH @ RVA 0x316503C

void RaidQuestsManager__HEHKMLCAEHH(Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int *piVar1;
  
  if ((DAT_045668b0 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    DAT_045668b0 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar1 = (int *)thunk_FUN_01bda96c();
    if (*piVar1 != 0) {
      DialogsOpener__ENALHJGHEEN((MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// ===== public List<BDMABHJEEGD> GPDKLLAGNKE()  [RVA 0x31650BC]
// RaidQuestsManager$$GPDKLLAGNKE @ RVA 0x31650BC

System_Collections_Generic_List_BDMABHJEEGD__o *
RaidQuestsManager__GPDKLLAGNKE(RaidQuestsManager_o *__this,MethodInfo *method)

{
  return (__this->fields)._LGNMHMIHFAF_k__BackingField;
}


// ===== public static long FGJMKHPILFH(BDMABHJEEGD JOBNGBCPEGO)  [RVA 0x31650C4]
// RaidQuestsManager$$FGJMKHPILFH @ RVA 0x31650C4

int64_t RaidQuestsManager__FGJMKHPILFH(BDMABHJEEGD_o *JOBNGBCPEGO,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  RaidConfig_o *pJVar3;
  NFFDIPBFJHP_o *pNVar4;
  int64_t iVar5;
  RaidConfig_NMAJABPDEPE_o *pJVar6;
  GLPEFEEGCPM_o *pGVar7;
  FADHMEJJCPO_o *pFVar8;
  long lVar9;
  PGICCMFLDPI_o *pPVar10;
  long lVar11;
  
  if ((DAT_045668b1 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_045668b1 = 1;
  }
  bVar2 = JAIJCEMCHEK__HHDBIGKBMEC(JOBNGBCPEGO,(MethodInfo *)0x0);
  if (bVar2) {
    return -1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pJVar3 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
                    /* try { // try from 0326514c to 03365173 has its CatchHandler @ 03266c0c */
  if ((((pJVar3 != (RaidConfig_o *)0x0) &&
       (pJVar6 = (pJVar3->fields)._IGLEEEJGEEJ_k__BackingField,
       pJVar6 != (RaidConfig_NMAJABPDEPE_o *)0x0)) && (JOBNGBCPEGO != (BDMABHJEEGD_o *)0x0)) &&
     (pPVar10 = (JOBNGBCPEGO->fields).IMNALGKNMNP, pPVar10 != (PGICCMFLDPI_o *)0x0)) {
    uVar1 = (pJVar6->fields).BLGKNLLKCKM;
    lVar11 = (pPVar10->fields).GDKPGIBMFPA;
    pNVar4 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
    if (((pNVar4 != (NFFDIPBFJHP_o *)0x0) &&
        (pGVar7 = (pNVar4->fields).NEACDFLBNFO, pGVar7 != (GLPEFEEGCPM_o *)0x0)) &&
       ((pFVar8 = (pGVar7->fields).PBBGNHKFEPG, pFVar8 != (FADHMEJJCPO_o *)0x0 &&
        (pPVar10 = (pFVar8->fields).IMNALGKNMNP, pPVar10 != (PGICCMFLDPI_o *)0x0)))) {
      lVar9 = (pPVar10->fields).GDKPGIBMFPA;
                    /* try { // try from 032651a8 to 033651d3 has its CatchHandler @ 03266c08 */
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar5 = System_Math__Min(lVar11 / 1000 + (ulong)uVar1,lVar9 / 1000,(MethodInfo *)0x0);
      return iVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int KLJKFIGMEHN()  [RVA 0x31651EC]
// RaidQuestsManager$$KLJKFIGMEHN @ RVA 0x31651EC

int32_t RaidQuestsManager__KLJKFIGMEHN(RaidQuestsManager_o *__this,MethodInfo *method)

{
  return (__this->fields)._BADKBIBHMEJ_k__BackingField;
}


// ===== public void MFKHGFEDMIO(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x31651F4]
// RaidQuestsManager$$MFKHGFEDMIO @ RVA 0x31651F4

void RaidQuestsManager__MFKHGFEDMIO(RaidQuestsManager_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  ushort uVar1;
  MDHCGLMBHIG_o *pMVar2;
  ulong uVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *method_00;
  MDHCGLMBHIG_c *pMVar5;
  ulong uVar6;
  int32_t *piVar7;
  
  if ((DAT_045668b2 & 1) == 0) {
                    /* try { // try from 0326520c to 0336522f has its CatchHandler @ 03266c10 */
    FUN_01bab630(&ALFGOMLMGDI_TypeInfo);
    DAT_045668b2 = 1;
  }
  pMVar2 = ADAHHFAPLLM__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 03265230 to 03365373 has its CatchHandler @ 03263c08 */
  uVar3 = RaidQuestsManager__DBENAIKIEEI(__this,method_00);
  if (pMVar2 == (MDHCGLMBHIG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pMVar5 = pMVar2->klass;
  uVar1._0_1_ = (pMVar5->_2).rank;
  uVar1._1_1_ = (pMVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pMVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)ALFGOMLMGDI_TypeInfo) {
        pVVar4 = pMVar5->vtable + *piVar7;
        goto LAB_03265290;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pMVar2,ALFGOMLMGDI_TypeInfo,0);
LAB_03265290:
                    /* WARNING: Could not recover jumptable at 0x032652a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar4->methodPtr)(pMVar2,uVar3 & 0xffffffff,pVVar4->method);
  return;
}


// ===== public void JINOKMLGNIK()  [RVA 0x31654CC]
// RaidQuestsManager$$JINOKMLGNIK @ RVA 0x31654CC

void RaidQuestsManager__JINOKMLGNIK(RaidQuestsManager_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_BDMABHJEEGD__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_045668b3 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<BDMABHJEEGD>_Clear__);
    DAT_045668b3 = 1;
  }
  pSVar1 = (__this->fields)._LGNMHMIHFAF_k__BackingField;
  if (pSVar1 != (System_Collections_Generic_List_BDMABHJEEGD__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== private void HBFNKBOBHHL(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x316553C]
// RaidQuestsManager$$HBFNKBOBHHL @ RVA 0x316553C

void RaidQuestsManager__HBFNKBOBHHL(RaidQuestsManager_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  CPNHNIKFGFB_o *__this_00;
  SFRequestSender_o *__this_01;
  int32_t CEOLOKFCKIG;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((DAT_045668b4 & 1) == 0) {
    FUN_01bab630(&Method_GOCLIOIANDK<GGLDGAAPKCF,_ODEIOKOJGDM>_AIHNLLGNBLC__);
    FUN_01bab630(&ODEIOKOJGDM_TypeInfo);
    DAT_045668b4 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    bVar2 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (bVar2) {
                    /* try { // try from 03265594 to 033655bb has its CatchHandler @ 03266a8c */
      RaidQuestsManager__MOFPGBHFKMM(__this,IDCGLBOIAFJ,method);
      lVar3 = *(long *)(Method_GOCLIOIANDK<GGLDGAAPKCF,_ODEIOKOJGDM>_AIHNLLGNBLC__ + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      plVar7 = (long *)**(undefined8 **)(lVar3 + 0xb8);
      if (plVar7 != (long *)0x0) {
        lVar3 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 != 0) {
                    /* try { // try from 032655f0 to 0336561b has its CatchHandler @ 03266a88 */
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(ODEIOKOJGDM_c **)(piVar6 + -2) == ODEIOKOJGDM_TypeInfo) {
                    /* try { // try from 03265654 to 03365657 has its CatchHandler @ 032669b8 */
              puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_03265660;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar7,ODEIOKOJGDM_TypeInfo,0);
LAB_03265660:
                    /* try { // try from 03265660 to 03365667 has its CatchHandler @ 032669ac */
                    /* try { // try from 0326566c to 03365677 has its CatchHandler @ 032669b0 */
        (*(code *)*puVar4)(plVar7,0,puVar4[1]);
        __this_01 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
                    /* try { // try from 03265678 to 03365683 has its CatchHandler @ 032669c0 */
        if (__this_01 != (SFRequestSender_o *)0x0) {
                    /* try { // try from 03265684 to 0336582f has its CatchHandler @ 03263c08 */
          SFRequestSender__LIKCPEBFCEC(__this_01,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      iVar1 = (IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField;
      __this_00 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_00 != (CPNHNIKFGFB_o *)0x0) {
        if (iVar1 == 0x2714) {
          CEOLOKFCKIG = 0x2714;
        }
        else {
          CEOLOKFCKIG = 0x29c4;
        }
        CPNHNIKFGFB__DIGPCFKCCBK(__this_00,CEOLOKFCKIG,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HOPNFIPNLHB(int CJNHFNHJHPE)  [RVA 0x3164EC0]
// RaidQuestsManager$$HOPNFIPNLHB @ RVA 0x3164EC0

void RaidQuestsManager__HOPNFIPNLHB(RaidQuestsManager_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  if ((-1 < CJNHFNHJHPE) && ((__this->fields)._BADKBIBHMEJ_k__BackingField != CJNHFNHJHPE)) {
    (__this->fields)._BADKBIBHMEJ_k__BackingField = CJNHFNHJHPE;
    RaidQuestsManager__JLEKFKKNFPB(CJNHFNHJHPE,(MethodInfo *)(ulong)(uint)CJNHFNHJHPE);
    pSVar1 = (__this->fields).NGKIIKLBJLE;
    if (pSVar1 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03264f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar1->fields).super.super.invoke_impl)
                ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public bool KCAJCGDCFCA()  [RVA 0x316592C]
// RaidQuestsManager$$KCAJCGDCFCA @ RVA 0x316592C

bool RaidQuestsManager__KCAJCGDCFCA(RaidQuestsManager_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Func_BDMABHJEEGD__bool__o **ppSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  BPBGAAHBFKH_o *pBVar3;
  Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *source;
  System_Func_BDMABHJEEGD__bool__o *predicate;
  
  if ((DAT_045668b5 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Any<BDMABHJEEGD>__);
    FUN_01bab630(&System_Func<BDMABHJEEGD,_bool>_TypeInfo);
    FUN_01bab630(&Method_GALHNMPIEHA_<>c_IAFNHPMFACJ__);
    FUN_01bab630(&RaidQuestsManager_<>c_TypeInfo);
    DAT_045668b5 = 1;
    method = extraout_x1;
  }
  pBVar3 = (__this->fields)._MBJGPIOFAEE_k__BackingField;
  if (pBVar3 != (BPBGAAHBFKH_o *)0x0) {
    source = (pBVar3->fields).IGPJEDLPAGI;
    if ((RaidQuestsManager_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(RaidQuestsManager_<>c_TypeInfo,method);
      method = extraout_x1_00;
    }
    predicate = RaidQuestsManager_<>c_TypeInfo->static_fields->__9__9_0;
    if (predicate == (System_Func_BDMABHJEEGD__bool__o *)0x0) {
      if ((RaidQuestsManager_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(RaidQuestsManager_<>c_TypeInfo,method);
      }
      predicate = (System_Func_BDMABHJEEGD__bool__o *)
                  thunk_FUN_01bda818(System_Func<BDMABHJEEGD,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      ppSVar2 = &RaidQuestsManager_<>c_TypeInfo->static_fields->__9__9_0;
      *ppSVar2 = predicate;
      thunk_FUN_01c20e04(ppSVar2,predicate);
    }
    bVar1 = System_Linq_Enumerable__Any<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                       (System_Func_TSource__bool__o *)predicate,
                       Method_System_Linq_Enumerable_Any<BDMABHJEEGD>__);
    return bVar1;
  }
  return false;
}


// ===== private void IAKHIFOFLGO()  [RVA 0x3165A44]
// RaidQuestsManager$$IAKHIFOFLGO @ RVA 0x3165A44

void RaidQuestsManager__IAKHIFOFLGO(RaidQuestsManager_o *__this,MethodInfo *method)

{
  long lVar1;
  Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *__this_00;
  Il2CppObject *pIVar2;
  SFRequestSender_o *__this_01;
  PGICCMFLDPI_o *pPVar3;
  RaidConfig_o *pJVar4;
  Il2CppObject *arg1;
  Il2CppObject *arg2;
  System_String_o *pSVar5;
  MethodInfo *method_00;
  BPBGAAHBFKH_o *pBVar6;
  RaidConfig_NMAJABPDEPE_o *pJVar7;
  int index;
  long lVar8;
  ulong uVar9;
  long local_60;
  long local_58;
  ulong local_48;
  
                    /* try { // try from 03265a68 to 03365a8f has its CatchHandler @ 03266834 */
  if ((DAT_045668b6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&long_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Item__);
    FUN_01bab630(&StringLiteral_17509/*"cur: {0} \nfin: {1} \nnew: {2}\n"*/);
                    /* try { // try from 03265ac4 to 03365aef has its CatchHandler @ 03266830 */
    FUN_01bab630(&StringLiteral_6104/*"Expired quest cooldown, request new quest"*/);
    DAT_045668b6 = 1;
  }
  if (((__this->fields).HDPCPPJGGCI != false) ||
     (pBVar6 = (__this->fields)._MBJGPIOFAEE_k__BackingField, pBVar6 == (BPBGAAHBFKH_o *)0x0)) {
    return;
  }
  index = 0;
  while (__this_00 = (pBVar6->fields).IGPJEDLPAGI,
        __this_00 != (Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *)0x0) {
                    /* try { // try from 03265b24 to 03365b2f has its CatchHandler @ 03266820 */
    if ((__this_00->fields).count <= index) {
      return;
    }
                    /* try { // try from 03265b30 to 03365c6b has its CatchHandler @ 03263c08 */
    pIVar2 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                       ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,index,
                        Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Item__);
    if (pIVar2 == (Il2CppObject *)0x0) break;
    if (pIVar2[2].monitor != (void *)0x0) {
      __this_01 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
      if ((__this_01 == (SFRequestSender_o *)0x0) ||
         (pPVar3 = SFRequestSender__MPBLBEGCAKP(__this_01,(MethodInfo *)0x0),
         pPVar3 == (PGICCMFLDPI_o *)0x0)) break;
      uVar9 = (pPVar3->fields).GDKPGIBMFPA;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
      }
      pJVar4 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if (((pJVar4 == (RaidConfig_o *)0x0) ||
          (pJVar7 = (pJVar4->fields)._IGLEEEJGEEJ_k__BackingField,
          pJVar7 == (RaidConfig_NMAJABPDEPE_o *)0x0)) || (pIVar2[2].monitor == (void *)0x0)) break;
      lVar8 = *(long *)((long)pIVar2[2].monitor + 0x18);
      lVar1 = lVar8 + (ulong)((pJVar7->fields).BLGKNLLKCKM * 1000);
      if (lVar1 < (long)uVar9) {
        local_48 = uVar9;
        pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_48);
        local_58 = lVar8;
        arg1 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_58);
        local_60 = lVar1;
        arg2 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_60);
        pSVar5 = System_String__Format(StringLiteral_17509/*"cur: {0} \nfin: {1} \nnew: {2}\n"*/,pIVar2,arg1,arg2,(MethodInfo *)0x0);
        method_00 = (MethodInfo *)0x0;
        pSVar5 = System_String__Concat(pSVar5,StringLiteral_6104/*"Expired quest cooldown, request new quest"*/,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__Log((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 03265c6c to 03365c93 has its CatchHandler @ 032669c8 */
        local_48 = local_48 & 0xffffffff00000000;
        pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_48);
        RaidQuestsManager__AHBFKHIEEEI(__this,pIVar2,method_00);
        return;
      }
    }
    pBVar6 = (__this->fields)._MBJGPIOFAEE_k__BackingField;
    index = index + 1;
    if (pBVar6 == (BPBGAAHBFKH_o *)0x0) break;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DCELPLDINGL(BDMABHJEEGD JOBNGBCPEGO)  [RVA 0x3165D88]
// RaidQuestsManager$$DCELPLDINGL @ RVA 0x3165D88

void RaidQuestsManager__DCELPLDINGL(RaidQuestsManager_o *__this,BDMABHJEEGD_o *JOBNGBCPEGO,MethodInfo *method)

{
  int64_t iVar1;
  Roster_o *__this_00;
  SFRequestSender_o *__this_01;
  HCKHJECBIJC_o *__this_02;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  int iVar2;
  
  method_00 = (MethodInfo *)JOBNGBCPEGO;
  if ((DAT_045668b7 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_GALHNMPIEHA_HBFNKBOBHHL__);
    FUN_01bab630(&HCKHJECBIJC_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_17578/*"daily_quest_renew_force"*/);
    DAT_045668b7 = 1;
    method_00 = extraout_x1;
  }
  iVar1 = RaidQuestsManager__EEADODOOCCB(JOBNGBCPEGO,method_00);
  iVar2 = (int)iVar1;
  if (0 < iVar2) {
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
    if (__this_00 != (Roster_o *)0x0) {
      iVar1 = Roster__HEHFNBKGJLP(__this_00,(MethodInfo *)0x0);
      if (iVar1 < iVar2) {
        DialogsOpener__DOEMOKNGHNI((MethodInfo *)0x0);
        return;
      }
      __this_01 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
      __this_02 = (HCKHJECBIJC_o *)thunk_FUN_01bda818(HCKHJECBIJC_TypeInfo);
      HCKHJECBIJC___ctor(__this_02,(MethodInfo *)0x0);
      if ((JOBNGBCPEGO != (BDMABHJEEGD_o *)0x0) && (__this_02 != (HCKHJECBIJC_o *)0x0)) {
        (__this_02->fields).GCDBBHAFJPN = (JOBNGBCPEGO->fields).OHMDCKEDOGH;
        (__this_02->fields).CCCDGBNPNOD = iVar2;
        BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                      thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
        System_Action<object>___ctor();
        if (__this_01 != (SFRequestSender_o *)0x0) {
          KDPDBGNOFEN__KLNMLOOCAAO
                    ((KDPDBGNOFEN_o *)__this_01,StringLiteral_17578/*"daily_quest_renew_force"*/,
                     (Google_Protobuf_IMessage_o *)__this_02,BLMFLPJJMPF,0.0,(Il2CppObject *)0x0,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public static long EEADODOOCCB(BDMABHJEEGD JOBNGBCPEGO)  [RVA 0x3165F30]
// RaidQuestsManager$$EEADODOOCCB @ RVA 0x3165F30

int64_t RaidQuestsManager__EEADODOOCCB(BDMABHJEEGD_o *JOBNGBCPEGO,MethodInfo *method)

{
  uint32_t uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  RaidConfig_o *pJVar5;
  int64_t iVar6;
  SFRequestSender_o *__this;
  PGICCMFLDPI_o *pPVar7;
  ulong uVar8;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  RaidConfig_NMAJABPDEPE_o *pJVar9;
  
  if ((DAT_045668b8 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045668b8 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pJVar5 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if ((pJVar5 != (RaidConfig_o *)0x0) &&
     (pJVar9 = (pJVar5->fields)._IGLEEEJGEEJ_k__BackingField,
     pJVar9 != (RaidConfig_NMAJABPDEPE_o *)0x0)) {
    uVar1 = (pJVar9->fields).OAFBLBIBJBG;
    pJVar5 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if ((pJVar5 != (RaidConfig_o *)0x0) &&
       (pJVar9 = (pJVar5->fields)._IGLEEEJGEEJ_k__BackingField,
       pJVar9 != (RaidConfig_NMAJABPDEPE_o *)0x0)) {
      uVar2 = (pJVar9->fields).DCOMFGPIBOE;
      iVar6 = RaidQuestsManager__FGJMKHPILFH(JOBNGBCPEGO,method_00);
      __this = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
      if ((__this != (SFRequestSender_o *)0x0) &&
         (pPVar7 = SFRequestSender__MPBLBEGCAKP(__this,(MethodInfo *)0x0),
         pPVar7 != (PGICCMFLDPI_o *)0x0)) {
        uVar8 = 0;
        if ((uVar1 != 0) && (uVar2 != 0)) {
          lVar4 = (pPVar7->fields).GDKPGIBMFPA / 1000;
          if (lVar4 < iVar6) {
            uVar3 = 0;
            if (uVar2 != 0) {
              uVar3 = (uint)((int)iVar6 - (int)lVar4) / uVar2;
            }
            uVar8 = (ulong)((uVar3 + 1) * uVar1);
          }
        }
        return uVar8;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private long DBENAIKIEEI()  [RVA 0x31652AC]
// RaidQuestsManager$$DBENAIKIEEI @ RVA 0x31652AC

int64_t RaidQuestsManager__DBENAIKIEEI(RaidQuestsManager_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  RaidConfig_o *pJVar2;
  System_Func_BDMABHJEEGD__bool__o **ppSVar3;
  BDMABHJEEGD_o *JOBNGBCPEGO;
  int64_t iVar4;
  NFFDIPBFJHP_o *pNVar5;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  BPBGAAHBFKH_o *pBVar6;
  RaidConfig_NMAJABPDEPE_o *pJVar7;
  ulong val2;
  Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *source;
  System_Func_BDMABHJEEGD__bool__o *predicate;
  
  if ((DAT_045668b9 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<BDMABHJEEGD>__);
    FUN_01bab630(&System_Func<BDMABHJEEGD,_bool>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&Method_GALHNMPIEHA_<>c_OAMILOOFILJ__);
    FUN_01bab630(&RaidQuestsManager_<>c_TypeInfo);
    DAT_045668b9 = 1;
    method = extraout_x1;
  }
  pBVar6 = (__this->fields)._MBJGPIOFAEE_k__BackingField;
  if ((pBVar6 == (BPBGAAHBFKH_o *)0x0) ||
     ((pBVar6->fields).IGPJEDLPAGI ==
      (Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *)0x0)) {
                    /* try { // try from 03265448 to 03365457 has its CatchHandler @ 032669cc */
                    /* try { // try from 03265458 to 03365593 has its CatchHandler @ 03263c08 */
    return 0x7fffffff;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pJVar2 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (((pJVar2 != (RaidConfig_o *)0x0) &&
      (pJVar7 = (pJVar2->fields)._IGLEEEJGEEJ_k__BackingField,
      pJVar7 != (RaidConfig_NMAJABPDEPE_o *)0x0)) &&
     (pBVar6 = (__this->fields)._MBJGPIOFAEE_k__BackingField, pBVar6 != (BPBGAAHBFKH_o *)0x0)) {
    val2 = (ulong)(pJVar7->fields).BLGKNLLKCKM;
    source = (pBVar6->fields).IGPJEDLPAGI;
                    /* try { // try from 03265374 to 0336539b has its CatchHandler @ 03266b4c */
    if ((RaidQuestsManager_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    predicate = RaidQuestsManager_<>c_TypeInfo->static_fields->__9__32_1;
    if (predicate == (System_Func_BDMABHJEEGD__bool__o *)0x0) {
      if ((RaidQuestsManager_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      predicate = (System_Func_BDMABHJEEGD__bool__o *)
                  thunk_FUN_01bda818(System_Func<BDMABHJEEGD,_bool>_TypeInfo);
                    /* try { // try from 032653d0 to 033653fb has its CatchHandler @ 03266b48 */
      System_Func<object,_bool>___ctor();
      ppSVar3 = &RaidQuestsManager_<>c_TypeInfo->static_fields->__9__32_1;
      *ppSVar3 = predicate;
      thunk_FUN_01c20e04(ppSVar3,predicate);
    }
    JOBNGBCPEGO = (BDMABHJEEGD_o *)
                  System_Linq_Enumerable__FirstOrDefault<object>
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                             (System_Func_TSource__bool__o *)predicate,
                             Method_System_Linq_Enumerable_FirstOrDefault<BDMABHJEEGD>__);
    if (JOBNGBCPEGO == (BDMABHJEEGD_o *)0x0) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar5 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
      if (pNVar5 == (NFFDIPBFJHP_o *)0x0) goto LAB_032654c8;
      if ((pNVar5->fields).NEACDFLBNFO == (GLPEFEEGCPM_o *)0x0) {
        return val2;
      }
      iVar1 = NFFDIPBFJHP__MHAFJGEAOIF((MethodInfo *)0x0);
      if (iVar1 < 1) {
        return val2;
      }
      iVar1 = NFFDIPBFJHP__MHAFJGEAOIF((MethodInfo *)0x0);
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(System_Math_TypeInfo);
      }
      iVar4 = (int64_t)iVar1;
    }
    else {
      iVar4 = RaidQuestsManager__FGJMKHPILFH(JOBNGBCPEGO,method_00);
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(System_Math_TypeInfo);
      }
    }
                    /* try { // try from 03265434 to 03365447 has its CatchHandler @ 03266b50 */
    iVar4 = System_Math__Min(iVar4,val2,(MethodInfo *)0x0);
    return iVar4;
  }
LAB_032654c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public BPBGAAHBFKH PKPDNOEBFPK()  [RVA 0x3166020]
// RaidQuestsManager$$PKPDNOEBFPK @ RVA 0x3166020

BPBGAAHBFKH_o * RaidQuestsManager__PKPDNOEBFPK(RaidQuestsManager_o *__this,MethodInfo *method)

{
  return (__this->fields)._MBJGPIOFAEE_k__BackingField;
}


// ===== public static bool EBPPGDNPHGG()  [RVA 0x3166028]
// RaidQuestsManager$$EBPPGDNPHGG @ RVA 0x3166028

bool RaidQuestsManager__EBPPGDNPHGG(MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  Roster_o *__this;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar3;
  
  if ((DAT_045668ba & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_15988/*"_NewRaidQuestsCount"*/);
    DAT_045668ba = 1;
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
  __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  bVar1 = false;
  if ((__this != (Roster_o *)0x0) &&
     (pMVar3 = Roster__HKIEGNBOFCD(__this,StringLiteral_15988/*"_NewRaidQuestsCount"*/,0,(MethodInfo *)0x0),
     bVar1 = false, pMVar3 != (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0)) {
    iVar2 = System_Int32__Parse((pMVar3->fields).JAICMIMBIOA,(MethodInfo *)0x0);
    bVar1 = 0 < iVar2;
  }
  return bVar1;
}


// ===== public void COKCPKHDHDN(Action CJNHFNHJHPE)  [RVA 0x31660F0]
// RaidQuestsManager$$COKCPKHDHDN @ RVA 0x31660F0

void RaidQuestsManager__COKCPKHDHDN(RaidQuestsManager_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o *a;
  
  if ((DAT_045668bb & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_045668bb = 1;
  }
  a = (__this->fields).IFNPPPGCCKO;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(&__this->fields,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public bool EHFPAPHPBIP()  [RVA 0x316618C]
// RaidQuestsManager$$EHFPAPHPBIP @ RVA 0x316618C

bool RaidQuestsManager__EHFPAPHPBIP(RaidQuestsManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BDMABHJEEGD__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_045668bc & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<BDMABHJEEGD>_get_Count__);
    DAT_045668bc = 1;
  }
  pSVar1 = (__this->fields)._LGNMHMIHFAF_k__BackingField;
  if (pSVar1 != (System_Collections_Generic_List_BDMABHJEEGD__o *)0x0) {
    return 0 < (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== private static void JLEKFKKNFPB(int CJNHFNHJHPE)  [RVA 0x3165810]
// RaidQuestsManager$$JLEKFKKNFPB @ RVA 0x3165810

void RaidQuestsManager__JLEKFKKNFPB(int32_t CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *CJNHFNHJHPE_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  Roster_o *pAVar1;
  int32_t local_24;
  
                    /* try { // try from 03265830 to 03365857 has its CatchHandler @ 032668f4 */
  local_24 = CJNHFNHJHPE;
  if ((DAT_045668bd & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_9418/*"NewRaidQuestsCount"*/);
    DAT_045668bd = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
                    /* try { // try from 0326588c to 033658b7 has its CatchHandler @ 032668f0 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  CJNHFNHJHPE_00 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
  if (pAVar1 != (Roster_o *)0x0) {
    Roster__LMJFPPDAPBF(pAVar1,StringLiteral_9418/*"NewRaidQuestsCount"*/,CJNHFNHJHPE_00,0,(MethodInfo *)0x0);
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
                    /* try { // try from 032658ec to 033658f7 has its CatchHandler @ 03266828 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 032658f8 to 03365a67 has its CatchHandler @ 03263c08 */
      thunk_FUN_01ba7564();
    }
    pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar1 != (Roster_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar1,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AHBFKHIEEEI(object IMMNELPBGIF)  [RVA 0x3165C8C]
// RaidQuestsManager$$AHBFKHIEEEI @ RVA 0x3165C8C

void RaidQuestsManager__AHBFKHIEEEI(RaidQuestsManager_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  SFRequestSender_o *__this_00;
  Google_Protobuf_WellKnownTypes_Empty_o *__this_01;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  
  if ((DAT_045668be & 1) == 0) {
                    /* try { // try from 03265cc8 to 03365cf3 has its CatchHandler @ 032669c4 */
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Empty_TypeInfo);
    FUN_01bab630(&Method_GALHNMPIEHA_MOFPGBHFKMM__);
    FUN_01bab630(&StringLiteral_17576/*"daily_quest_refresh"*/);
    DAT_045668be = 1;
  }
  (__this->fields).HDPCPPJGGCI = true;
  __this_00 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
  __this_01 = (Google_Protobuf_WellKnownTypes_Empty_o *)
              thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_Empty_TypeInfo);
  Google_Protobuf_WellKnownTypes_Empty___ctor(__this_01,(MethodInfo *)0x0);
                    /* try { // try from 03265d2c to 03365d2f has its CatchHandler @ 032668e4 */
  BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
                    /* try { // try from 03265d38 to 03365d3f has its CatchHandler @ 032668ec */
                    /* try { // try from 03265d44 to 03365d5b has its CatchHandler @ 032669d0 */
  System_Action<object>___ctor();
  if (__this_00 != (SFRequestSender_o *)0x0) {
                    /* try { // try from 03265d5c to 0336679b has its CatchHandler @ 03263c08 */
    KDPDBGNOFEN__KLNMLOOCAAO
              ((KDPDBGNOFEN_o *)__this_00,StringLiteral_17576/*"daily_quest_refresh"*/,
               (Google_Protobuf_IMessage_o *)__this_01,BLMFLPJJMPF,0.0,IMMNELPBGIF,(MethodInfo *)0x0
              );
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IDLJMOJKHKF(BDMABHJEEGD CNNEPEHMINA)  [RVA 0x31661DC]
// RaidQuestsManager$$IDLJMOJKHKF @ RVA 0x31661DC

void RaidQuestsManager__IDLJMOJKHKF(RaidQuestsManager_o *__this,BDMABHJEEGD_o *CNNEPEHMINA,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  int32_t iVar3;
  Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *__this_00;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  System_Collections_Generic_List_BDMABHJEEGD__o *pSVar8;
  EGMONPGHHDP_o *__this_01;
  RaidConfig_CKEMIAEPGKD_o *pJVar9;
  Roster_o *pAVar10;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar11;
  BPBGAAHBFKH_o *pBVar12;
  BDMABHJEEGD_array *pBVar13;
  PGICCMFLDPI_o *pPVar14;
  PGICCMFLDPI_o *pPVar15;
  int index;
  float __this_02;
  int32_t local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  if ((DAT_045668bf & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BDMABHJEEGD>_Add__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Item__);
    FUN_01bab630(&StringLiteral_15924/*"_BPDailyQuestCount"*/);
    FUN_01bab630(&StringLiteral_15925/*"_BPDailyQuestTime"*/);
    FUN_01bab630(&StringLiteral_11105/*"Recieved new quest"*/);
    FUN_01bab630(&StringLiteral_3316/*"BPDailyQuestCount"*/);
    FUN_01bab630(&StringLiteral_21840/*"updated quest with id: {0}, "*/);
    FUN_01bab630(&StringLiteral_17510/*"cur_progress: {0} -> {1}"*/);
    FUN_01bab630(&StringLiteral_3317/*"BPDailyQuestTime"*/);
    FUN_01bab630(&StringLiteral_11095/*"Received completed quest"*/);
    DAT_045668bf = 1;
  }
  _local_38 = (Il2CppMethodPointer)0x0;
  pBVar12 = (__this->fields)._MBJGPIOFAEE_k__BackingField;
  if (pBVar12 == (BPBGAAHBFKH_o *)0x0) {
                    /* try { // try from 032667e0 to 033667e3 has its CatchHandler @ 0326681c */
                    /* try { // try from 032667e4 to 033667e7 has its CatchHandler @ 03266818 */
                    /* try { // try from 032667e8 to 033667eb has its CatchHandler @ 03266814 */
                    /* try { // try from 032667ec to 033667ef has its CatchHandler @ 03266810 */
    return;
  }
  index = 0;
  while (__this_00 = (pBVar12->fields).IGPJEDLPAGI,
        __this_00 != (Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *)0x0) {
    if ((__this_00->fields).count <= index) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__Log(StringLiteral_11105/*"Recieved new quest"*/,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<BDMABHJEEGD>_Add__;
      pSVar8 = (__this->fields).MBGDIKJNDMJ;
      if (pSVar8 != (System_Collections_Generic_List_BDMABHJEEGD__o *)0x0) {
        pBVar13 = (pSVar8->fields)._items;
        (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
        if (pBVar13 != (BDMABHJEEGD_array *)0x0) {
          uVar1 = (pSVar8->fields)._size;
          if (uVar1 < (uint)pBVar13->max_length) {
            (pSVar8->fields)._size = uVar1 + 1;
            pBVar13->m_Items[(int)uVar1] = CNNEPEHMINA;
            thunk_FUN_01c20e04(pBVar13->m_Items + (int)uVar1,CNNEPEHMINA);
            return;
          }
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)CNNEPEHMINA
                     ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
      break;
    }
    pIVar4 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                       ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,index,
                        Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Item__);
    if ((CNNEPEHMINA == (BDMABHJEEGD_o *)0x0) || (pIVar4 == (Il2CppObject *)0x0)) break;
    local_3c = (CNNEPEHMINA->fields).OHMDCKEDOGH;
    if (local_3c == *(int *)&pIVar4[1].monitor) {
      if ((pIVar4[2].monitor != (void *)0x0) ||
         ((CNNEPEHMINA->fields).IMNALGKNMNP == (PGICCMFLDPI_o *)0x0)) {
        pIVar5 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_3c);
        pSVar6 = System_String__Format(StringLiteral_21840/*"updated quest with id: {0}, "*/,pIVar5,(MethodInfo *)0x0);
        local_40 = *(undefined4 *)&pIVar4[3].klass;
        pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_40);
        local_44 = (CNNEPEHMINA->fields).OOCPIHHNOBO;
        pIVar5 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_44);
        pSVar7 = System_String__Format(StringLiteral_17510/*"cur_progress: {0} -> {1}"*/,pIVar4,pIVar5,(MethodInfo *)0x0);
        pSVar6 = System_String__Concat(pSVar6,pSVar7,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__Log((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
        return;
      }
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__Log(StringLiteral_11095/*"Received completed quest"*/,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<BDMABHJEEGD>_Add__;
      pSVar8 = (__this->fields)._LGNMHMIHFAF_k__BackingField;
      if (pSVar8 != (System_Collections_Generic_List_BDMABHJEEGD__o *)0x0) {
        pBVar13 = (pSVar8->fields)._items;
        (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
        if (pBVar13 != (BDMABHJEEGD_array *)0x0) {
          uVar1 = (pSVar8->fields)._size;
          if (uVar1 < (uint)pBVar13->max_length) {
            (pSVar8->fields)._size = uVar1 + 1;
            pBVar13->m_Items[(int)uVar1] = CNNEPEHMINA;
            thunk_FUN_01c20e04(pBVar13->m_Items + (int)uVar1,CNNEPEHMINA);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar8,
                       (Il2CppObject *)CNNEPEHMINA,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_01 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
          if (__this_01 != (EGMONPGHHDP_o *)0x0) {
            pJVar9 = EGMONPGHHDP__OKBKFJKEAAG(__this_01,(MethodInfo *)0x0);
            if (pJVar9 == (RaidConfig_CKEMIAEPGKD_o *)0x0) {
              return;
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
            pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if (pAVar10 != (Roster_o *)0x0) {
              pMVar11 = Roster__HKIEGNBOFCD(pAVar10,StringLiteral_15924/*"_BPDailyQuestCount"*/,0,(MethodInfo *)0x0);
              if (DAT_04565b7d == '\0') {
                FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                DAT_04565b7d = '\x01';
              }
              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pSVar6 = StringLiteral_3316/*"BPDailyQuestCount"*/;
              pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
              if (pMVar11 == (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) {
                pSVar7 = (System_String_o *)0x0;
              }
              else {
                pSVar7 = (pMVar11->fields).JAICMIMBIOA;
              }
              iVar3 = PCOEHCPGBBG__JBGCINPPLAC(pSVar7,0,(MethodInfo *)0x0);
              _local_38 = (Il2CppMethodPointer)CONCAT44(iVar3 + 1,local_38);
              pSVar7 = System_Int32__ToString((int32_t)&stack0xffffffffffffffcc,(MethodInfo *)0x0);
              if (pAVar10 != (Roster_o *)0x0) {
                Roster__LMJFPPDAPBF(pAVar10,pSVar6,pSVar7,0,(MethodInfo *)0x0);
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
                pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                if (pAVar10 != (Roster_o *)0x0) {
                  pMVar11 = Roster__HKIEGNBOFCD
                                      (pAVar10,StringLiteral_15925/*"_BPDailyQuestTime"*/,0,(MethodInfo *)0x0);
                  if (DAT_04565b7d == '\0') {
                    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    DAT_04565b7d = '\x01';
                  }
                  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  pSVar6 = StringLiteral_3317/*"BPDailyQuestTime"*/;
                  if (pMVar11 == (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) {
                    pSVar7 = (System_String_o *)0x0;
                  }
                  else {
                    pSVar7 = (pMVar11->fields).JAICMIMBIOA;
                  }
                  pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                  iVar3 = PCOEHCPGBBG__JBGCINPPLAC(pSVar7,0,(MethodInfo *)0x0);
                  pPVar14 = (CNNEPEHMINA->fields).IMNALGKNMNP;
                  if ((pPVar14 != (PGICCMFLDPI_o *)0x0) &&
                     (pPVar15 = (CNNEPEHMINA->fields).LBKLNIPHGMM, pPVar15 != (PGICCMFLDPI_o *)0x0))
                  {
                    __this_02 = (float)((pPVar14->fields).GDKPGIBMFPA -
                                       (pPVar15->fields).GDKPGIBMFPA) / 60000.0 + (float)iVar3;
                    _local_38 = (Il2CppMethodPointer)CONCAT44(uStack_34,__this_02);
                    pSVar7 = System_Single__ToString
                                       (__this_02,(MethodInfo *)&stack0xffffffffffffffc8);
                    if (pAVar10 != (Roster_o *)0x0) {
                      Roster__LMJFPPDAPBF(pAVar10,pSVar6,pSVar7,0,(MethodInfo *)0x0);
                      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      if (DAT_04565b7d == '\0') {
                    /* try { // try from 0326679c to 033667a3 has its CatchHandler @ 03266c04 */
                    /* try { // try from 032667a4 to 033667a7 has its CatchHandler @ 03266c00 */
                        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 032667a8 to 033667ab has its CatchHandler @ 03266a90 */
                    /* try { // try from 032667ac to 033667b3 has its CatchHandler @ 03266a84 */
                        DAT_04565b7d = '\x01';
                      }
                    /* try { // try from 032667b4 to 033667b7 has its CatchHandler @ 032669d4 */
                    /* try { // try from 032667b8 to 033667bb has its CatchHandler @ 032669bc */
                      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 032667bc to 033667bf has its CatchHandler @ 032669b4 */
                        thunk_FUN_01ba7564();
                    /* try { // try from 032667c0 to 033667c3 has its CatchHandler @ 032668e8 */
                      }
                    /* try { // try from 032667c4 to 033667c7 has its CatchHandler @ 032668e0 */
                    /* try { // try from 032667c8 to 033667cf has its CatchHandler @ 0326682c */
                      pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                      if (pAVar10 != (Roster_o *)0x0) {
                    /* try { // try from 032667d0 to 033667d7 has its CatchHandler @ 03266824 */
                    /* try { // try from 032667d8 to 033667df has its CatchHandler @ 03263c08 */
                        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar10,false,(MethodInfo *)0x0);
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
      break;
    }
    pBVar12 = (__this->fields)._MBJGPIOFAEE_k__BackingField;
    index = index + 1;
    if (pBVar12 == (BPBGAAHBFKH_o *)0x0) break;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032667f0 to 033667f7 has its CatchHandler @ 03263c08 */
  FUN_01bab8c8();
}


// ===== private void ABDPBADILFN(BPBGAAHBFKH CJNHFNHJHPE)  [RVA 0x31667F4]
// RaidQuestsManager$$ABDPBADILFN @ RVA 0x31667F4

void RaidQuestsManager__ABDPBADILFN(RaidQuestsManager_o *__this,BPBGAAHBFKH_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._MBJGPIOFAEE_k__BackingField = CJNHFNHJHPE;
                    /* try { // try from 032667f8 to 033667fb has its CatchHandler @ 0326680c */
  thunk_FUN_01c20e04();
  return;
}


// ===== public bool CCIBENJEHCD(List<BDMABHJEEGD> IHBNELGLLEB)  [RVA 0x31667FC]
// RaidQuestsManager$$CCIBENJEHCD @ RVA 0x31667FC

bool RaidQuestsManager__CCIBENJEHCD
               (RaidQuestsManager_o *__this,System_Collections_Generic_List_BDMABHJEEGD__o *IHBNELGLLEB,
               MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  bool bVar5;
  DialogsManager_o *__this_00;
  UnityEngine_Object_o *x;
  Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *pGVar6;
  Il2CppObject *pIVar7;
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this_01;
  System_Collections_Generic_List_NBLEEDEAPHB__o *IJIPABLCAKE;
  NBLEEDEAPHB_o *__this_02;
  System_Action_object__o *BLMFLPJJMPF;
  BPBGAAHBFKH_o *pBVar8;
  NBLEEDEAPHB_array *pNVar9;
  int index;
  int iVar10;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
                    /* try { // try from 032667fc to 033667ff has its CatchHandler @ 03266808 */
                    /* try { // try from 03266800 to 0336684b has its CatchHandler @ 03263c08 */
                    /* catch() { ... } // from try @ 032667fc with catch @ 03266808 */
                    /* catch() { ... } // from try @ 032667f8 with catch @ 0326680c */
                    /* catch() { ... } // from try @ 032667ec with catch @ 03266810 */
                    /* catch() { ... } // from try @ 032667e8 with catch @ 03266814 */
                    /* catch() { ... } // from try @ 032667e4 with catch @ 03266818 */
                    /* catch() { ... } // from try @ 032667e0 with catch @ 0326681c */
                    /* catch() { ... } // from try @ 03265b24 with catch @ 03266820 */
                    /* catch() { ... } // from try @ 032667d0 with catch @ 03266824 */
  if ((DAT_045668c0 & 1) == 0) {
                    /* catch() { ... } // from try @ 032658ec with catch @ 03266828 */
                    /* catch() { ... } // from try @ 032667c8 with catch @ 0326682c */
                    /* catch() { ... } // from try @ 03265ac4 with catch @ 03266830 */
    FUN_01bab630(&System_Action<object>_TypeInfo);
                    /* catch() { ... } // from try @ 03265a68 with catch @ 03266834 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BDMABHJEEGD>_Dispose__);
                    /* try { // try from 0326684c to 0336684f has its CatchHandler @ 03266864 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BDMABHJEEGD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BDMABHJEEGD>_get_Current__);
                    /* catch() { ... } // from try @ 0326684c with catch @ 03266864 */
                    /* try { // try from 0326686c to 033668df has its CatchHandler @ 03266cd0 */
    FUN_01bab630(&MainSettings_TypeInfo);
    FUN_01bab630(&Method_GALHNMPIEHA_HEHKMLCAEHH__);
    FUN_01bab630(&Method_GCIFMNHADDF_BFJGHKKGOJC<RaidDailyDialog>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BDMABHJEEGD>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
    FUN_01bab630(&NBLEEDEAPHB_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Count__);
                    /* catch() { ... } // from try @ 032667c4 with catch @ 032668e0
                       try { // try from 032668e0 to 0336690b has its CatchHandler @ 03263c08 */
                    /* catch() { ... } // from try @ 03265d2c with catch @ 032668e4 */
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Item__);
                    /* catch() { ... } // from try @ 032667c0 with catch @ 032668e8 */
                    /* catch() { ... } // from try @ 03265d38 with catch @ 032668ec */
                    /* catch() { ... } // from try @ 0326588c with catch @ 032668f0 */
    FUN_01bab630(&StringLiteral_16974/*"character_sensei_small"*/);
                    /* catch() { ... } // from try @ 03265830 with catch @ 032668f4 */
    FUN_01bab630(&StringLiteral_5053/*"DailyNotify"*/);
    FUN_01bab630(&StringLiteral_17763/*"dlgBtnRedirect"*/);
                    /* try { // try from 0326690c to 0336690f has its CatchHandler @ 03266930 */
    FUN_01bab630(&StringLiteral_10956/*"RaidQuestsManager::showNewQuestNotification -> probably quests have already completed"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045668c0 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
                    /* catch() { ... } // from try @ 0326690c with catch @ 03266930 */
  local_70.fields._current = (Il2CppObject *)0x0;
                    /* try { // try from 03266938 to 033669ab has its CatchHandler @ 03266cd0 */
  if ((__this->fields)._MBJGPIOFAEE_k__BackingField == (BPBGAAHBFKH_o *)0x0) {
    return false;
  }
  __this_00 = DialogsManager__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (DialogsManager_o *)0x0) {
    x = (UnityEngine_Object_o *)
        DialogsManager__BFJGHKKGOJC<object>
                  (__this_00,Method_GCIFMNHADDF_BFJGHKKGOJC<RaidDailyDialog>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      return false;
    }
    if (IHBNELGLLEB != (System_Collections_Generic_List_BDMABHJEEGD__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,(System_Collections_Generic_List_object__o *)IHBNELGLLEB,
                 Method_System_Collections_Generic_List<BDMABHJEEGD>_GetEnumerator__);
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
                    /* catch() { ... } // from try @ 03265660 with catch @ 032669ac
                       try { // try from 032669ac to 033669eb has its CatchHandler @ 03263c08 */
                    /* catch() { ... } // from try @ 0326566c with catch @ 032669b0 */
                    /* catch() { ... } // from try @ 032667bc with catch @ 032669b4 */
                    /* catch() { ... } // from try @ 03265654 with catch @ 032669b8 */
      local_70.fields._list = local_88.fields._list;
                    /* catch() { ... } // from try @ 032667b8 with catch @ 032669bc */
      local_70.fields._current = local_88.fields._current;
                    /* catch() { ... } // from try @ 03265678 with catch @ 032669c0 */
                    /* catch() { ... } // from try @ 03265cc8 with catch @ 032669c4 */
                    /* catch() { ... } // from try @ 03265c6c with catch @ 032669c8 */
      iVar10 = 0;
                    /* catch() { ... } // from try @ 03265448 with catch @ 032669cc */
                    /* catch() { ... } // from try @ 03265d44 with catch @ 032669d0 */
                    /* catch() { ... } // from try @ 032667b4 with catch @ 032669d4 */
      while (bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_70,
                                Method_System_Collections_Generic_List_Enumerator<BDMABHJEEGD>_MoveNext__
                               ), pIVar4 = local_70.fields._current, bVar5) {
        pBVar8 = (__this->fields)._MBJGPIOFAEE_k__BackingField;
        if (pBVar8 == (BPBGAAHBFKH_o *)0x0) {
LAB_03266c84:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        index = 0;
                    /* try { // try from 032669ec to 033669ef has its CatchHandler @ 03266a08 */
        while( true ) {
          pGVar6 = (pBVar8->fields).IGPJEDLPAGI;
          if (pGVar6 == (Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if ((pGVar6->fields).count <= index) break;
          if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* catch() { ... } // from try @ 032669ec with catch @ 03266a08 */
          iVar1 = *(int *)&pIVar4[1].monitor;
                    /* try { // try from 03266a10 to 03366a83 has its CatchHandler @ 03266cd0 */
          pIVar7 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                             ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar6,index,
                              Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Item__
                             );
          if (pIVar7 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if (iVar1 == *(int *)&pIVar7[1].monitor) {
            pBVar8 = (__this->fields)._MBJGPIOFAEE_k__BackingField;
            if (pBVar8 == (BPBGAAHBFKH_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pGVar6 = (pBVar8->fields).IGPJEDLPAGI;
            if (pGVar6 == (Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pIVar7 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                               ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar6,index,
                                Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Item__
                               );
            if (pIVar7 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if (pIVar7[2].monitor == (void *)0x0) {
              iVar10 = iVar10 + 1;
            }
          }
          pBVar8 = (__this->fields)._MBJGPIOFAEE_k__BackingField;
          index = index + 1;
          if (pBVar8 == (BPBGAAHBFKH_o *)0x0) goto LAB_03266c84;
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<BDMABHJEEGD>_Dispose__)
      ;
      if (iVar10 == 0) {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* catch() { ... } // from try @ 03266aa8 with catch @ 03266acc */
                    /* try { // try from 03266ad4 to 03366b47 has its CatchHandler @ 03266cd0 */
        UnityEngine_Debug__Log(StringLiteral_10956/*"RaidQuestsManager::showNewQuestNotification -> probably quests have already completed"*/,(MethodInfo *)0x0);
        return false;
      }
                    /* catch() { ... } // from try @ 032667ac with catch @ 03266a84
                       try { // try from 03266a84 to 03366aa7 has its CatchHandler @ 03263c08 */
                    /* catch() { ... } // from try @ 032655f0 with catch @ 03266a88 */
                    /* catch() { ... } // from try @ 03265594 with catch @ 03266a8c */
                    /* catch() { ... } // from try @ 032667a8 with catch @ 03266a90 */
      if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar5 = MainSettings__PBHLPMFKMAH((MethodInfo *)0x0);
      if (bVar5) {
        return true;
      }
      __this_01 = Nekki_SF2_GUI_Dialogs_NotificationsGame__get_Instance((MethodInfo *)0x0);
      IJIPABLCAKE = (System_Collections_Generic_List_NBLEEDEAPHB__o *)
                    thunk_FUN_01bda818(System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
                 Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
      __this_02 = (NBLEEDEAPHB_o *)thunk_FUN_01bda818(NBLEEDEAPHB_TypeInfo);
                    /* catch() { ... } // from try @ 032653d0 with catch @ 03266b48
                       try { // try from 03266b48 to 03366b67 has its CatchHandler @ 03263c08 */
                    /* catch() { ... } // from try @ 03265374 with catch @ 03266b4c */
                    /* catch() { ... } // from try @ 03265434 with catch @ 03266b50 */
                    /* try { // try from 03266b68 to 03366b6b has its CatchHandler @ 03266b84 */
      NBLEEDEAPHB___ctor(__this_02,StringLiteral_5053/*"DailyNotify"*/,StringLiteral_1/*""*/,StringLiteral_1/*""*/,
                         StringLiteral_1/*""*/,0,-1,(IGFGDDANEPE_o *)0x0,(LBMOOFGGPEB_o *)0x0,0,
                         (AMJMGFCCAKN_o *)0x0,(MethodInfo *)0x0);
      lVar3 = Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__;
                    /* catch() { ... } // from try @ 03266b68 with catch @ 03266b84 */
      if (IJIPABLCAKE != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
                    /* try { // try from 03266b8c to 03366bff has its CatchHandler @ 03266cd0 */
        pNVar9 = (IJIPABLCAKE->fields)._items;
        (IJIPABLCAKE->fields)._version = (IJIPABLCAKE->fields)._version + 1;
        if (pNVar9 != (NBLEEDEAPHB_array *)0x0) {
          uVar2 = (IJIPABLCAKE->fields)._size;
          if (uVar2 < (uint)pNVar9->max_length) {
            (IJIPABLCAKE->fields)._size = uVar2 + 1;
            pNVar9->m_Items[(int)uVar2] = __this_02;
            thunk_FUN_01c20e04(pNVar9->m_Items + (int)uVar2,__this_02);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
                       (Il2CppObject *)__this_02,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
          BLMFLPJJMPF = (System_Action_object__o *)
                        thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                    /* catch() { ... } // from try @ 032667a4 with catch @ 03266c00
                       try { // try from 03266c00 to 03366c37 has its CatchHandler @ 03263c08 */
                    /* catch() { ... } // from try @ 0326679c with catch @ 03266c04 */
                    /* catch() { ... } // from try @ 032651a8 with catch @ 03266c08 */
                    /* catch() { ... } // from try @ 0326514c with catch @ 03266c0c */
                    /* catch() { ... } // from try @ 0326520c with catch @ 03266c10 */
          System_Action<object>___ctor();
          if (__this_01 != (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) {
                    /* try { // try from 03266c38 to 03366c3b has its CatchHandler @ 03266c4c */
                    /* catch() { ... } // from try @ 03266c38 with catch @ 03266c4c */
                    /* try { // try from 03266c54 to 03366cbb has its CatchHandler @ 03266cd0 */
            Nekki_SF2_GUI_Dialogs_NotificationsGame__OpenNotification
                      (__this_01,StringLiteral_16974/*"character_sensei_small"*/,IJIPABLCAKE,BLMFLPJJMPF,StringLiteral_17763/*"dlgBtnRedirect"*/,1,
                       0.0,0,false,true,1.0,(System_String_o *)0x0,(MethodInfo *)0x0);
            return true;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void NECEOCDKNIJ(BDMABHJEEGD JOBNGBCPEGO)  [RVA 0x3166D2C]
// RaidQuestsManager$$NECEOCDKNIJ @ RVA 0x3166D2C

void RaidQuestsManager__NECEOCDKNIJ(RaidQuestsManager_o *__this,BDMABHJEEGD_o *JOBNGBCPEGO,MethodInfo *method)

{
  bool bVar1;
  SFRequestSender_o *__this_00;
  Google_Protobuf_WellKnownTypes_Int32Value_o *__this_01;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)JOBNGBCPEGO;
  if ((DAT_045668c1 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_GALHNMPIEHA_MOFPGBHFKMM__);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Int32Value_TypeInfo);
    FUN_01bab630(&StringLiteral_17577/*"daily_quest_renew"*/);
    DAT_045668c1 = 1;
    method_00 = extraout_x1;
  }
  bVar1 = RaidQuestsManager__OALAPMJJBLJ(JOBNGBCPEGO,method_00);
  if (bVar1) {
    __this_00 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
    __this_01 = (Google_Protobuf_WellKnownTypes_Int32Value_o *)
                thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_Int32Value_TypeInfo);
    Google_Protobuf_WellKnownTypes_Int32Value___ctor(__this_01,(MethodInfo *)0x0);
    if ((JOBNGBCPEGO != (BDMABHJEEGD_o *)0x0) &&
       (__this_01 != (Google_Protobuf_WellKnownTypes_Int32Value_o *)0x0)) {
      (__this_01->fields).value_ = (JOBNGBCPEGO->fields).OHMDCKEDOGH;
      BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                    thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_00 != (SFRequestSender_o *)0x0) {
        KDPDBGNOFEN__KLNMLOOCAAO
                  ((KDPDBGNOFEN_o *)__this_00,StringLiteral_17577/*"daily_quest_renew"*/,
                   (Google_Protobuf_IMessage_o *)__this_01,BLMFLPJJMPF,0.0,(Il2CppObject *)0x0,
                   (MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void DGOGCOKGHKF(Action CJNHFNHJHPE)  [RVA 0x3166E44]
// RaidQuestsManager$$DGOGCOKGHKF @ RVA 0x3166E44

void RaidQuestsManager__DGOGCOKGHKF(RaidQuestsManager_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_045668c2 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_045668c2 = 1;
  }
  ppSVar4 = &(__this->fields).NGKIIKLBJLE;
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


// ===== public void CDGDOLDEIBD(BPBGAAHBFKH CHGANLEMEGJ)  [RVA 0x3166EE0]
// RaidQuestsManager$$CDGDOLDEIBD @ RVA 0x3166EE0

/* WARNING: Type propagation algorithm not settling */

void RaidQuestsManager__CDGDOLDEIBD(RaidQuestsManager_o *__this,BPBGAAHBFKH_o *CHGANLEMEGJ,MethodInfo *method)

{
  int32_t length;
  Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *pGVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  BDMABHJEEGD_o *CNNEPEHMINA;
  CFMDGLMCNIL_o *__this_00;
  FCAPJDHLLAP_o *__this_01;
  BPBGAAHBFKH_o *pBVar4;
  System_Action_o *pSVar5;
  System_Collections_Generic_List_BDMABHJEEGD__o *pSVar6;
  BPBGAAHBFKH_o **ppBVar7;
  int CJNHFNHJHPE;
  int iVar8;
  int iVar9;
  
  if ((DAT_045668c3 & 1) == 0) {
    FUN_01bab630(&FCAPJDHLLAP_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BDMABHJEEGD>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BDMABHJEEGD>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Item__);
    DAT_045668c3 = 1;
  }
  ppBVar7 = &(__this->fields)._MBJGPIOFAEE_k__BackingField;
  if (*ppBVar7 != (BPBGAAHBFKH_o *)0x0) {
    if ((CHGANLEMEGJ != (BPBGAAHBFKH_o *)0x0) &&
       (pGVar1 = (CHGANLEMEGJ->fields).IGPJEDLPAGI,
       pGVar1 != (Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *)0x0)) {
      iVar8 = 0;
      CJNHFNHJHPE = 0;
      while( true ) {
        iVar9 = (pGVar1->fields).count;
        if (iVar9 <= iVar8) {
          if (iVar9 < 1) goto LAB_03267040;
          iVar8 = 0;
          goto LAB_03267010;
        }
        method = Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Item__;
        pIVar2 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                           ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,iVar8,
                            (MethodInfo_295F6AC *)
                            Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Item__
                           );
        pBVar4 = *ppBVar7;
        if (pBVar4 == (BPBGAAHBFKH_o *)0x0) break;
        iVar9 = 0;
        while( true ) {
          pGVar1 = (pBVar4->fields).IGPJEDLPAGI;
          if (pGVar1 == (Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *)0x0)
          goto LAB_03267160;
          if ((pGVar1->fields).count <= iVar9) break;
          method = Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Item__;
          pIVar3 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                             ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,iVar9,
                              (MethodInfo_295F6AC *)
                              Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Item__
                             );
          if ((pIVar2 == (Il2CppObject *)0x0) || (pIVar3 == (Il2CppObject *)0x0)) goto LAB_03267160;
          if (*(int *)&pIVar2[1].monitor == *(int *)&pIVar3[1].monitor) goto LAB_03266ff4;
          pBVar4 = *ppBVar7;
          iVar9 = iVar9 + 1;
          if (pBVar4 == (BPBGAAHBFKH_o *)0x0) goto LAB_03267160;
        }
        CJNHFNHJHPE = CJNHFNHJHPE + 1;
LAB_03266ff4:
        pGVar1 = (CHGANLEMEGJ->fields).IGPJEDLPAGI;
        iVar8 = iVar8 + 1;
        if (pGVar1 == (Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *)0x0) break;
      }
    }
    goto LAB_03267160;
  }
  *ppBVar7 = CHGANLEMEGJ;
  thunk_FUN_01c20e04(ppBVar7,CHGANLEMEGJ);
  goto LAB_03267078;
  while (iVar8 = iVar8 + 1, iVar8 < (pGVar1->fields).count) {
LAB_03267010:
    method = Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Item__;
    CNNEPEHMINA = (BDMABHJEEGD_o *)
                  Google_Protobuf_Collections_RepeatedField<object>__get_Item
                            ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,iVar8,
                             (MethodInfo_295F6AC *)
                             Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Item__
                            );
    RaidQuestsManager__IDLJMOJKHKF(__this,CNNEPEHMINA,method);
    pGVar1 = (CHGANLEMEGJ->fields).IGPJEDLPAGI;
    if (pGVar1 == (Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *)0x0)
    goto LAB_03267160;
  }
LAB_03267040:
  *ppBVar7 = CHGANLEMEGJ;
  thunk_FUN_01c20e04(ppBVar7,CHGANLEMEGJ);
  if (0 < CJNHFNHJHPE) {
    RaidQuestsManager__HOPNFIPNLHB(__this,CJNHFNHJHPE,method);
  }
LAB_03267078:
  pSVar5 = (__this->fields).IFNPPPGCCKO;
  if (pSVar5 != (System_Action_o *)0x0) {
    (*(code *)(pSVar5->fields).super.super.invoke_impl)
              ((pSVar5->fields).super.super.method_code,(pSVar5->fields).super.super.method);
    pSVar6 = (__this->fields).MBGDIKJNDMJ;
    if (pSVar6 != (System_Collections_Generic_List_BDMABHJEEGD__o *)0x0) {
      if ((pSVar6->fields)._size < 1) {
        return;
      }
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = HJPEKDOPBHN__POHONLHCOJN((MethodInfo *)0x0);
      pSVar6 = (__this->fields).MBGDIKJNDMJ;
      __this_01 = (FCAPJDHLLAP_o *)thunk_FUN_01bda818(FCAPJDHLLAP_TypeInfo);
      FCAPJDHLLAP___ctor(__this_01,pSVar6,(MethodInfo *)0x0);
      if (__this_00 != (CFMDGLMCNIL_o *)0x0) {
        CFMDGLMCNIL__MPFFOIIBAKO(__this_00,(OHPOFOPJIMB_o *)__this_01,false,(MethodInfo *)0x0);
        pSVar6 = (__this->fields).MBGDIKJNDMJ;
        if (pSVar6 != (System_Collections_Generic_List_BDMABHJEEGD__o *)0x0) {
                    /* try { // try from 03267110 to 033671bf has its CatchHandler @ 03267110
                       catch() { ... } // from try @ 03267110 with catch @ 03267110
                       catch() { ... } // from try @ 032671e8 with catch @ 03267110
                       catch() { ... } // from try @ 032672a4 with catch @ 03267110
                       catch() { ... } // from try @ 032672d0 with catch @ 03267110
                       catch() { ... } // from try @ 03267310 with catch @ 03267110 */
          length = (pSVar6->fields)._size;
          (pSVar6->fields)._size = 0;
          (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
          if (length < 1) {
            return;
          }
          System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,length,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_03267160:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NBDNNGGNMBD(int CJNHFNHJHPE)  [RVA 0x3167164]
// RaidQuestsManager$$NBDNNGGNMBD @ RVA 0x3167164

void RaidQuestsManager__NBDNNGGNMBD(RaidQuestsManager_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._BADKBIBHMEJ_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private void MOFPGBHFKMM(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3165690]
// RaidQuestsManager$$MOFPGBHFKMM @ RVA 0x3165690

void RaidQuestsManager__MOFPGBHFKMM(RaidQuestsManager_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  BPBGAAHBFKH_o *CHGANLEMEGJ;
  System_String_o *message;
  KEFHDOHHHML_o *IDCGLBOIAFJ_00;
  Il2CppObject *pIVar2;
  int32_t local_24;
  
  if ((DAT_045668c4 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<BPBGAAHBFKH>__);
    FUN_01bab630(&StringLiteral_10955/*"RaidQuestsManager::onQuestsRefreshed"*/);
    FUN_01bab630(&StringLiteral_5924/*"Error refreshing quests: {0}"*/);
    DAT_045668c4 = 1;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__Log(StringLiteral_10955/*"RaidQuestsManager::onQuestsRefreshed"*/,(MethodInfo *)0x0);
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (bVar1) {
      CHGANLEMEGJ = (BPBGAAHBFKH_o *)
                    KEFHDOHHHML__PFNEPJAFEDF<object>
                              (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<BPBGAAHBFKH>__);
      RaidQuestsManager__CDGDOLDEIBD(__this,CHGANLEMEGJ,method);
      RaidQuestsManager__MFKHGFEDMIO(__this,IDCGLBOIAFJ_00,method);
      pIVar2 = (IDCGLBOIAFJ->fields)._GOFDPKCMIJO_k__BackingField;
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (pIVar2->klass == (Il2CppClass *)System_Action_TypeInfo)) {
        (*pIVar2[1].monitor)(pIVar2[4].klass,pIVar2[2].monitor);
      }
    }
    else {
      local_24 = (IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField;
      pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
      message = System_String__Format(StringLiteral_5924/*"Error refreshing quests: {0}"*/,pIVar2,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
    }
    (__this->fields).HDPCPPJGGCI = false;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x316716C]
// RaidQuestsManager$$.ctor @ RVA 0x316716C

void RaidQuestsManager___ctor(RaidQuestsManager_o *__this,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  System_Collections_Generic_List_BDMABHJEEGD__o *pSVar2;
  System_Collections_Generic_List_BDMABHJEEGD__o **ppSVar3;
  SFRequestSender_o *pKVar4;
  System_Action_KEFHDOHHHML__o *EKDIECDFOIO;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_o *pSVar5;
  DCHAJIMIFHP_o *__this_00;
  
  if ((DAT_045668c5 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_GALHNMPIEHA_AKEKGJAFBOC__);
                    /* try { // try from 032671c0 to 033671c7 has its CatchHandler @ 032672b4 */
    FUN_01bab630(&Method_GALHNMPIEHA_IAKHIFOFLGO__);
    FUN_01bab630(&Method_GALHNMPIEHA_MFKHGFEDMIO__);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
                    /* try { // try from 032671e0 to 033671e7 has its CatchHandler @ 032672a8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<BDMABHJEEGD>__ctor__);
                    /* try { // try from 032671e8 to 0336729b has its CatchHandler @ 03267110 */
    FUN_01bab630(&System_Collections_Generic_List<BDMABHJEEGD>_TypeInfo);
    FUN_01bab630(&Method_GALHNMPIEHA_<>c_AAPGKNAKKLH__);
    FUN_01bab630(&Method_GALHNMPIEHA_<>c_OMOJOECIDBN__);
    FUN_01bab630(&RaidQuestsManager_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_20713/*"season_started_event"*/);
    DAT_045668c5 = 1;
    method = extraout_x1;
  }
  if ((RaidQuestsManager_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(RaidQuestsManager_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar5 = RaidQuestsManager_<>c_TypeInfo->static_fields->__9__23_0;
  if (pSVar5 == (System_Action_o *)0x0) {
    if ((RaidQuestsManager_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(RaidQuestsManager_<>c_TypeInfo,method);
    }
    pSVar5 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar1 = &RaidQuestsManager_<>c_TypeInfo->static_fields->__9__23_0;
                    /* try { // try from 0326729c to 0336729f has its CatchHandler @ 032672b0 */
    *ppSVar1 = pSVar5;
                    /* try { // try from 032672a0 to 033672a3 has its CatchHandler @ 032672ac */
    thunk_FUN_01c20e04(ppSVar1,pSVar5);
  }
                    /* try { // try from 032672a4 to 033672cb has its CatchHandler @ 03267110 */
  if (__this != (RaidQuestsManager_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032671e0 with catch @ 032672a8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032672a0 with catch @ 032672ac
                        */
    (__this->fields).IFNPPPGCCKO = pSVar5;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326729c with catch @ 032672b0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032671c0 with catch @ 032672b4
                        */
    thunk_FUN_01c20e04(&__this->fields,pSVar5);
    if ((RaidQuestsManager_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 032672cc to 033672cf has its CatchHandler @ 032672f8 */
                    /* try { // try from 032672d0 to 03367307 has its CatchHandler @ 03267110 */
    pSVar5 = RaidQuestsManager_<>c_TypeInfo->static_fields->__9__23_1;
    if (pSVar5 == (System_Action_o *)0x0) {
      if ((RaidQuestsManager_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* catch() { ... } // from try @ 032672cc with catch @ 032672f8 */
      pSVar5 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 03267308 to 0336730f has its CatchHandler @ 03267324 */
                    /* try { // try from 03267310 to 0336731b has its CatchHandler @ 03267110 */
                    /* try { // try from 0326731c to 03367323 has its CatchHandler @ 03267324 */
      System_Action___ctor();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03267308 with catch @ 03267324
                       catch(type#2 @ 00000000) { ... } // from try @ 0326731c with catch @ 03267324
                        */
      ppSVar1 = &RaidQuestsManager_<>c_TypeInfo->static_fields->__9__23_1;
      *ppSVar1 = pSVar5;
      thunk_FUN_01c20e04(ppSVar1,pSVar5);
    }
    ppSVar1 = &(__this->fields).NGKIIKLBJLE;
    *ppSVar1 = pSVar5;
    thunk_FUN_01c20e04(ppSVar1,pSVar5);
    pSVar2 = (System_Collections_Generic_List_BDMABHJEEGD__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<BDMABHJEEGD>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<BDMABHJEEGD>__ctor__);
    ppSVar3 = &(__this->fields)._LGNMHMIHFAF_k__BackingField;
    *ppSVar3 = pSVar2;
    thunk_FUN_01c20e04(ppSVar3,pSVar2);
    pSVar2 = (System_Collections_Generic_List_BDMABHJEEGD__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<BDMABHJEEGD>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<BDMABHJEEGD>__ctor__);
    ppSVar3 = &(__this->fields).MBGDIKJNDMJ;
    *ppSVar3 = pSVar2;
    thunk_FUN_01c20e04(ppSVar3,pSVar2);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields).HDPCPPJGGCI = false;
    (__this->fields)._BADKBIBHMEJ_k__BackingField = 0;
    pKVar4 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
    if (pKVar4 != (SFRequestSender_o *)0x0) {
      __this_00 = (pKVar4->fields).super.FNHOHLGNHGN;
      EKDIECDFOIO = (System_Action_KEFHDOHHHML__o *)
                    thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_00 != (DCHAJIMIFHP_o *)0x0) {
        DCHAJIMIFHP__MPFFOIIBAKO(__this_00,StringLiteral_20713/*"season_started_event"*/,EKDIECDFOIO,(MethodInfo *)0x0);
        pKVar4 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
        pSVar5 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (pKVar4 != (SFRequestSender_o *)0x0) {
          SFRequestSender__HKAALOKPBPG(pKVar4,pSVar5,(MethodInfo *)0x0);
          pSVar5 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          System_Action___ctor();
          if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          Nekki_Utils_GlobalTimer__add_OnTick(pSVar5,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GAFJAEKNLPL(Action CJNHFNHJHPE)  [RVA 0x31674A4]
// RaidQuestsManager$$GAFJAEKNLPL @ RVA 0x31674A4

void RaidQuestsManager__GAFJAEKNLPL(RaidQuestsManager_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_045668c6 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_045668c6 = 1;
  }
  ppSVar4 = &(__this->fields).NGKIIKLBJLE;
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


// ===== public void BIDBPFJNEJI(Action CJNHFNHJHPE)  [RVA 0x3167540]
// RaidQuestsManager$$BIDBPFJNEJI @ RVA 0x3167540

void RaidQuestsManager__BIDBPFJNEJI(RaidQuestsManager_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o *source;
  
  if ((DAT_045668c7 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_045668c7 = 1;
  }
  source = (__this->fields).IFNPPPGCCKO;
                    /* try { // try from 0326758c to 03367833 has its CatchHandler @ 0326758c
                       catch() { ... } // from try @ 0326758c with catch @ 0326758c
                       catch() { ... } // from try @ 032679f0 with catch @ 0326758c
                       catch() { ... } // from try @ 03267a88 with catch @ 0326758c
                       catch() { ... } // from try @ 03267a90 with catch @ 0326758c
                       catch() { ... } // from try @ 03267b4c with catch @ 0326758c */
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(&__this->fields,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== private static void CPKIMMEEOCF(BDMABHJEEGD JOBNGBCPEGO)  [RVA 0x3165C88]
// RaidQuestsManager$$CPKIMMEEOCF @ RVA 0x3165C88

void RaidQuestsManager__CPKIMMEEOCF(BDMABHJEEGD_o *JOBNGBCPEGO,MethodInfo *method)

{
  return;
}


// ===== public static void DJJAINGGBJN()  [RVA 0x31675DC]
// RaidQuestsManager$$DJJAINGGBJN @ RVA 0x31675DC

void RaidQuestsManager__DJJAINGGBJN(MethodInfo *method)

{
  MethodInfo *in_x1;
  
  RaidQuestsManager__JLEKFKKNFPB(0,in_x1);
  return;
}


// TypeDefIndex 2995
// Namespace: 
// public class KFOPKHPGAAK : BOFEMGGNODC
// Fields:
//   private KFOPKHPGAAK.JDLEFFOKMOH ACCIHBHMFPN; // 0x64
//   private LCKCDEKNLOA FNOJIPMNDPJ; // 0x68
//   private LCKCDEKNLOA FNGNIKNIEMM; // 0x70
//   private readonly SerialDisposable FMPHPEJBDGK; // 0x78

// ===== private void GMDKCENGNPO(bool LNGMMFHGAOC)  [RVA 0x34A535C]
// KFOPKHPGAAK$$GMDKCENGNPO @ RVA 0x34A535C

void KFOPKHPGAAK__GMDKCENGNPO(KFOPKHPGAAK_o *__this,bool LNGMMFHGAOC,MethodInfo *method)

{
  int iVar1;
  LCKCDEKNLOA_o *__this_00;
  
  iVar1 = *(int *)&(__this->fields).super.field_0x54;
                    /* try { // try from 035a537c to 036a537f has its CatchHandler @ 035a538c */
                    /* try { // try from 035a5380 to 036a53a7 has its CatchHandler @ 035a5268 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a532c with catch @ 035a5384
                        */
  if ((iVar1 == 1 && LNGMMFHGAOC) == (iVar1 != 2 || LNGMMFHGAOC)) {
    __this_00 = *(LCKCDEKNLOA_o **)&(__this->fields).ACCIHBHMFPN;
  }
  else {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a5318 with catch @ 035a5388
                        */
    __this_00 = (__this->fields).FNOJIPMNDPJ;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a537c with catch @ 035a538c
                        */
  }
                    /* try { // try from 035a53a8 to 036a53ab has its CatchHandler @ 035a53d4 */
  if (__this_00 != (LCKCDEKNLOA_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a5300 with catch @ 035a5390
                        */
    LCKCDEKNLOA__MAHFCKJGBPP(__this_00,(__this->fields).super.IJOKKFKPBEP,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035a53ac to 036a53e3 has its CatchHandler @ 035a5268 */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x34A53B0]
// KFOPKHPGAAK$$.ctor @ RVA 0x34A53B0

void KFOPKHPGAAK___ctor(KFOPKHPGAAK_o *__this,MethodInfo *method)

{
  LCKCDEKNLOA_o *pLVar1;
  int32_t *piVar2;
  LCKCDEKNLOA_o **ppLVar3;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 035a53a8 with catch @ 035a53d4 */
  if ((DAT_045684e4 & 1) == 0) {
                    /* try { // try from 035a53e4 to 036a53eb has its CatchHandler @ 035a5400 */
    FUN_01bab630(&LCKCDEKNLOA_TypeInfo);
                    /* try { // try from 035a53ec to 036a53f7 has its CatchHandler @ 035a5268 */
    FUN_01bab630(&UniRx_SerialDisposable_TypeInfo);
                    /* try { // try from 035a53f8 to 036a53ff has its CatchHandler @ 035a5400 */
    DAT_045684e4 = 1;
    method = extraout_x1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035a53e4 with catch @ 035a5400
                       catch(type#2 @ 00000000) { ... } // from try @ 035a53f8 with catch @ 035a5400
                        */
  pLVar1 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo,method);
  LCKCDEKNLOA___ctor(pLVar1,(MethodInfo *)0x0);
  piVar2 = &(__this->fields).ACCIHBHMFPN;
  *(LCKCDEKNLOA_o **)piVar2 = pLVar1;
  thunk_FUN_01c20e04(piVar2,pLVar1);
  pLVar1 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo);
  LCKCDEKNLOA___ctor(pLVar1,(MethodInfo *)0x0);
  ppLVar3 = &(__this->fields).FNOJIPMNDPJ;
  *ppLVar3 = pLVar1;
  thunk_FUN_01c20e04(ppLVar3,pLVar1);
  pLVar1 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(UniRx_SerialDisposable_TypeInfo);
  UniRx_SerialDisposable___ctor((UniRx_SerialDisposable_o *)pLVar1,(MethodInfo *)0x0);
  ppLVar3 = &(__this->fields).FNGNIKNIEMM;
  *ppLVar3 = pLVar1;
  thunk_FUN_01c20e04(ppLVar3,pLVar1);
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void NDJAJHFFPKP()  [RVA 0x34A5480]
// KFOPKHPGAAK$$NDJAJHFFPKP @ RVA 0x34A5480

void KFOPKHPGAAK__NDJAJHFFPKP(KFOPKHPGAAK_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  LCKCDEKNLOA_o *__this_00;
  
  if ((DAT_045684e5 & 1) == 0) {
    FUN_01bab630(&UniRx_Disposable_TypeInfo);
    DAT_045684e5 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).FNGNIKNIEMM;
  if ((UniRx_Disposable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UniRx_Disposable_TypeInfo,method);
  }
  if (__this_00 != (LCKCDEKNLOA_o *)0x0) {
    UniRx_SerialDisposable__set_Disposable
              ((UniRx_SerialDisposable_o *)__this_00,UniRx_Disposable_TypeInfo->static_fields->Empty
               ,(MethodInfo *)0x0);
    BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private KFOPKHPGAAK.JDLEFFOKMOH CNOMHMIIEAB(string CJNHFNHJHPE)  [RVA 0x34A54FC]
// KFOPKHPGAAK$$CNOMHMIIEAB @ RVA 0x34A54FC

int32_t KFOPKHPGAAK__CNOMHMIIEAB
                  (KFOPKHPGAAK_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if ((DAT_045684e6 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8617/*"Login"*/);
    FUN_01bab630(&StringLiteral_8662/*"Logout"*/);
    DAT_045684e6 = 1;
  }
  bVar1 = System_String__op_Equality(CJNHFNHJHPE,StringLiteral_8617/*"Login"*/,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 1;
  }
  else {
    bVar1 = System_String__op_Equality(CJNHFNHJHPE,StringLiteral_8662/*"Logout"*/,(MethodInfo *)0x0);
    iVar2 = 2;
    if (!bVar1) {
      iVar2 = 0;
    }
  }
                    /* try { // try from 035a5584 to 036a5617 has its CatchHandler @ 035a5584
                       catch() { ... } // from try @ 035a5584 with catch @ 035a5584
                       catch() { ... } // from try @ 035a563c with catch @ 035a5584
                       catch() { ... } // from try @ 035a5670 with catch @ 035a5584
                       catch() { ... } // from try @ 035a5698 with catch @ 035a5584
                       catch() { ... } // from try @ 035a56c8 with catch @ 035a5584 */
  return iVar2;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x34A5588]
// KFOPKHPGAAK$$MAHFCKJGBPP @ RVA 0x34A5588

void KFOPKHPGAAK__MAHFCKJGBPP(KFOPKHPGAAK_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  CPABHCDGLPI_o *JIAMBOGFHID;
  System_IObservable_bool__o *pSVar4;
  System_Action_T__o *pSVar5;
  System_IDisposable_o *pSVar6;
  VirtualInvokeData *pVVar7;
  CPABHCDGLPI_c *pCVar8;
  ulong uVar9;
  int32_t *piVar10;
  LCKCDEKNLOA_o *pLVar11;
  
  if ((DAT_045684e7 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&CPABHCDGLPI_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&Method_KFOPKHPGAAK_GMDKCENGNPO__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<bool>__);
    DAT_045684e7 = 1;
  }
  (*(__this->klass->vtable)._4_PKIFMKGDJJN.methodPtr)
            (__this,(__this->klass->vtable)._4_PKIFMKGDJJN.method);
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
                    /* try { // try from 035a5618 to 036a561f has its CatchHandler @ 035a567c */
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  JIAMBOGFHID = IFAMAAGNCBJ__IDPGLBKEEOP((MethodInfo *)0x0);
  if (JIAMBOGFHID == (CPABHCDGLPI_o *)0x0) {
    BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* try { // try from 035a5630 to 036a563b has its CatchHandler @ 035a5674 */
  iVar1 = *(int *)&(__this->fields).super.field_0x54;
                    /* try { // try from 035a563c to 036a566b has its CatchHandler @ 035a5584 */
  if (iVar1 == 2) {
    pLVar11 = (__this->fields).FNGNIKNIEMM;
    pSVar4 = BIELHCFJAMH__PPJJDLHLJOG(JIAMBOGFHID,(MethodInfo *)0x0);
    pSVar5 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
    System_Action<bool>___ctor();
    pSVar6 = UniRx_ObservableExtensions__Subscribe<bool>
                       ((System_IObservable_T__o *)pSVar4,pSVar5,
                        Method_UniRx_ObservableExtensions_Subscribe<bool>__);
                    /* try { // try from 035a5774 to 036a577b has its CatchHandler @ 035a57e8 */
    if (pLVar11 != (LCKCDEKNLOA_o *)0x0) {
      UniRx_SerialDisposable__set_Disposable
                ((UniRx_SerialDisposable_o *)pLVar11,pSVar6,(MethodInfo *)0x0);
      pCVar8 = JIAMBOGFHID->klass;
      uVar3._0_1_ = (pCVar8->_2).rank;
      uVar3._1_1_ = (pCVar8->_2).minimumAlignment;
                    /* try { // try from 035a5790 to 036a579b has its CatchHandler @ 035a57e0 */
      uVar9 = (ulong)uVar3;
                    /* try { // try from 035a579c to 036a57d7 has its CatchHandler @ 035a56e0 */
      if (uVar9 != 0) {
        piVar10 = &((pCVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)CPABHCDGLPI_TypeInfo) {
            pVVar7 = pCVar8->vtable + (*piVar10 + 4);
            goto LAB_035a582c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar7 = (VirtualInvokeData *)FUN_01b81914(JIAMBOGFHID,CPABHCDGLPI_TypeInfo,4);
LAB_035a582c:
                    /* catch() { ... } // from try @ 035a5800 with catch @ 035a582c */
                    /* try { // try from 035a5834 to 036a583b has its CatchHandler @ 035a5850 */
                    /* try { // try from 035a583c to 036a5847 has its CatchHandler @ 035a56e0 */
                    /* WARNING: Could not recover jumptable at 0x035a5840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar7->methodPtr)(JIAMBOGFHID,pVVar7->method);
      return;
    }
  }
  else if (iVar1 == 1) {
    pLVar11 = (__this->fields).FNGNIKNIEMM;
    pSVar4 = BIELHCFJAMH__PPJJDLHLJOG(JIAMBOGFHID,(MethodInfo *)0x0);
                    /* try { // try from 035a566c to 036a566f has its CatchHandler @ 035a5678 */
    pSVar5 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
                    /* try { // try from 035a5670 to 036a5693 has its CatchHandler @ 035a5584 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a5630 with catch @ 035a5674
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a566c with catch @ 035a5678
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a5618 with catch @ 035a567c
                        */
    System_Action<bool>___ctor();
                    /* try { // try from 035a5694 to 036a5697 has its CatchHandler @ 035a56b8 */
                    /* try { // try from 035a5698 to 036a56bf has its CatchHandler @ 035a5584 */
    pSVar6 = UniRx_ObservableExtensions__Subscribe<bool>
                       ((System_IObservable_T__o *)pSVar4,pSVar5,
                        Method_UniRx_ObservableExtensions_Subscribe<bool>__);
    if (pLVar11 != (LCKCDEKNLOA_o *)0x0) {
      UniRx_SerialDisposable__set_Disposable
                ((UniRx_SerialDisposable_o *)pLVar11,pSVar6,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035a5694 with catch @ 035a56b8 */
      pCVar8 = JIAMBOGFHID->klass;
      uVar2._0_1_ = (pCVar8->_2).rank;
      uVar2._1_1_ = (pCVar8->_2).minimumAlignment;
                    /* try { // try from 035a56c0 to 036a56c7 has its CatchHandler @ 035a56dc */
      uVar9 = (ulong)uVar2;
                    /* try { // try from 035a56c8 to 036a56d3 has its CatchHandler @ 035a5584 */
      if (uVar9 != 0) {
                    /* try { // try from 035a56d4 to 036a56db has its CatchHandler @ 035a56dc */
        piVar10 = &((pCVar8->_1).interfaceOffsets)->offset;
        do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035a56c0 with catch @ 035a56dc
                       catch(type#2 @ 00000000) { ... } // from try @ 035a56d4 with catch @ 035a56dc
                        */
                    /* try { // try from 035a56e0 to 036a5773 has its CatchHandler @ 035a56e0
                       catch() { ... } // from try @ 035a56e0 with catch @ 035a56e0
                       catch() { ... } // from try @ 035a579c with catch @ 035a56e0
                       catch() { ... } // from try @ 035a57dc with catch @ 035a56e0
                       catch() { ... } // from try @ 035a5804 with catch @ 035a56e0
                       catch() { ... } // from try @ 035a583c with catch @ 035a56e0 */
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)CPABHCDGLPI_TypeInfo) {
            pVVar7 = pCVar8->vtable + (*piVar10 + 1);
            goto LAB_035a5800;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar7 = (VirtualInvokeData *)FUN_01b81914(JIAMBOGFHID,CPABHCDGLPI_TypeInfo,1);
LAB_035a5800:
                    /* try { // try from 035a5800 to 036a5803 has its CatchHandler @ 035a582c */
                    /* try { // try from 035a5804 to 036a5833 has its CatchHandler @ 035a56e0 */
                    /* WARNING: Could not recover jumptable at 0x035a5818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar7->methodPtr)(JIAMBOGFHID,0,pVVar7->method);
      return;
    }
  }
  else {
    pLVar11 = (__this->fields).FNOJIPMNDPJ;
    if (pLVar11 != (LCKCDEKNLOA_o *)0x0) {
                    /* try { // try from 035a57d8 to 036a57db has its CatchHandler @ 035a57e4 */
                    /* try { // try from 035a57dc to 036a57ff has its CatchHandler @ 035a56e0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a5790 with catch @ 035a57e0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a57d8 with catch @ 035a57e4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a5774 with catch @ 035a57e8
                        */
      LCKCDEKNLOA__MAHFCKJGBPP(pLVar11,(__this->fields).super.IJOKKFKPBEP,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void PKIFMKGDJJN()  [RVA 0x34A5848]
// KFOPKHPGAAK$$PKIFMKGDJJN @ RVA 0x34A5848

void KFOPKHPGAAK__PKIFMKGDJJN(KFOPKHPGAAK_o *__this,MethodInfo *method)

{
  LCKCDEKNLOA_o *pLVar1;
  
                    /* try { // try from 035a5848 to 036a584f has its CatchHandler @ 035a5850 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035a5834 with catch @ 035a5850
                       catch(type#2 @ 00000000) { ... } // from try @ 035a5848 with catch @ 035a5850
                        */
                    /* try { // try from 035a585c to 036a5957 has its CatchHandler @ 035a585c
                       catch() { ... } // from try @ 035a585c with catch @ 035a585c
                       catch() { ... } // from try @ 035a5a1c with catch @ 035a585c
                       catch() { ... } // from try @ 035a5a74 with catch @ 035a585c
                       catch() { ... } // from try @ 035a5ac0 with catch @ 035a585c
                       catch() { ... } // from try @ 035a5af0 with catch @ 035a585c */
  if ((DAT_045684e8 & 1) == 0) {
    FUN_01bab630(&UniRx_Disposable_TypeInfo);
    DAT_045684e8 = 1;
  }
  BOFEMGGNODC__PKIFMKGDJJN((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  pLVar1 = (__this->fields).FNGNIKNIEMM;
  if ((UniRx_Disposable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (pLVar1 != (LCKCDEKNLOA_o *)0x0) {
    UniRx_SerialDisposable__set_Disposable
              ((UniRx_SerialDisposable_o *)pLVar1,UniRx_Disposable_TypeInfo->static_fields->Empty,
               (MethodInfo *)0x0);
    pLVar1 = *(LCKCDEKNLOA_o **)&(__this->fields).ACCIHBHMFPN;
    if (pLVar1 != (LCKCDEKNLOA_o *)0x0) {
      LCKCDEKNLOA__DMLKEJNDODN(pLVar1,(MethodInfo *)0x0);
      pLVar1 = (__this->fields).FNOJIPMNDPJ;
      if (pLVar1 != (LCKCDEKNLOA_o *)0x0) {
        LCKCDEKNLOA__DMLKEJNDODN(pLVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x34A58E4]
// KFOPKHPGAAK$$HNIHOIAMDPC @ RVA 0x34A58E4

void KFOPKHPGAAK__HNIHOIAMDPC
               (KFOPKHPGAAK_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  KFOPKHPGAAK_o *__this_01;
  System_Xml_XmlNode_o *NPLGCIFGFOK_00;
  System_Xml_XmlNode_o *NPLGCIFGFOK_01;
  System_Action_o *pSVar2;
  MethodInfo *method_00;
  LCKCDEKNLOA_o *pLVar3;
  
  if ((DAT_045684e9 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_KFOPKHPGAAK_NDJAJHFFPKP__);
    FUN_01bab630(&StringLiteral_12524/*"Success"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_5840/*"Error"*/);
    DAT_045684e9 = 1;
  }
                    /* try { // try from 035a5958 to 036a595f has its CatchHandler @ 035a5aa4 */
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                          (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 035a5974 to 036a5977 has its CatchHandler @ 035a5a8c */
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 035a5990 to 036a5997 has its CatchHandler @ 035a5a98 */
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
                    /* try { // try from 035a59b0 to 036a59bf has its CatchHandler @ 035a5a94 */
      method_00 = (MethodInfo *)0x0;
      __this_01 = (KFOPKHPGAAK_o *)
                  EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      iVar1 = KFOPKHPGAAK__CNOMHMIIEAB(__this_01,(System_String_o *)__this_01,method_00);
      *(int32_t *)&(__this->fields).super.field_0x54 = iVar1;
                    /* try { // try from 035a59d0 to 036a59d3 has its CatchHandler @ 035a5a78 */
      NPLGCIFGFOK_00 =
           (System_Xml_XmlNode_o *)
           (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                     (NPLGCIFGFOK,StringLiteral_12524/*"Success"*/,
                      (NPLGCIFGFOK->klass->vtable)._51_get_Item.method);
                    /* try { // try from 035a59dc to 036a59f7 has its CatchHandler @ 035a5a7c */
      NPLGCIFGFOK_01 =
           (System_Xml_XmlNode_o *)
           (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                     (NPLGCIFGFOK,StringLiteral_5840/*"Error"*/,
                      (NPLGCIFGFOK->klass->vtable)._51_get_Item.method);
      pLVar3 = *(LCKCDEKNLOA_o **)&(__this->fields).ACCIHBHMFPN;
      pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 035a5a10 to 036a5a1b has its CatchHandler @ 035a5a88 */
                    /* try { // try from 035a5a1c to 036a5a5f has its CatchHandler @ 035a585c */
      System_Action___ctor();
      BOFEMGGNODC__KIBBEDPGMBB
                ((BOFEMGGNODC_o *)__this,NPLGCIFGFOK_00,pLVar3,pSVar2,(MethodInfo *)0x0);
      pLVar3 = (__this->fields).FNOJIPMNDPJ;
      pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
                    /* try { // try from 035a5a60 to 036a5a63 has its CatchHandler @ 035a5aa0 */
                    /* try { // try from 035a5a64 to 036a5a67 has its CatchHandler @ 035a5a9c */
                    /* try { // try from 035a5a68 to 036a5a6b has its CatchHandler @ 035a5a90 */
                    /* try { // try from 035a5a6c to 036a5a6f has its CatchHandler @ 035a5a84 */
                    /* try { // try from 035a5a70 to 036a5a73 has its CatchHandler @ 035a5a80 */
                    /* try { // try from 035a5a74 to 036a5abb has its CatchHandler @ 035a585c */
                    /* catch() { ... } // from try @ 035a59d0 with catch @ 035a5a78 */
                    /* catch() { ... } // from try @ 035a59dc with catch @ 035a5a7c */
      BOFEMGGNODC__KIBBEDPGMBB
                ((BOFEMGGNODC_o *)__this,NPLGCIFGFOK_01,pLVar3,pSVar2,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 035a5a70 with catch @ 035a5a80 */
  FUN_01bab8c8();
}


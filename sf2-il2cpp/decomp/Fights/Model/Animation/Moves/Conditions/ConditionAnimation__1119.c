// Original name: Nekki.SF2.Core.Fights.Model.Animation.Moves.Conditions.ConditionAnimation  (obfuscated IENLNOEDCFF)
// TypeDefIndex 1119
// Namespace: 
// public class ConditionAnimation
// Fields:
//   protected LCAJGLLBBEC.ELJAALFNLIP LOAFPIOGJAF; // 0x10
//   private ObscuredInt JDNKKGPNHPB; // 0x14
//   public bool GBBHFPBFOPI; // 0x24

// ===== public void .ctor(ConditionAnimation.ACAJADECPLB ACCIHBHMFPN)  [RVA 0x30F2240]
// ConditionAnimation$$.ctor @ RVA 0x30F2240

void ConditionAnimation___ctor(ConditionAnimation_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(ACCIHBHMFPN,(MethodInfo *)0x0);
  (__this->fields).JDNKKGPNHPB.fields = CVar1;
  (__this->fields).GBBHFPBFOPI = false;
  return;
}


// ===== public virtual bool EPBENPDCBFE(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x30F22A0]
// ConditionAnimation$$EPBENPDCBFE @ RVA 0x30F22A0

bool ConditionAnimation__EPBENPDCBFE(ConditionAnimation_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Enum_o local_48;
  int32_t local_38;
  
  if ((DAT_04566432 & 1) == 0) {
                    /* try { // try from 031f22d8 to 032f2363 has its CatchHandler @ 031f22d8
                       catch() { ... } // from try @ 031f22d8 with catch @ 031f22d8
                       catch() { ... } // from try @ 031f2384 with catch @ 031f22d8
                       catch() { ... } // from try @ 031f23a8 with catch @ 031f22d8
                       catch() { ... } // from try @ 031f23d0 with catch @ 031f22d8
                       catch() { ... } // from try @ 031f2410 with catch @ 031f22d8 */
    FUN_01bab630(&ConditionAnimation_ACAJADECPLB_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_5583/*"ERROR: Unknown condition type checked: "*/);
    DAT_04566432 = 1;
  }
  local_38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                       ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                        (__this->fields).JDNKKGPNHPB.fields,(MethodInfo *)0x0);
  local_48.klass = (System_Enum_c *)ConditionAnimation_ACAJADECPLB_TypeInfo;
  local_48.monitor = (void *)0xffffffffffffffff;
  pSVar1 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(StringLiteral_5583/*"ERROR: Unknown condition type checked: "*/,pSVar1,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
                    /* try { // try from 031f2364 to 032f236b has its CatchHandler @ 031f23b4 */
  UnityEngine_Debug__LogError((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
                    /* try { // try from 031f237c to 032f2383 has its CatchHandler @ 031f23b0 */
  return false;
}


// ===== public virtual void ENEJIHFIBFM(LCAJGLLBBEC.ELJAALFNLIP ACCIHBHMFPN)  [RVA 0x30F2394]
// ConditionAnimation$$ENEJIHFIBFM @ RVA 0x30F2394

void ConditionAnimation__ENEJIHFIBFM(ConditionAnimation_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  (__this->fields).LOAFPIOGJAF = ACCIHBHMFPN;
  return;
}


// ===== public virtual Model BMADCIAHJFL(Model GPMNJBOFODO, LCAJGLLBBEC.ELJAALFNLIP ACCIHBHMFPN)  [RVA 0x30F239C]
// ConditionAnimation$$BMADCIAHJFL @ RVA 0x30F239C

Model_o *
ConditionAnimation__BMADCIAHJFL
          (ConditionAnimation_o *__this,Model_o *GPMNJBOFODO,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  Model_o *pOVar1;
  
  if (GPMNJBOFODO != (Model_o *)0x0) {
                    /* try { // try from 031f23a4 to 032f23a7 has its CatchHandler @ 031f23ac */
                    /* try { // try from 031f23a8 to 032f23cb has its CatchHandler @ 031f22d8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031f23a4 with catch @ 031f23ac
                        */
    pOVar1 = Model__GMBBOANEBJJ(GPMNJBOFODO,ACCIHBHMFPN,(MethodInfo *)0x0);
    return pOVar1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031f237c with catch @ 031f23b0
                        */
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031f2364 with catch @ 031f23b4
                        */
  FUN_01bab8c8();
}


// ===== private static int GAMLPHKAAHF(List<ConditionAnimation> JGHIJMJNJLE, ConditionAnimation.ACAJADECPLB NBNICCEEBHK, List<ConditionAnimation> PFDNCKLLMBL)  [RVA 0x30F23B8]
// ConditionAnimation$$GAMLPHKAAHF @ RVA 0x30F23B8

int32_t ConditionAnimation__GAMLPHKAAHF
                  (System_Collections_Generic_List_IENLNOEDCFF__o *JGHIJMJNJLE,int32_t NBNICCEEBHK,
                  System_Collections_Generic_List_IENLNOEDCFF__o *PFDNCKLLMBL,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  Il2CppObject *item;
  bool bVar5;
  int32_t iVar6;
  ConditionAnimation_array *pIVar7;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
                    /* try { // try from 031f23cc to 032f23cf has its CatchHandler @ 031f23f8 */
                    /* try { // try from 031f23d0 to 032f2407 has its CatchHandler @ 031f22d8 */
  if ((DAT_04566433 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ConditionAnimation>_Dispose__);
                    /* catch() { ... } // from try @ 031f23cc with catch @ 031f23f8 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ConditionAnimation>_MoveNext__);
                    /* try { // try from 031f2408 to 032f240f has its CatchHandler @ 031f2424 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ConditionAnimation>_get_Current__);
                    /* try { // try from 031f2410 to 032f241b has its CatchHandler @ 031f22d8 */
    FUN_01bab630(&ConditionList_TypeInfo);
                    /* try { // try from 031f241c to 032f2423 has its CatchHandler @ 031f2424 */
    FUN_01bab630(&Method_System_Collections_Generic_List<ConditionAnimation>_Add__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031f2408 with catch @ 031f2424
                       catch(type#2 @ 00000000) { ... } // from try @ 031f241c with catch @ 031f2424
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List<ConditionAnimation>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ConditionAnimation>_get_Count__);
    DAT_04566433 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if ((PFDNCKLLMBL != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) &&
     (JGHIJMJNJLE != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0)) {
    iVar1 = (PFDNCKLLMBL->fields)._size;
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)JGHIJMJNJLE,
               Method_System_Collections_Generic_List<ConditionAnimation>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while( true ) {
      bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<ConditionAnimation>_MoveNext__);
      item = local_70.fields._current;
      if (!bVar5) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_70,
                   Method_System_Collections_Generic_List_Enumerator<ConditionAnimation>_Dispose__);
        return (PFDNCKLLMBL->fields)._size - iVar1;
      }
      if ((ConditionAnimation_o *)local_70.fields._current == (ConditionAnimation_o *)0x0) break;
      iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (((ConditionAnimation_Fields *)((long)local_70.fields._current + 0x10))->
                         JDNKKGPNHPB).fields,(MethodInfo *)0x0);
      lVar4 = Method_System_Collections_Generic_List<ConditionAnimation>_Add__;
      if (iVar6 == NBNICCEEBHK) {
        pIVar7 = (PFDNCKLLMBL->fields)._items;
        (PFDNCKLLMBL->fields)._version = (PFDNCKLLMBL->fields)._version + 1;
        if (pIVar7 == (ConditionAnimation_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar3 = (PFDNCKLLMBL->fields)._size;
        if (uVar3 < (uint)pIVar7->max_length) {
          (PFDNCKLLMBL->fields)._size = uVar3 + 1;
          pIVar7->m_Items[(int)uVar3] = (ConditionAnimation_o *)item;
          thunk_FUN_01c20e04(pIVar7->m_Items + (int)uVar3,item);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)PFDNCKLLMBL,item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
      }
      iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (((ConditionAnimation_Fields *)((long)item + 0x10))->JDNKKGPNHPB).fields,
                         (MethodInfo *)0x0);
      if (iVar6 == 8) {
        bVar2 = (ConditionList_TypeInfo->_2).naturalAligment;
        if ((bVar2 <= (((ConditionAnimation_c *)item->klass)->_2).naturalAligment) &&
           ((((ConditionAnimation_c *)item->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] ==
            (Il2CppClass *)ConditionList_TypeInfo)) {
          ConditionAnimation__GAMLPHKAAHF
                    (((ConditionAnimation_o *)((long)item + 0x28))->monitor,NBNICCEEBHK,PFDNCKLLMBL,method)
          ;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void HNIHOIAMDPC(XmlNode NHMPCKIPOJE)  [RVA 0x30F263C]
// ConditionAnimation$$HNIHOIAMDPC @ RVA 0x30F263C

void ConditionAnimation__HNIHOIAMDPC
               (ConditionAnimation_o *__this,System_Xml_XmlNode_o *NHMPCKIPOJE,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *ACCIHBHMFPN;
  
  if ((DAT_04566434 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8907/*"Me"*/);
    FUN_01bab630(&StringLiteral_10305/*"Player"*/);
    FUN_01bab630(&StringLiteral_9577/*"Not"*/);
    DAT_04566434 = 1;
  }
  if (NHMPCKIPOJE != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(NHMPCKIPOJE->klass->vtable)._16_get_Attributes.methodPtr)
                       (NHMPCKIPOJE,(NHMPCKIPOJE->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_9577/*"Not"*/,(MethodInfo *)0x0);
      bVar1 = GIAMPEGMNHE__FAEBPLENEGK(pSVar4,false,(MethodInfo *)0x0);
      (__this->fields).GBBHFPBFOPI = bVar1;
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(NHMPCKIPOJE->klass->vtable)._16_get_Attributes.methodPtr)
                         (NHMPCKIPOJE,(NHMPCKIPOJE->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_10305/*"Player"*/,(MethodInfo *)0x0);
        ACCIHBHMFPN = GIAMPEGMNHE__LFCNNAGLPHO(pSVar4,StringLiteral_8907/*"Me"*/,(MethodInfo *)0x0);
        iVar2 = LCAJGLLBBEC__HGMMJIIEOLF(ACCIHBHMFPN,(MethodInfo *)0x0);
                    /* try { // try from 031f2714 to 032f271b has its CatchHandler @ 031f2804 */
        (__this->fields).LOAFPIOGJAF = iVar2;
                    /* WARNING: Could not recover jumptable at 0x031f2728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(__this->klass->vtable)._9_GIENGNEGHPJ.methodPtr)
                  (__this,(__this->klass->vtable)._9_GIENGNEGHPJ.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual bool EPBENPDCBFE(Model BCKBBGCOMJD, InfoAnimation NLEBDPHNIDI)  [RVA 0x30F2730]
// ConditionAnimation$$EPBENPDCBFE @ RVA 0x30F2730

bool ConditionAnimation__EPBENPDCBFE
               (ConditionAnimation_o *__this,Model_o *BCKBBGCOMJD,InfoAnimation_o *NLEBDPHNIDI,
               MethodInfo *method)

{
  bool bVar1;
  
                    /* try { // try from 031f2730 to 032f2733 has its CatchHandler @ 031f27f4 */
                    /* try { // try from 031f2734 to 032f273f has its CatchHandler @ 031f2800 */
  if (BCKBBGCOMJD != (Model_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031f2748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar1 = (bool)(*(__this->klass->vtable)._4_EPBENPDCBFE.methodPtr)
                            ((char)__this,(BCKBBGCOMJD->fields).FNEAAHOOHAA,
                             (__this->klass->vtable)._4_EPBENPDCBFE.method);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void GIENGNEGHPJ()  [RVA 0x30F2750]
// ConditionAnimation$$GIENGNEGHPJ @ RVA 0x30F2750

void ConditionAnimation__GIENGNEGHPJ(ConditionAnimation_o *__this,MethodInfo *method)

{
  return;
}


// ===== public ConditionAnimation.ACAJADECPLB NHGGBEACKBD()  [RVA 0x30F2380]
// ConditionAnimation$$NHGGBEACKBD @ RVA 0x30F2380

int32_t ConditionAnimation__NHGGBEACKBD(ConditionAnimation_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
                    /* try { // try from 031f2384 to 032f23a3 has its CatchHandler @ 031f22d8 */
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).JDNKKGPNHPB.fields,(MethodInfo *)0x0);
  return iVar1;
}


// ===== public void GNLPNKGBAFL(ConditionAnimation.ACAJADECPLB CJNHFNHJHPE)  [RVA 0x30F227C]
// ConditionAnimation$$GNLPNKGBAFL @ RVA 0x30F227C

void ConditionAnimation__GNLPNKGBAFL(ConditionAnimation_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar1;
  
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0);
  (__this->fields).JDNKKGPNHPB.fields = CVar1;
  return;
}


// ===== public void RandomizeObscuredVars()  [RVA 0x30F2754]
// ConditionAnimation$$RandomizeObscuredVars @ RVA 0x30F2754

void ConditionAnimation__RandomizeObscuredVars(ConditionAnimation_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_00;
  
                    /* try { // try from 031f2754 to 032f2757 has its CatchHandler @ 031f27f0 */
  __this_00.fields.fakeValue = 0;
  __this_00.fields.fakeValueActive = false;
  __this_00.fields.inited = false;
  __this_00.fields._14_2_ = 0;
  __this_00.fields._0_8_ = &(__this->fields).JDNKKGPNHPB;
                    /* try { // try from 031f2758 to 032f27bb has its CatchHandler @ 031f27f8 */
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_00,in_x2);
  return;
}


// ===== public void HGKKKCENDJF(LCAJGLLBBEC.ELJAALFNLIP CJNHFNHJHPE)  [RVA 0x30F2760]
// ConditionAnimation$$HGKKKCENDJF @ RVA 0x30F2760

void ConditionAnimation__HGKKKCENDJF(ConditionAnimation_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).LOAFPIOGJAF = CJNHFNHJHPE;
  return;
}


// ===== protected bool DEBLNLJEJKG(bool HPACPFLKHPK)  [RVA 0x30F2768]
// ConditionAnimation$$DEBLNLJEJKG @ RVA 0x30F2768

bool ConditionAnimation__DEBLNLJEJKG(ConditionAnimation_o *__this,bool HPACPFLKHPK,MethodInfo *method)

{
  return ((__this->fields).GBBHFPBFOPI != false) != HPACPFLKHPK;
}


// ===== public LCAJGLLBBEC.ELJAALFNLIP MOICJLBMFCE()  [RVA 0x30F2780]
// ConditionAnimation$$MOICJLBMFCE @ RVA 0x30F2780

int32_t ConditionAnimation__MOICJLBMFCE(ConditionAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields).LOAFPIOGJAF;
}


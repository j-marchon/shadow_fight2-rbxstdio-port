// Original name: Nekki.SF2.Core.Fights.Model.AI.Data.TacticConditionBase  (obfuscated EAAHMDAMHNI)
// TypeDefIndex 701
// Namespace: 
// public abstract class TacticConditionBase
// Fields:
//   protected Model HMMEFNNMBJK; // 0x10
//   protected bool ADAOAMNHANG; // 0x18
//   protected TacticConditionBase.IAAALIOLGOC GCOAKFIEAAL; // 0x1C

// ===== public static float EMFEHPCNCDF(Model CHBJNMMEAPG, string CJNHFNHJHPE)  [RVA 0x3035928]
// TacticConditionBase$$EMFEHPCNCDF @ RVA 0x3035928

float TacticConditionBase__EMFEHPCNCDF
                (Model_o *CHBJNMMEAPG,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_String_o *message;
  ModelAi_o *pNVar2;
  float fVar3;
  
  if ((DAT_04565d3d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 0313595c to 032359b3 has its CatchHandler @ 0313595c
                       catch() { ... } // from try @ 0313595c with catch @ 0313595c
                       catch() { ... } // from try @ 03135ab4 with catch @ 0313595c
                       catch() { ... } // from try @ 03135bb8 with catch @ 0313595c
                       catch() { ... } // from try @ 03135c28 with catch @ 0313595c */
    FUN_01bab630(&StringLiteral_4177/*"Cant get value "*/);
    FUN_01bab630(&StringLiteral_15862/*"_"*/);
    FUN_01bab630(&StringLiteral_15947/*"_CounterAttackChance"*/);
    FUN_01bab630(&StringLiteral_15955/*"_DodgeChance"*/);
    FUN_01bab630(&StringLiteral_15934/*"_BlockChance"*/);
    DAT_04565d3d = 1;
  }
  if (CHBJNMMEAPG != (Model_o *)0x0) {
    pNVar2 = (CHBJNMMEAPG->fields).ADGFKAPOIFN;
    fVar3 = 0.0;
    if ((pNVar2 != (ModelAi_o *)0x0) &&
       (fVar3 = 0.0, (pNVar2->fields)._MPABEMCEHCL_k__BackingField != (Tactic_o *)0x0)) {
      if (CJNHFNHJHPE == (System_String_o *)0x0) goto LAB_03135ab0;
                    /* try { // try from 031359b4 to 032359bf has its CatchHandler @ 03135bdc */
                    /* try { // try from 031359c4 to 032359c7 has its CatchHandler @ 03135bd8 */
      bVar1 = System_String__StartsWith(CJNHFNHJHPE,StringLiteral_15862/*"_"*/,(MethodInfo *)0x0);
      if (!bVar1) {
                    /* try { // try from 03135a00 to 03235a03 has its CatchHandler @ 03135bb8 */
                    /* try { // try from 03135a0c to 03235a0f has its CatchHandler @ 03135bc0 */
        fVar3 = PCOEHCPGBBG__OFFODGKLGOP(CJNHFNHJHPE,0.0,(MethodInfo *)0x0);
        return fVar3;
      }
                    /* try { // try from 031359dc to 032359df has its CatchHandler @ 03135bd0 */
      bVar1 = System_String__op_Equality(CJNHFNHJHPE,StringLiteral_15955/*"_DodgeChance"*/,(MethodInfo *)0x0);
      if (bVar1) {
        fVar3 = (pNVar2->fields).KMKHEGOMOBM;
      }
      else {
        bVar1 = System_String__op_Equality(CJNHFNHJHPE,StringLiteral_15934/*"_BlockChance"*/,(MethodInfo *)0x0);
        if (bVar1) {
          fVar3 = (pNVar2->fields).BBOFDBPEOIM;
        }
        else {
                    /* try { // try from 03135a44 to 03235a4f has its CatchHandler @ 03135be8 */
          bVar1 = System_String__op_Equality(CJNHFNHJHPE,StringLiteral_15947/*"_CounterAttackChance"*/,(MethodInfo *)0x0);
          if (bVar1) {
            fVar3 = (pNVar2->fields).EBKPLCJLKMG;
          }
          else {
                    /* try { // try from 03135a5c to 03235a73 has its CatchHandler @ 03135bec */
            message = System_String__Concat(StringLiteral_4177/*"Cant get value "*/,CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* try { // try from 03135a7c to 03235a7f has its CatchHandler @ 03135bcc */
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03135a88 to 03235a8b has its CatchHandler @ 03135bc8 */
              thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
            }
            UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
          }
        }
      }
    }
                    /* try { // try from 03135aa4 to 03235aa7 has its CatchHandler @ 03135bc4 */
                    /* try { // try from 03135aac to 03235ab3 has its CatchHandler @ 03135bbc */
    return fVar3;
  }
LAB_03135ab0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static TacticConditionBase JCCANOCMAKD(XmlNode IIBFFEPEHPF)  [RVA 0x3035AB4]
// TacticConditionBase$$JCCANOCMAKD @ RVA 0x3035AB4

TacticConditionBase_o * TacticConditionBase__JCCANOCMAKD(System_Xml_XmlNode_o *IIBFFEPEHPF,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  TacticConditionDistance_o *__this;
  System_String_o *str0;
  System_Exception_o *__this_00;
  undefined8 uVar3;
  
                    /* try { // try from 03135ab4 to 03235b83 has its CatchHandler @ 0313595c */
  if ((DAT_04565d3e & 1) == 0) {
    FUN_01bab630(&TacticConditionAnimationFrame_TypeInfo);
    FUN_01bab630(&TacticConditionModelItem_TypeInfo);
    FUN_01bab630(&TacticConditionOperator_TypeInfo);
    FUN_01bab630(&TacticConditionDistance_TypeInfo);
    FUN_01bab630(&TacticConditionRandom_TypeInfo);
    FUN_01bab630(&TacticConditionAnimation_TypeInfo);
    FUN_01bab630(&StringLiteral_10999/*"Random"*/);
    FUN_01bab630(&StringLiteral_2968/*"Animation"*/);
    FUN_01bab630(&StringLiteral_9173/*"ModelItem"*/);
    FUN_01bab630(&StringLiteral_5423/*"Distance"*/);
    FUN_01bab630(&StringLiteral_2976/*"AnimationFrame"*/);
    FUN_01bab630(&StringLiteral_9968/*"Operator"*/);
    DAT_04565d3e = 1;
  }
  if (IIBFFEPEHPF != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_String_o *)
             (*(IIBFFEPEHPF->klass->vtable)._8_unknown.methodPtr)
                       (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._8_unknown.method);
                    /* try { // try from 03135b84 to 03235bb3 has its CatchHandler @ 03135bd4 */
    bVar1 = System_String__op_Equality(pSVar2,StringLiteral_5423/*"Distance"*/,(MethodInfo *)0x0);
    if (bVar1) {
      __this = (TacticConditionDistance_o *)thunk_FUN_01bda818(TacticConditionDistance_TypeInfo);
      TacticConditionDistance___ctor(__this,(MethodInfo *)0x0);
    }
    else {
                    /* try { // try from 03135bb4 to 03235bb7 has its CatchHandler @ 03135bc4 */
                    /* catch() { ... } // from try @ 03135a00 with catch @ 03135bb8
                       try { // try from 03135bb8 to 03235c03 has its CatchHandler @ 0313595c */
                    /* catch() { ... } // from try @ 03135aac with catch @ 03135bbc */
                    /* catch() { ... } // from try @ 03135a0c with catch @ 03135bc0 */
                    /* catch() { ... } // from try @ 03135aa4 with catch @ 03135bc4
                       catch() { ... } // from try @ 03135bb4 with catch @ 03135bc4 */
                    /* catch() { ... } // from try @ 03135a88 with catch @ 03135bc8 */
      bVar1 = System_String__op_Equality(pSVar2,StringLiteral_10999/*"Random"*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03135a7c with catch @ 03135bcc */
      if (bVar1) {
                    /* catch() { ... } // from try @ 031359dc with catch @ 03135bd0 */
                    /* catch() { ... } // from try @ 03135b84 with catch @ 03135bd4 */
                    /* catch() { ... } // from try @ 031359c4 with catch @ 03135bd8 */
                    /* catch() { ... } // from try @ 031359b4 with catch @ 03135bdc */
        __this = (TacticConditionDistance_o *)thunk_FUN_01bda818(TacticConditionRandom_TypeInfo);
                    /* catch() { ... } // from try @ 03135a44 with catch @ 03135be8 */
        TacticConditionRandom___ctor((TacticConditionRandom_o *)__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03135a5c with catch @ 03135bec */
      }
      else {
                    /* try { // try from 03135c04 to 03235c07 has its CatchHandler @ 03135c14 */
        bVar1 = System_String__op_Equality(pSVar2,StringLiteral_9173/*"ModelItem"*/,(MethodInfo *)0x0);
        if (bVar1) {
                    /* catch() { ... } // from try @ 03135c04 with catch @ 03135c14 */
          __this = (TacticConditionDistance_o *)thunk_FUN_01bda818(TacticConditionModelItem_TypeInfo);
                    /* try { // try from 03135c20 to 03235c27 has its CatchHandler @ 03135c3c */
          TacticConditionModelItem___ctor((TacticConditionModelItem_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 03135c28 to 03235c33 has its CatchHandler @ 0313595c */
        }
        else {
                    /* try { // try from 03135c34 to 03235c3b has its CatchHandler @ 03135c3c */
                    /* catch() { ... } // from try @ 03135c20 with catch @ 03135c3c
                       catch() { ... } // from try @ 03135c34 with catch @ 03135c3c */
          bVar1 = System_String__op_Equality(pSVar2,StringLiteral_2968/*"Animation"*/,(MethodInfo *)0x0);
          if (bVar1) {
            __this = (TacticConditionDistance_o *)thunk_FUN_01bda818(TacticConditionAnimation_TypeInfo);
            TacticConditionAnimation___ctor((TacticConditionAnimation_o *)__this,(MethodInfo *)0x0);
          }
          else {
            bVar1 = System_String__op_Equality(pSVar2,StringLiteral_9968/*"Operator"*/,(MethodInfo *)0x0);
            if (bVar1) {
              __this = (TacticConditionDistance_o *)thunk_FUN_01bda818(TacticConditionOperator_TypeInfo);
              TacticConditionOperator___ctor((TacticConditionOperator_o *)__this,(MethodInfo *)0x0);
            }
            else {
              bVar1 = System_String__op_Equality(pSVar2,StringLiteral_2976/*"AnimationFrame"*/,(MethodInfo *)0x0);
              if (!bVar1) {
                str0 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_14384/*"Unhandled condition : "*/);
                pSVar2 = System_String__Concat(str0,pSVar2,(MethodInfo *)0x0);
                thunk_FUN_01bb9178(&System_Exception_TypeInfo);
                __this_00 = (System_Exception_o *)thunk_FUN_01bda818();
                System_Exception___ctor(__this_00,pSVar2,(MethodInfo *)0x0);
                uVar3 = thunk_FUN_01bb9178(&Method_EAAHMDAMHNI_JCCANOCMAKD__);
                    /* WARNING: Subroutine does not return */
                FUN_01bab798(__this_00,uVar3);
              }
              __this = (TacticConditionDistance_o *)thunk_FUN_01bda818(TacticConditionAnimationFrame_TypeInfo);
              TacticConditionAnimationFrame___ctor((TacticConditionAnimationFrame_o *)__this,(MethodInfo *)0x0);
            }
          }
        }
      }
    }
    if (__this != (TacticConditionDistance_o *)0x0) {
      (*(__this->klass->vtable)._5_HNIHOIAMDPC.methodPtr)
                (__this,IIBFFEPEHPF,(__this->klass->vtable)._5_HNIHOIAMDPC.method);
      return (TacticConditionBase_o *)__this;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool GPPNJKOPCAK()  [RVA 0x3035D5C]
// TacticConditionBase$$GPPNJKOPCAK @ RVA 0x3035D5C

bool TacticConditionBase__GPPNJKOPCAK(TacticConditionBase_o *__this,MethodInfo *method)

{
  return (__this->fields).ADAOAMNHANG;
}


// ===== protected void .ctor()  [RVA 0x3035D64]
// TacticConditionBase$$.ctor @ RVA 0x3035D64

void TacticConditionBase___ctor(TacticConditionBase_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public virtual void HNIHOIAMDPC(XmlNode IIBFFEPEHPF)  [RVA 0x3035D6C]
// TacticConditionBase$$HNIHOIAMDPC @ RVA 0x3035D6C

void TacticConditionBase__HNIHOIAMDPC
               (TacticConditionBase_o *__this,System_Xml_XmlNode_o *IIBFFEPEHPF,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  
  if ((DAT_04565d3f & 1) == 0) {
    FUN_01bab630(&Method_EIABCPKDEBD_CKHGJBKDIID<TacticConditionBase_IAAALIOLGOC>__);
    FUN_01bab630(&StringLiteral_9577/*"Not"*/);
                    /* try { // try from 03135da8 to 03235e17 has its CatchHandler @ 03135da8
                       catch() { ... } // from try @ 03135da8 with catch @ 03135da8
                       catch() { ... } // from try @ 03135e2c with catch @ 03135da8
                       catch() { ... } // from try @ 03135ea0 with catch @ 03135da8 */
    FUN_01bab630(&StringLiteral_9968/*"Operator"*/);
    DAT_04565d3f = 1;
  }
  if (IIBFFEPEHPF != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.methodPtr)
                       (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_9577/*"Not"*/,(MethodInfo *)0x0);
      bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
      (__this->fields).ADAOAMNHANG = bVar1;
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.methodPtr)
                         (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 03135e18 to 03235e23 has its CatchHandler @ 03135e64 */
                    /* try { // try from 03135e28 to 03235e2b has its CatchHandler @ 03135e60 */
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_9968/*"Operator"*/,(MethodInfo *)0x0);
                    /* try { // try from 03135e2c to 03235e7b has its CatchHandler @ 03135da8 */
        iVar2 = EIABCPKDEBD__CKHGJBKDIID<Int32Enum>
                          (pSVar4,2,Method_EIABCPKDEBD_CKHGJBKDIID<TacticConditionBase_IAAALIOLGOC>__);
        (__this->fields).GCOAKFIEAAL = iVar2;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected static bool OKACBKHDEIO(TacticConditionBase.IAAALIOLGOC OINGNJDJJKN, float KCAFIBBFNAO, float KHCEOFBMAPN)  [RVA 0x3035E4C]
// TacticConditionBase$$OKACBKHDEIO @ RVA 0x3035E4C

bool TacticConditionBase__OKACBKHDEIO
               (int32_t OINGNJDJJKN,float KCAFIBBFNAO,float KHCEOFBMAPN,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_Enum_o local_48;
  int32_t local_38;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03135e28 with catch @ 03135e60
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03135e18 with catch @ 03135e64
                        */
  if ((DAT_04565d40 & 1) == 0) {
                    /* try { // try from 03135e7c to 03235e7f has its CatchHandler @ 03135e8c */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&TacticConditionBase_IAAALIOLGOC_TypeInfo);
                    /* catch() { ... } // from try @ 03135e7c with catch @ 03135e8c */
    FUN_01bab630(&StringLiteral_15596/*"[TacticConditionDistance] undefined operator : "*/);
                    /* try { // try from 03135e98 to 03235e9f has its CatchHandler @ 03135eb4 */
    DAT_04565d40 = 1;
  }
                    /* try { // try from 03135ea0 to 03235eab has its CatchHandler @ 03135da8 */
                    /* try { // try from 03135eac to 03235eb3 has its CatchHandler @ 03135eb4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03135e98 with catch @ 03135eb4
                       catch(type#2 @ 00000000) { ... } // from try @ 03135eac with catch @ 03135eb4
                        */
  switch(OINGNJDJJKN) {
  case 0:
    bVar1 = KCAFIBBFNAO < KHCEOFBMAPN;
    break;
  case 1:
    bVar1 = KHCEOFBMAPN < KCAFIBBFNAO;
    break;
  case 2:
    bVar1 = KCAFIBBFNAO == KHCEOFBMAPN;
    break;
  case 3:
    bVar1 = KCAFIBBFNAO <= KHCEOFBMAPN;
    break;
  case 4:
    bVar1 = KHCEOFBMAPN <= KCAFIBBFNAO;
    break;
  default:
    local_48.klass = (System_Enum_c *)TacticConditionBase_IAAALIOLGOC_TypeInfo;
    local_48.monitor = (void *)0xffffffffffffffff;
    local_38 = OINGNJDJJKN;
    pSVar2 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat(StringLiteral_15596/*"[TacticConditionDistance] undefined operator : "*/,pSVar2,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
    bVar1 = false;
  }
  return bVar1;
}


// ===== public virtual void GIENGNEGHPJ(TacticConditionData APOLFFJGBEO)  [RVA 0x3035F84]
// TacticConditionBase$$GIENGNEGHPJ @ RVA 0x3035F84

void TacticConditionBase__GIENGNEGHPJ(TacticConditionBase_o *__this,TacticConditionData_o APOLFFJGBEO,MethodInfo *method)

{
  (__this->fields).HMMEFNNMBJK = APOLFFJGBEO.fields.LHNJNJMBLJM;
  thunk_FUN_01c20e04(&__this->fields,APOLFFJGBEO.fields.LHNJNJMBLJM,APOLFFJGBEO.fields.EMCFCMFGPME);
  return;
}


// ===== public Model APIJKKBLEPM()  [RVA 0x3035F8C]
// TacticConditionBase$$APIJKKBLEPM @ RVA 0x3035F8C

Model_o * TacticConditionBase__APIJKKBLEPM(TacticConditionBase_o *__this,MethodInfo *method)

{
  return (__this->fields).HMMEFNNMBJK;
}


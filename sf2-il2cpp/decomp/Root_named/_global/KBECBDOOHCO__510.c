// TypeDefIndex 510
// Namespace: 
// internal class KBECBDOOHCO
// Fields:
//   private GameObject LDAKOINICNJ; // 0x10
//   private Vector3f PCGIENAHMFK; // 0x18

// ===== public void PDDDDDPBEMI(GameObject JJHEGPBBMLG)  [RVA 0x358F0E0]
// KBECBDOOHCO$$PDDDDDPBEMI @ RVA 0x358F0E0

void KBECBDOOHCO__PDDDDDPBEMI
               (KBECBDOOHCO_o *__this,UnityEngine_GameObject_o *JJHEGPBBMLG,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  
  __this_00 = (__this->fields).LDAKOINICNJ;
  if (((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
      (__this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
      JJHEGPBBMLG != (UnityEngine_GameObject_o *)0x0)) &&
     (parent = UnityEngine_GameObject__get_transform(JJHEGPBBMLG,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
                    /* try { // try from 0368f128 to 0378f12f has its CatchHandler @ 0368f16c */
    UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MNHLFKMFAIG(string EIJDDKJONFO, Color GKBNFBINIIP)  [RVA 0x358F134]
// KBECBDOOHCO$$MNHLFKMFAIG @ RVA 0x358F134

void KBECBDOOHCO__MNHLFKMFAIG
               (KBECBDOOHCO_o *__this,System_String_o *EIJDDKJONFO,UnityEngine_Color_o GKBNFBINIIP,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_SpriteRenderer_o *__this_01;
  UnityEngine_Sprite_o *value;
  
                    /* try { // try from 0368f138 to 0378f147 has its CatchHandler @ 0368f168 */
                    /* try { // try from 0368f148 to 0378f183 has its CatchHandler @ 0368efe8 */
  if ((DAT_04568d66 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368f138 with catch @ 0368f168
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368f128 with catch @ 0368f16c
                        */
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<SpriteRenderer>__);
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
                    /* try { // try from 0368f184 to 0378f187 has its CatchHandler @ 0368f27c */
                    /* try { // try from 0368f188 to 0378f1df has its CatchHandler @ 0368efe8 */
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568d66 = 1;
  }
  __this_00 = (__this->fields).LDAKOINICNJ;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = (UnityEngine_SpriteRenderer_o *)
                UnityEngine_GameObject__AddComponent<object>
                          (__this_00,Method_UnityEngine_GameObject_AddComponent<SpriteRenderer>__);
    if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(KKCBGIBKOCP_TypeInfo);
    }
                    /* try { // try from 0368f1e0 to 0378f1e7 has its CatchHandler @ 0368f2a4 */
    value = KKCBGIBKOCP__NECCNHODCAE(StringLiteral_1/*""*/,EIJDDKJONFO,false,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_SpriteRenderer_o *)0x0) {
                    /* try { // try from 0368f1f0 to 0378f1ff has its CatchHandler @ 0368f2a0 */
      UnityEngine_SpriteRenderer__set_sprite(__this_01,value,(MethodInfo *)0x0);
                    /* try { // try from 0368f200 to 0378f28b has its CatchHandler @ 0368efe8 */
      UnityEngine_SpriteRenderer__set_color(__this_01,GKBNFBINIIP,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MHEKOCOGKEE(float HGPGMCGOOLL)  [RVA 0x358F22C]
// KBECBDOOHCO$$MHEKOCOGKEE @ RVA 0x358F22C

void KBECBDOOHCO__MHEKOCOGKEE(KBECBDOOHCO_o *__this,float HGPGMCGOOLL,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o value;
  
  __this_00 = (__this->fields).LDAKOINICNJ;
  if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
     (__this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    value.fields.y = HGPGMCGOOLL;
    value.fields.x = HGPGMCGOOLL;
    value.fields.z = HGPGMCGOOLL;
    UnityEngine_Transform__set_localScale(__this_01,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GFECOLFOILC(Vector3f EKEMKOCPHPO)  [RVA 0x358F26C]
// KBECBDOOHCO$$GFECOLFOILC @ RVA 0x358F26C

void KBECBDOOHCO__GFECOLFOILC(KBECBDOOHCO_o *__this,Vector3f_o *EKEMKOCPHPO,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o value;
  
  __this_00 = (__this->fields).LDAKOINICNJ;
                    /* catch() { ... } // from try @ 0368f184 with catch @ 0368f27c */
  if (((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
      (__this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
      EKEMKOCPHPO != (Vector3f_o *)0x0)) && (__this_01 != (UnityEngine_Transform_o *)0x0)) {
                    /* try { // try from 0368f28c to 0378f29f has its CatchHandler @ 0368f314 */
    value.fields.z = 0.0;
    value.fields.x = (EKEMKOCPHPO->fields).super.OHHDBINAJCB;
    value.fields.y = (EKEMKOCPHPO->fields).super.JOLEIODMLFL;
    UnityEngine_Transform__set_localPosition(__this_01,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368f1f0 with catch @ 0368f2a0
                       try { // try from 0368f2a0 to 0378f2bb has its CatchHandler @ 0368efe8 */
  FUN_01bab8c8();
}


// ===== public void .ctor(Vector3f ECGAPLEDNNE)  [RVA 0x358F2A4]
// KBECBDOOHCO$$.ctor @ RVA 0x358F2A4

void KBECBDOOHCO___ctor(KBECBDOOHCO_o *__this,Vector3f_o *ECGAPLEDNNE,MethodInfo *method)

{
  int32_t iVar1;
  Vector3f_o *pCVar2;
  UnityEngine_GameObject_o *__this_00;
  Vector3f_o **ppCVar3;
  float fVar4;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368f1e0 with catch @ 0368f2a4
                        */
                    /* try { // try from 0368f2bc to 0378f2bf has its CatchHandler @ 0368f2e8 */
                    /* try { // try from 0368f2c0 to 0378f2f7 has its CatchHandler @ 0368efe8 */
  if ((DAT_04568d67 & 1) == 0) {
                    /* catch() { ... } // from try @ 0368f2bc with catch @ 0368f2e8 */
    FUN_01bab630(&Vector3f_TypeInfo);
                    /* try { // try from 0368f2f8 to 0378f2ff has its CatchHandler @ 0368f314 */
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
                    /* try { // try from 0368f300 to 0378f30b has its CatchHandler @ 0368efe8 */
    FUN_01bab630(&StringLiteral_3519/*"BloodEffect"*/);
                    /* try { // try from 0368f30c to 0378f313 has its CatchHandler @ 0368f314 */
    DAT_04568d67 = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0368f28c with catch @ 0368f314
                       catch(type#2 @ 00000000) { ... } // from try @ 0368f2f8 with catch @ 0368f314
                       catch(type#2 @ 00000000) { ... } // from try @ 0368f30c with catch @ 0368f314
                        */
  pCVar2 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  Vector3f___ctor(pCVar2,(MethodInfo *)0x0);
  ppCVar3 = &(__this->fields).PCGIENAHMFK;
  *ppCVar3 = pCVar2;
  thunk_FUN_01c20e04(ppCVar3,pCVar2);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(__this_00,StringLiteral_3519/*"BloodEffect"*/,(MethodInfo *)0x0);
  (__this->fields).LDAKOINICNJ = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  if (ECGAPLEDNNE != (Vector3f_o *)0x0) {
    pCVar2 = *ppCVar3;
    fVar4 = (ECGAPLEDNNE->fields).super.OHHDBINAJCB;
    iVar1 = UnityEngine_Random__Range(-0x28,0x28,(MethodInfo *)0x0);
    if (pCVar2 != (Vector3f_o *)0x0) {
      (pCVar2->fields).super.OHHDBINAJCB = fVar4 / 200.0 + (float)iVar1 / 10.0;
      pCVar2 = *ppCVar3;
      fVar4 = (ECGAPLEDNNE->fields).super.JOLEIODMLFL;
      iVar1 = UnityEngine_Random__Range(-0x3c,0x14,(MethodInfo *)0x0);
      if (pCVar2 != (Vector3f_o *)0x0) {
        (pCVar2->fields).super.JOLEIODMLFL = fVar4 / 200.0 + (float)iVar1 / 10.0;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OOFBMDPOOCB()  [RVA 0x358F400]
// KBECBDOOHCO$$OOFBMDPOOCB @ RVA 0x358F400

void KBECBDOOHCO__OOFBMDPOOCB(KBECBDOOHCO_o *__this,MethodInfo *method)

{
  Util__JODGPLBHHIA((__this->fields).LDAKOINICNJ,false,(MethodInfo *)0x0);
  return;
}


// ===== public void BDHAMOEKNNK()  [RVA 0x358F410]
// KBECBDOOHCO$$BDHAMOEKNNK @ RVA 0x358F410

void KBECBDOOHCO__BDHAMOEKNNK(KBECBDOOHCO_o *__this,MethodInfo *method)

{
  undefined1 auVar1 [12];
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  Vector3f_o *pCVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o value;
  
  pUVar2 = (__this->fields).LDAKOINICNJ;
  if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_Transform_o *)0x0)) {
    UVar8 = UnityEngine_Transform__get_localPosition(pUVar3,(MethodInfo *)0x0);
    value.fields.z = UVar8.fields.z;
    pCVar4 = (__this->fields).PCGIENAHMFK;
    if ((pCVar4 != (Vector3f_o *)0x0) &&
       (pUVar2 = (__this->fields).LDAKOINICNJ, pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      fVar6 = (pCVar4->fields).super.OHHDBINAJCB;
      fVar7 = (pCVar4->fields).super.JOLEIODMLFL;
      pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        value.fields.x = UVar8.fields.x + fVar6;
        value.fields.y = UVar8.fields.y + fVar7;
        UnityEngine_Transform__set_localPosition(pUVar3,value,(MethodInfo *)0x0);
        pCVar4 = (__this->fields).PCGIENAHMFK;
        if (pCVar4 != (Vector3f_o *)0x0) {
          fVar6 = (pCVar4->fields).super.JOLEIODMLFL + 0.2;
          (pCVar4->fields).super.JOLEIODMLFL = fVar6;
          pUVar2 = (__this->fields).LDAKOINICNJ;
          if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
            fVar7 = (pCVar4->fields).super.OHHDBINAJCB;
            pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
            if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
              fVar5 = atanf(-fVar6 / fVar7);
              fVar6 = -90.0;
              if (0.0 <= fVar7) {
                fVar6 = 90.0;
              }
              auVar1._4_8_ = 0;
              auVar1._0_4_ = -(((fVar5 / 3.1415927) * 180.0 - fVar6) + 180.0);
              UnityEngine_Transform__set_eulerAngles
                        (pUVar3,(UnityEngine_Vector3_o)(auVar1 << 0x40),(MethodInfo *)0x0);
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


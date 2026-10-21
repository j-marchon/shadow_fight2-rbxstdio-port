// TypeDefIndex 2634
// Namespace: 
// public class FKNCNNOOOIO
// Fields:
//   public string JIJLBFGKNJK; // 0x10
//   public string KPDPJONADPJ; // 0x18
//   public string AOOKMODPLGM; // 0x20
//   public long ALLCFABAGOB; // 0x28
//   public string MEONABNPAPF; // 0x30
//   public FKNCNNOOOIO.GLHPADHBDEL BGHFADDGPAD; // 0x38
//   public Vector2 BEKOHBPEEKP; // 0x3C
//   public Vector2 FKICEICKCOG; // 0x44
//   public Vector2 CCEKJNEFJKP; // 0x4C
//   public Vector2 LNBKBMNLJNG; // 0x54
//   public Nullable<Vector2> OLBNFCKMBEL; // 0x5C
//   public bool OEFBIKEMBOF; // 0x68
//   public float FMAIEIJAFPA; // 0x6C
//   public float LJJPOKGLLHC; // 0x70
//   public FKNCNNOOOIO.HMFAPGCJJLL AIDMEFDEOLJ; // 0x74
//   public FBBNEILNOKK ACNLHENNKAJ; // 0x78
//   public float MJNNMHHINEF; // 0x7C
//   public JOCNCPCOEAC JHFAAGIPDAJ; // 0x80
//   public Nullable<bool> IGOGFMFHLNK; // 0x88

// ===== public bool LFHPFJOAJIO(FKNCNNOOOIO NPMJCCEGOKB)  [RVA 0x33B3264]
// FKNCNNOOOIO$$LFHPFJOAJIO @ RVA 0x33B3264

bool FKNCNNOOOIO__LFHPFJOAJIO(FKNCNNOOOIO_o *__this,FKNCNNOOOIO_o *NPMJCCEGOKB,MethodInfo *method)

{
  bool bVar1;
  
                    /* try { // try from 034b3270 to 035b327b has its CatchHandler @ 034b472c */
  if (__this == NPMJCCEGOKB) {
    bVar1 = true;
  }
  else {
    if (NPMJCCEGOKB == (FKNCNNOOOIO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034b32e8 to 035b3413 has its CatchHandler @ 034b26b0 */
      FUN_01bab8c8();
    }
                    /* try { // try from 034b328c to 035b3293 has its CatchHandler @ 034b4944 */
    bVar1 = System_String__op_Equality
                      ((__this->fields).JIJLBFGKNJK,(NPMJCCEGOKB->fields).JIJLBFGKNJK,
                       (MethodInfo *)0x0);
                    /* try { // try from 034b32a4 to 035b32c3 has its CatchHandler @ 034b472c */
    if (((bVar1) &&
        (bVar1 = System_String__op_Equality
                           ((__this->fields).KPDPJONADPJ,(NPMJCCEGOKB->fields).KPDPJONADPJ,
                            (MethodInfo *)0x0), bVar1)) &&
       (bVar1 = System_String__op_Equality
                          ((__this->fields).MEONABNPAPF,(NPMJCCEGOKB->fields).MEONABNPAPF,
                           (MethodInfo *)0x0), bVar1)) {
      bVar1 = (__this->fields).BGHFADDGPAD == (NPMJCCEGOKB->fields).BGHFADDGPAD;
    }
    else {
      bVar1 = false;
    }
  }
                    /* try { // try from 034b32dc to 035b32e7 has its CatchHandler @ 034b4704 */
  return bVar1;
}


// ===== public void .ctor(FKNCNNOOOIO NCMHFECBFCD)  [RVA 0x33B32EC]
// FKNCNNOOOIO$$.ctor @ RVA 0x33B32EC

/* WARNING: Type propagation algorithm not settling */

void FKNCNNOOOIO___ctor(FKNCNNOOOIO_o *__this,FKNCNNOOOIO_o *NCMHFECBFCD,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined3 uVar2;
  float fVar3;
  int32_t iVar4;
  JOCNCPCOEAC_o **ppJVar5;
  FKNCNNOOOIO_Fields *pFVar6;
  System_String_o **ppSVar7;
  System_String_o **ppSVar8;
  System_String_o **ppSVar9;
  
  if ((DAT_04567d5e & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567d5e = 1;
  }
  pFVar6 = &__this->fields;
  pFVar6->JIJLBFGKNJK = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(pFVar6);
  ppSVar7 = &(__this->fields).KPDPJONADPJ;
  *ppSVar7 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar7);
  ppSVar8 = &(__this->fields).AOOKMODPLGM;
  *ppSVar8 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar8);
  (__this->fields).ALLCFABAGOB = -1;
  ppSVar9 = &(__this->fields).MEONABNPAPF;
  *ppSVar9 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar9);
  (__this->fields).LNBKBMNLJNG.fields = (UnityEngine_Vector2_Fields)0x3f0000003f000000;
  (__this->fields).CCEKJNEFJKP.fields = (UnityEngine_Vector2_Fields)0x3f0000003f000000;
  (__this->fields).FKICEICKCOG.fields = (UnityEngine_Vector2_Fields)0x3f0000003f000000;
  (__this->fields).BEKOHBPEEKP.fields = (UnityEngine_Vector2_Fields)0x0;
  (__this->fields).AIDMEFDEOLJ = 1;
  (__this->fields).ACNLHENNKAJ = -1;
  (__this->fields).MJNNMHHINEF = 1.0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (NCMHFECBFCD != (FKNCNNOOOIO_o *)0x0) {
    (__this->fields).JIJLBFGKNJK = (NCMHFECBFCD->fields).JIJLBFGKNJK;
    thunk_FUN_01c20e04(pFVar6);
    (__this->fields).KPDPJONADPJ = (NCMHFECBFCD->fields).KPDPJONADPJ;
    thunk_FUN_01c20e04(ppSVar7);
    (__this->fields).AOOKMODPLGM = (NCMHFECBFCD->fields).AOOKMODPLGM;
    thunk_FUN_01c20e04(ppSVar8);
    (__this->fields).ALLCFABAGOB = (NCMHFECBFCD->fields).ALLCFABAGOB;
    (__this->fields).MEONABNPAPF = (NCMHFECBFCD->fields).MEONABNPAPF;
    thunk_FUN_01c20e04(ppSVar9);
    (__this->fields).BGHFADDGPAD = (NCMHFECBFCD->fields).BGHFADDGPAD;
    (__this->fields).BEKOHBPEEKP.fields = (NCMHFECBFCD->fields).BEKOHBPEEKP.fields;
                    /* try { // try from 034b3414 to 035b343b has its CatchHandler @ 034b4aac */
    (__this->fields).FKICEICKCOG.fields = (NCMHFECBFCD->fields).FKICEICKCOG.fields;
    (__this->fields).CCEKJNEFJKP.fields = (NCMHFECBFCD->fields).CCEKJNEFJKP.fields;
    (__this->fields).LNBKBMNLJNG.fields = (NCMHFECBFCD->fields).LNBKBMNLJNG.fields;
    bVar1 = (NCMHFECBFCD->fields).OLBNFCKMBEL.fields.hasValue;
    uVar2 = *(undefined3 *)&(NCMHFECBFCD->fields).OLBNFCKMBEL.fields.field_0x1;
    fVar3 = (NCMHFECBFCD->fields).OLBNFCKMBEL.fields.value.fields.x;
    (__this->fields).OLBNFCKMBEL.fields.value.fields.y =
         (NCMHFECBFCD->fields).OLBNFCKMBEL.fields.value.fields.y;
    (__this->fields).OLBNFCKMBEL.fields.hasValue = bVar1;
    *(undefined3 *)&(__this->fields).OLBNFCKMBEL.fields.field_0x1 = uVar2;
    (__this->fields).OLBNFCKMBEL.fields.value.fields.x = fVar3;
    (__this->fields).OEFBIKEMBOF = (NCMHFECBFCD->fields).OEFBIKEMBOF;
    fVar3 = (NCMHFECBFCD->fields).LJJPOKGLLHC;
    (__this->fields).FMAIEIJAFPA = (NCMHFECBFCD->fields).FMAIEIJAFPA;
    (__this->fields).LJJPOKGLLHC = fVar3;
    iVar4 = (NCMHFECBFCD->fields).ACNLHENNKAJ;
    (__this->fields).AIDMEFDEOLJ = (NCMHFECBFCD->fields).AIDMEFDEOLJ;
    (__this->fields).ACNLHENNKAJ = iVar4;
    (__this->fields).MJNNMHHINEF = (NCMHFECBFCD->fields).MJNNMHHINEF;
    ppJVar5 = &(__this->fields).JHFAAGIPDAJ;
    *ppJVar5 = (NCMHFECBFCD->fields).JHFAAGIPDAJ;
    thunk_FUN_01c20e04(ppJVar5);
                    /* try { // try from 034b3470 to 035b349b has its CatchHandler @ 034b4aa8 */
    (__this->fields).IGOGFMFHLNK.fields = (NCMHFECBFCD->fields).IGOGFMFHLNK.fields;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override string ToString()  [RVA 0x33B348C]
// FKNCNNOOOIO$$ToString @ RVA 0x33B348C

System_String_o * FKNCNNOOOIO__ToString(FKNCNNOOOIO_o *__this,MethodInfo *method)

{
  Il2CppObject *arg1;
  System_String_o *pSVar1;
  int32_t local_24;
  
  if ((DAT_04567d5f & 1) == 0) {
    FUN_01bab630(&FKNCNNOOOIO_HMFAPGCJJLL_TypeInfo);
    FUN_01bab630(&StringLiteral_19792/*"name={0} show={1}"*/);
                    /* try { // try from 034b34d0 to 035b34db has its CatchHandler @ 034b4a98 */
    DAT_04567d5f = 1;
  }
  local_24 = (__this->fields).AIDMEFDEOLJ;
  pSVar1 = (__this->fields).JIJLBFGKNJK;
                    /* try { // try from 034b34ec to 035b34f3 has its CatchHandler @ 034b4a40 */
  arg1 = (Il2CppObject *)thunk_FUN_01bda448(FKNCNNOOOIO_HMFAPGCJJLL_TypeInfo,&local_24);
                    /* try { // try from 034b34f8 to 035b34ff has its CatchHandler @ 034b4a54 */
  pSVar1 = System_String__Format(StringLiteral_19792/*"name={0} show={1}"*/,(Il2CppObject *)pSVar1,arg1,(MethodInfo *)0x0);
                    /* try { // try from 034b3510 to 035b351f has its CatchHandler @ 034b4a58 */
  return pSVar1;
}


// ===== public void .ctor()  [RVA 0x33B3518]
// FKNCNNOOOIO$$.ctor @ RVA 0x33B3518

void FKNCNNOOOIO___ctor(FKNCNNOOOIO_o *__this,MethodInfo *method)

{
                    /* try { // try from 034b352c to 035b3533 has its CatchHandler @ 034b48cc */
  if ((DAT_04567d60 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* try { // try from 034b3544 to 035b354b has its CatchHandler @ 034b48ec */
    DAT_04567d60 = 1;
  }
                    /* try { // try from 034b354c to 035b356b has its CatchHandler @ 034b4a44 */
  (__this->fields).JIJLBFGKNJK = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).KPDPJONADPJ = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).AOOKMODPLGM = StringLiteral_1/*""*/;
                    /* try { // try from 034b3578 to 035b357f has its CatchHandler @ 034b4904 */
  thunk_FUN_01c20e04();
  (__this->fields).ALLCFABAGOB = -1;
  (__this->fields).MEONABNPAPF = StringLiteral_1/*""*/;
                    /* try { // try from 034b3590 to 035b3597 has its CatchHandler @ 034b48dc */
  thunk_FUN_01c20e04();
                    /* try { // try from 034b3598 to 035b35b3 has its CatchHandler @ 034b4a4c */
  (__this->fields).LNBKBMNLJNG.fields = (UnityEngine_Vector2_Fields)0x3f0000003f000000;
  (__this->fields).CCEKJNEFJKP.fields = (UnityEngine_Vector2_Fields)0x3f0000003f000000;
  (__this->fields).FKICEICKCOG.fields = (UnityEngine_Vector2_Fields)0x3f0000003f000000;
  (__this->fields).BEKOHBPEEKP.fields = (UnityEngine_Vector2_Fields)0x0;
  (__this->fields).AIDMEFDEOLJ = 1;
  (__this->fields).ACNLHENNKAJ = -1;
  (__this->fields).MJNNMHHINEF = 1.0;
                    /* try { // try from 034b35c0 to 035b35c7 has its CatchHandler @ 034b4940 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public bool JJEABBDIACM()  [RVA 0x33B35D0]
// FKNCNNOOOIO$$JJEABBDIACM @ RVA 0x33B35D0

bool FKNCNNOOOIO__JJEABBDIACM(FKNCNNOOOIO_o *__this,MethodInfo *method)

{
                    /* try { // try from 034b35d8 to 035b35df has its CatchHandler @ 034b48a8 */
  return ((__this->fields).AIDMEFDEOLJ & 0xfffffffdU) == 0;
}


// ===== public bool MOAFEDFIIOA()  [RVA 0x33B35E0]
// FKNCNNOOOIO$$MOAFEDFIIOA @ RVA 0x33B35E0

bool FKNCNNOOOIO__MOAFEDFIIOA(FKNCNNOOOIO_o *__this,MethodInfo *method)

{
                    /* try { // try from 034b35e0 to 035b35eb has its CatchHandler @ 034b4924 */
                    /* try { // try from 034b35ec to 035b3607 has its CatchHandler @ 034b4a50 */
  return (uint)(__this->fields).AIDMEFDEOLJ < 2;
}


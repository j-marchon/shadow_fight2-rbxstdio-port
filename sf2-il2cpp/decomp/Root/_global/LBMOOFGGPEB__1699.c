// TypeDefIndex 1699
// Namespace: 
// public class LBMOOFGGPEB
// Fields:
//   public string MLNKOENNJDF; // 0x10
//   public string MOGICNLLBEM; // 0x18
//   public string DLIHMNMLEDG; // 0x20
//   public bool DGGBINHAFDB; // 0x28
//   public bool JAPGAIELCNJ; // 0x29
//   public bool CNLFJDCAIFD; // 0x2A
//   public bool BKNLGDOJJHP; // 0x2B
//   public bool LNOCGDONOKL; // 0x2C
//   public bool EOGMODIBAAI; // 0x2D
//   public bool EGKABALFMPP; // 0x2E
//   public bool AHKJNOGHCCK; // 0x2F
//   public bool BAGAHOJOINM; // 0x30
//   private LBMOOFGGPEB.OPLNJMEEOLB PKADGMAGGMK; // 0x38
//   public Color BANIDGFENDE; // 0x40
//   private object IECPOKCOKIC; // 0x50
//   public long JAODINPKJLN; // 0x58
//   public Action<object> FBKGGPDECHB; // 0x60
//   private TimerLabel NFCJGLPMIHH; // 0x68

// ===== public void LLCONNGHGKD()  [RVA 0x31D31F0]
// LBMOOFGGPEB$$LLCONNGHGKD @ RVA 0x31D31F0

void LBMOOFGGPEB__LLCONNGHGKD(LBMOOFGGPEB_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_object__o *pSVar2;
  Nekki_SF2_GUI_TimerLabel_o *pNVar3;
  
                    /* try { // try from 032d3204 to 033d320f has its CatchHandler @ 032d40ec */
  if ((DAT_04566cbf & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566cbf = 1;
    method = extraout_x1;
  }
  pSVar2 = (__this->fields).FBKGGPDECHB;
  if (pSVar2 != (System_Action_object__o *)0x0) {
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,(__this->fields).PKADGMAGGMK,
               (pSVar2->fields).super.super.method);
    method = extraout_x1_00;
  }
  pNVar3 = (__this->fields).NFCJGLPMIHH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 032d3258 to 033d325f has its CatchHandler @ 032d40f0 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).NFCJGLPMIHH;
    if (pNVar3 != (Nekki_SF2_GUI_TimerLabel_o *)0x0) {
      Nekki_SF2_GUI_TimerLabel__set_CurrentTime
                (pNVar3,(__this->fields).JAODINPKJLN,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void IIKPNGJAJIH(object CJNHFNHJHPE)  [RVA 0x31D3294]
// LBMOOFGGPEB$$IIKPNGJAJIH @ RVA 0x31D3294

void LBMOOFGGPEB__IIKPNGJAJIH(LBMOOFGGPEB_o *__this,Il2CppObject *CJNHFNHJHPE,MethodInfo *method)

{
  LBMOOFGGPEB_OPLNJMEEOLB_o *pLVar1;
  Il2CppObject **ppIVar2;
  
  ppIVar2 = &(__this->fields).IECPOKCOKIC;
  *ppIVar2 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppIVar2);
  pLVar1 = (__this->fields).PKADGMAGGMK;
                    /* try { // try from 032d32ac to 033d32b7 has its CatchHandler @ 032d415c */
  if (pLVar1 != (LBMOOFGGPEB_OPLNJMEEOLB_o *)0x0) {
    (pLVar1->fields).KOANCCDDBDA = *ppIVar2;
    thunk_FUN_01c20e04();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void JBGIAEJIKCA(TimerLabel CJNHFNHJHPE)  [RVA 0x31D32C4]
// LBMOOFGGPEB$$JBGIAEJIKCA @ RVA 0x31D32C4

void LBMOOFGGPEB__JBGIAEJIKCA
               (LBMOOFGGPEB_o *__this,Nekki_SF2_GUI_TimerLabel_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_TimerLabel_o **ppNVar2;
  Nekki_SF2_GUI_TimerLabel_o *x;
  
                    /* try { // try from 032d32c8 to 033d32d3 has its CatchHandler @ 032d4144 */
  if ((DAT_04566cc0 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 032d32fc to 033d3307 has its CatchHandler @ 032d4120 */
    DAT_04566cc0 = 1;
  }
  ppNVar2 = &(__this->fields).NFCJGLPMIHH;
  *ppNVar2 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppNVar2,CJNHFNHJHPE);
                    /* try { // try from 032d3318 to 033d3343 has its CatchHandler @ 032d4150 */
  x = *ppNVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (*ppNVar2 != (Nekki_SF2_GUI_TimerLabel_o *)0x0) {
                    /* try { // try from 032d3350 to 033d3373 has its CatchHandler @ 032d4118 */
      Nekki_SF2_GUI_TimerLabel__set_CurrentTime
                (*ppNVar2,(__this->fields).JAODINPKJLN,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void .ctor(LBMOOFGGPEB IBKIPBJJCPG)  [RVA 0x31D3370]
// LBMOOFGGPEB$$.ctor @ RVA 0x31D3370

void LBMOOFGGPEB___ctor(LBMOOFGGPEB_o *__this,LBMOOFGGPEB_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  bool_conflict bVar4;
  bool_conflict bVar5;
  bool_conflict bVar6;
  bool_conflict bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (IBKIPBJJCPG != (LBMOOFGGPEB_o *)0x0) {
                    /* try { // try from 032d3384 to 033d338f has its CatchHandler @ 032d4124 */
    LBMOOFGGPEB___ctor(__this,(IBKIPBJJCPG->fields).FBKGGPDECHB,method);
    (__this->fields).JAODINPKJLN = (IBKIPBJJCPG->fields).JAODINPKJLN;
    LBMOOFGGPEB__IIKPNGJAJIH(__this,(IBKIPBJJCPG->fields).IECPOKCOKIC,method);
    (__this->fields).MLNKOENNJDF = (IBKIPBJJCPG->fields).MLNKOENNJDF;
                    /* try { // try from 032d33ac to 033d33c7 has its CatchHandler @ 032d4108 */
    thunk_FUN_01c20e04();
    (__this->fields).MOGICNLLBEM = (IBKIPBJJCPG->fields).MOGICNLLBEM;
    thunk_FUN_01c20e04();
    (__this->fields).DLIHMNMLEDG = (IBKIPBJJCPG->fields).DLIHMNMLEDG;
    thunk_FUN_01c20e04();
    bVar1 = (IBKIPBJJCPG->fields).JAPGAIELCNJ;
    bVar2 = (IBKIPBJJCPG->fields).CNLFJDCAIFD;
    bVar3 = (IBKIPBJJCPG->fields).BKNLGDOJJHP;
    bVar4 = (IBKIPBJJCPG->fields).LNOCGDONOKL;
    bVar5 = (IBKIPBJJCPG->fields).EOGMODIBAAI;
    bVar6 = (IBKIPBJJCPG->fields).EGKABALFMPP;
    bVar7 = (IBKIPBJJCPG->fields).AHKJNOGHCCK;
                    /* try { // try from 032d33d4 to 033d33fb has its CatchHandler @ 032d40e8 */
    (__this->fields).DGGBINHAFDB = (IBKIPBJJCPG->fields).DGGBINHAFDB;
    (__this->fields).JAPGAIELCNJ = bVar1;
    (__this->fields).CNLFJDCAIFD = bVar2;
    (__this->fields).BKNLGDOJJHP = bVar3;
    (__this->fields).LNOCGDONOKL = bVar4;
    (__this->fields).EOGMODIBAAI = bVar5;
    (__this->fields).EGKABALFMPP = bVar6;
    (__this->fields).AHKJNOGHCCK = bVar7;
    (__this->fields).BAGAHOJOINM = (IBKIPBJJCPG->fields).BAGAHOJOINM;
    fVar8 = (IBKIPBJJCPG->fields).BANIDGFENDE.fields.a;
    fVar9 = (IBKIPBJJCPG->fields).BANIDGFENDE.fields.r;
    fVar10 = (IBKIPBJJCPG->fields).BANIDGFENDE.fields.g;
    (__this->fields).BANIDGFENDE.fields.b = (IBKIPBJJCPG->fields).BANIDGFENDE.fields.b;
    (__this->fields).BANIDGFENDE.fields.a = fVar8;
    (__this->fields).BANIDGFENDE.fields.r = fVar9;
    (__this->fields).BANIDGFENDE.fields.g = fVar10;
    LBMOOFGGPEB__JBGIAEJIKCA(__this,(IBKIPBJJCPG->fields).NFCJGLPMIHH,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public TimerLabel FJPBPILDGJO()  [RVA 0x31D352C]
// LBMOOFGGPEB$$FJPBPILDGJO @ RVA 0x31D352C

Nekki_SF2_GUI_TimerLabel_o * LBMOOFGGPEB__FJPBPILDGJO(LBMOOFGGPEB_o *__this,MethodInfo *method)

{
  return (__this->fields).NFCJGLPMIHH;
}


// ===== public object LFCBPBFLNDA()  [RVA 0x31D3534]
// LBMOOFGGPEB$$LFCBPBFLNDA @ RVA 0x31D3534

Il2CppObject * LBMOOFGGPEB__LFCBPBFLNDA(LBMOOFGGPEB_o *__this,MethodInfo *method)

{
  return (__this->fields).IECPOKCOKIC;
}


// ===== public void .ctor(Action<object> IELDNEAAPBE)  [RVA 0x31D3400]
// LBMOOFGGPEB$$.ctor @ RVA 0x31D3400

void LBMOOFGGPEB___ctor(LBMOOFGGPEB_o *__this,System_Action_object__o *IELDNEAAPBE,
                       MethodInfo *method)

{
  System_Action_object__o **ppSVar1;
  LBMOOFGGPEB_OPLNJMEEOLB_o *__this_00;
  MethodInfo *in_x3;
  LBMOOFGGPEB_OPLNJMEEOLB_o **ppLVar2;
  Il2CppObject *IMMNELPBGIF;
  
                    /* try { // try from 032d342c to 033d3433 has its CatchHandler @ 032d4010 */
                    /* try { // try from 032d3440 to 033d3463 has its CatchHandler @ 032d4070 */
  if ((DAT_04566cc1 & 1) == 0) {
    FUN_01bab630(&LBMOOFGGPEB_OPLNJMEEOLB_TypeInfo);
    FUN_01bab630(&StringLiteral_2086/*":"*/);
    FUN_01bab630(&StringLiteral_17538/*"d"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566cc1 = 1;
  }
                    /* try { // try from 032d347c to 033d3487 has its CatchHandler @ 032d409c */
  (__this->fields).MLNKOENNJDF = StringLiteral_2086/*":"*/;
  thunk_FUN_01c20e04();
  (__this->fields).MOGICNLLBEM = StringLiteral_17538/*"d"*/;
  thunk_FUN_01c20e04();
  (__this->fields).DLIHMNMLEDG = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).DGGBINHAFDB = true;
  (__this->fields).JAPGAIELCNJ = true;
  (__this->fields).CNLFJDCAIFD = true;
                    /* try { // try from 032d34d0 to 033d34d7 has its CatchHandler @ 032d40b4 */
  (__this->fields).LNOCGDONOKL = true;
  (__this->fields).EOGMODIBAAI = true;
  (__this->fields).EGKABALFMPP = true;
  (__this->fields).AHKJNOGHCCK = true;
  (__this->fields).BAGAHOJOINM = true;
  (__this->fields).BANIDGFENDE.fields.b = 0.0;
  (__this->fields).BANIDGFENDE.fields.a = 1.0;
  (__this->fields).BANIDGFENDE.fields.r = 0.0;
  (__this->fields).BANIDGFENDE.fields.g = 0.0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppSVar1 = &(__this->fields).FBKGGPDECHB;
  *ppSVar1 = IELDNEAAPBE;
                    /* try { // try from 032d34e8 to 033d34f3 has its CatchHandler @ 032d40f0 */
  thunk_FUN_01c20e04(ppSVar1,IELDNEAAPBE);
  IMMNELPBGIF = (__this->fields).IECPOKCOKIC;
  __this_00 = (LBMOOFGGPEB_OPLNJMEEOLB_o *)thunk_FUN_01bda818(LBMOOFGGPEB_OPLNJMEEOLB_TypeInfo);
  LBMOOFGGPEB_OPLNJMEEOLB___ctor(__this_00,__this,IMMNELPBGIF,in_x3);
  ppLVar2 = &(__this->fields).PKADGMAGGMK;
                    /* try { // try from 032d350c to 033d350f has its CatchHandler @ 032d4164 */
  *ppLVar2 = __this_00;
                    /* try { // try from 032d351c to 033d353f has its CatchHandler @ 032d4088 */
  thunk_FUN_01c20e04(ppLVar2,__this_00);
  return;
}


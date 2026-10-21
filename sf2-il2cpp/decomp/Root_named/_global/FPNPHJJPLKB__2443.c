// TypeDefIndex 2443
// Namespace: 
// public class FPNPHJJPLKB
// Fields:
//   private string MFBGDCLFCCL; // 0x10
//   private float OGJHNFDBFPK; // 0x18
//   private float EBPNFAKMAID; // 0x1C
//   private double POMJLMFEGIH; // 0x20
//   private double KPICKKKFNED; // 0x28
//   private int EDGCJCALBBI; // 0x30
//   private const bool PFJHOMJHMDL = False;

// ===== public void EJLCMCCCFPE()  [RVA 0x335FE78]
// FPNPHJJPLKB$$EJLCMCCCFPE @ RVA 0x335FE78

void FPNPHJJPLKB__EJLCMCCCFPE(FPNPHJJPLKB_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void FLIIHDOFEFE(string ALHDMEKMLPH)  [RVA 0x335FE7C]
// FPNPHJJPLKB$$FLIIHDOFEFE @ RVA 0x335FE7C

void FPNPHJJPLKB__FLIIHDOFEFE(FPNPHJJPLKB_o *__this,System_String_o *ALHDMEKMLPH,MethodInfo *method)

{
  double *format;
  double *format_00;
  bool bVar1;
  System_String_array *values;
  System_String_o *pSVar2;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  double dVar3;
  System_String_c *local_40;
  float local_38;
  uint local_34;
  
  if ((DAT_04567a7e & 1) == 0) {
    FUN_01bab630(&Fight_TypeInfo);
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_322/*" TimeScale: "*/);
    FUN_01bab630(&StringLiteral_317/*" Rs.TimeRatio: "*/);
    FUN_01bab630(&StringLiteral_295/*" IsSkippable: "*/);
    FUN_01bab630(&StringLiteral_1575/*"0.0000"*/);
    FUN_01bab630(&StringLiteral_314/*" Rs.Count: "*/);
    FUN_01bab630(&StringLiteral_315/*" Rs.Rand/None-Tacts Time: "*/);
    FUN_01bab630(&StringLiteral_1570/*"0.0"*/);
    FUN_01bab630(&StringLiteral_316/*" Rs.Time: "*/);
    DAT_04567a7e = 1;
  }
  local_38 = 0.0;
  local_40 = (System_String_c *)0x0;
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,0xd);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = ALHDMEKMLPH;
      thunk_FUN_01c20e04(values->m_Items,ALHDMEKMLPH);
      if (1 < (uint)values->max_length) {
                    /* try { // try from 0345ff8c to 0355ff93 has its CatchHandler @ 034602d0 */
        values->m_Items[1] = StringLiteral_295/*" IsSkippable: "*/;
        thunk_FUN_01c20e04();
        if ((Fight_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 0345ffa8 to 0355ffaf has its CatchHandler @ 034602c8 */
        bVar1 = Fight__BIFOAELOCOF((MethodInfo *)0x0);
                    /* try { // try from 0345ffb8 to 0355ffbf has its CatchHandler @ 034602a4 */
        local_34 = (uint)bVar1;
        pSVar2 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
        if (2 < (uint)values->max_length) {
                    /* try { // try from 0345ffd0 to 0355ffd7 has its CatchHandler @ 034602b8 */
          values->m_Items[2] = pSVar2;
                    /* try { // try from 0345ffdc to 0355ffe3 has its CatchHandler @ 034602b0 */
          thunk_FUN_01c20e04(values->m_Items + 2,pSVar2);
          if (3 < (uint)values->max_length) {
                    /* try { // try from 0345fff4 to 0355fffb has its CatchHandler @ 034602b4 */
                    /* try { // try from 0345fffc to 03560027 has its CatchHandler @ 034602e8 */
            values->m_Items[3] = StringLiteral_314/*" Rs.Count: "*/;
            thunk_FUN_01c20e04(values->m_Items + 3);
            pSVar2 = System_Int32__ToString((int)__this + 0x30,(MethodInfo *)0x0);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = pSVar2;
              thunk_FUN_01c20e04(values->m_Items + 4,pSVar2);
              if (5 < (uint)values->max_length) {
                    /* try { // try from 03460044 to 03560047 has its CatchHandler @ 034602cc */
                    /* try { // try from 0346004c to 03560053 has its CatchHandler @ 034602ac */
                values->m_Items[5] = StringLiteral_316/*" Rs.Time: "*/;
                    /* try { // try from 03460064 to 0356006b has its CatchHandler @ 034602bc */
                dVar3 = (double)thunk_FUN_01c20e04(values->m_Items + 5);
                format = &(__this->fields).POMJLMFEGIH;
                    /* try { // try from 03460070 to 03560077 has its CatchHandler @ 034602a0 */
                pSVar2 = System_Double__ToString(dVar3,(System_String_o *)format,StringLiteral_1570/*"0.0"*/)
                ;
                if (6 < (uint)values->max_length) {
                    /* try { // try from 03460088 to 0356008f has its CatchHandler @ 034602a8 */
                  values->m_Items[6] = pSVar2;
                    /* try { // try from 03460090 to 035600bb has its CatchHandler @ 034602e0 */
                  thunk_FUN_01c20e04(values->m_Items + 6,pSVar2);
                  if (7 < (uint)values->max_length) {
                    values->m_Items[7] = StringLiteral_315/*" Rs.Rand/None-Tacts Time: "*/;
                    dVar3 = (double)thunk_FUN_01c20e04(values->m_Items + 7);
                    format_00 = &(__this->fields).KPICKKKFNED;
                    /* try { // try from 034600d4 to 035600d7 has its CatchHandler @ 0346029c */
                    pSVar2 = System_Double__ToString
                                       (dVar3,(System_String_o *)format_00,StringLiteral_1570/*"0.0"*/);
                    /* try { // try from 034600dc to 035600e3 has its CatchHandler @ 03460298 */
                    if (8 < (uint)values->max_length) {
                      values->m_Items[8] = pSVar2;
                    /* try { // try from 034600ec to 035600f3 has its CatchHandler @ 03460288 */
                      thunk_FUN_01c20e04(values->m_Items + 8,pSVar2);
                    /* try { // try from 034600f8 to 035600ff has its CatchHandler @ 03460270 */
                      if (9 < (uint)values->max_length) {
                    /* try { // try from 03460108 to 0356010f has its CatchHandler @ 03460280 */
                    /* try { // try from 03460110 to 0356013b has its CatchHandler @ 034602dc */
                        values->m_Items[9] = StringLiteral_322/*" TimeScale: "*/;
                        thunk_FUN_01c20e04(values->m_Items + 9);
                        local_38 = UnityEngine_Time__get_timeScale((MethodInfo *)0x0);
                        pSVar2 = System_Single__ToString
                                           (local_38,(System_String_o *)&local_38,StringLiteral_1570/*"0.0"*/
                                           );
                        if (10 < (uint)values->max_length) {
                          values->m_Items[10] = pSVar2;
                    /* try { // try from 03460154 to 03560157 has its CatchHandler @ 0346028c */
                          thunk_FUN_01c20e04(values->m_Items + 10,pSVar2);
                    /* try { // try from 0346015c to 03560163 has its CatchHandler @ 0346026c */
                          if (0xb < (uint)values->max_length) {
                    /* try { // try from 0346016c to 03560173 has its CatchHandler @ 03460264 */
                    /* try { // try from 03460178 to 0356017f has its CatchHandler @ 03460274 */
                            values->m_Items[0xb] = StringLiteral_317/*" Rs.TimeRatio: "*/;
                    /* try { // try from 03460188 to 0356018f has its CatchHandler @ 03460268 */
                            thunk_FUN_01c20e04(values->m_Items + 0xb);
                    /* try { // try from 03460190 to 035601bb has its CatchHandler @ 034602d8 */
                            local_40 = (System_String_c *)(*format_00 / *format);
                            pSVar2 = System_Double__ToString
                                               ((double)local_40,(System_String_o *)&local_40,
                                                StringLiteral_1575/*"0.0000"*/);
                            if (0xc < (uint)values->max_length) {
                    /* try { // try from 034601bc to 035601d7 has its CatchHandler @ 034602d4 */
                              values->m_Items[0xc] = pSVar2;
                              thunk_FUN_01c20e04();
                              pSVar2 = System_String__Concat(values,(MethodInfo *)0x0);
                    /* try { // try from 034601dc to 035601e7 has its CatchHandler @ 0346027c */
                    /* try { // try from 034601e8 to 03560237 has its CatchHandler @ 0345fd24 */
                              BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                                            FUN_01bab718(
                                                  Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
                              if (BBBLOLJAMJP == (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0)
                              goto LAB_0346022c;
                              if ((int)BBBLOLJAMJP->max_length != 0) {
                                BBBLOLJAMJP->m_Items[0] = 2;
                                Nekki_Utils_DetailedLog__Log(pSVar2,BBBLOLJAMJP,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_0346022c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void FGGDIGJEGDC()  [RVA 0x3360230]
// FPNPHJJPLKB$$FGGDIGJEGDC @ RVA 0x3360230

void FPNPHJJPLKB__FGGDIGJEGDC(FPNPHJJPLKB_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void HIDHDJHPMBK()  [RVA 0x3360234]
// FPNPHJJPLKB$$HIDHDJHPMBK @ RVA 0x3360234

void FPNPHJJPLKB__HIDHDJHPMBK(FPNPHJJPLKB_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void EJHLMONKNOL()  [RVA 0x3360238]
// FPNPHJJPLKB$$EJHLMONKNOL @ RVA 0x3360238

void FPNPHJJPLKB__EJHLMONKNOL(FPNPHJJPLKB_o *__this,MethodInfo *method)

{
                    /* try { // try from 03460238 to 0356023b has its CatchHandler @ 034602c4 */
  (__this->fields).OGJHNFDBFPK = 0.0;
  (__this->fields).EBPNFAKMAID = 0.0;
                    /* try { // try from 0346023c to 0356023f has its CatchHandler @ 034602c0 */
  return;
}


// ===== public void FNJLOJHLHCI()  [RVA 0x3360240]
// FPNPHJJPLKB$$FNJLOJHLHCI @ RVA 0x3360240

void FPNPHJJPLKB__FNJLOJHLHCI(FPNPHJJPLKB_o *__this,MethodInfo *method)

{
                    /* try { // try from 03460240 to 03560247 has its CatchHandler @ 034602e4 */
  return;
}


// ===== private void KKPIIPHGEBE()  [RVA 0x3360244]
// FPNPHJJPLKB$$KKPIIPHGEBE @ RVA 0x3360244

void FPNPHJJPLKB__KKPIIPHGEBE(FPNPHJJPLKB_o *__this,MethodInfo *method)

{
  return;
}


// ===== public void LLCONNGHGKD()  [RVA 0x3360248]
// FPNPHJJPLKB$$LLCONNGHGKD @ RVA 0x3360248

void FPNPHJJPLKB__LLCONNGHGKD(FPNPHJJPLKB_o *__this,MethodInfo *method)

{
                    /* try { // try from 03460248 to 0356024b has its CatchHandler @ 03460294 */
  return;
}


// ===== private void HKAINOPNKEA(int FKDEBIJKDAE, bool EAHBGMJALCD)  [RVA 0x336024C]
// FPNPHJJPLKB$$HKAINOPNKEA @ RVA 0x336024C

void FPNPHJJPLKB__HKAINOPNKEA
               (FPNPHJJPLKB_o *__this,int32_t FKDEBIJKDAE,bool EAHBGMJALCD,MethodInfo *method)

{
  bool bVar1;
  System_String_array *values;
  System_String_o *pSVar2;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  MethodInfo *method_00;
  float fVar3;
  undefined8 uVar4;
  float local_50;
  uint local_4c;
  float local_48;
  int32_t local_44;
  
                    /* try { // try from 0346024c to 0356024f has its CatchHandler @ 03460290 */
                    /* try { // try from 03460250 to 03560253 has its CatchHandler @ 03460284 */
                    /* try { // try from 03460254 to 03560257 has its CatchHandler @ 03460278 */
                    /* try { // try from 03460258 to 0356025b has its CatchHandler @ 03460260 */
                    /* try { // try from 0346025c to 035602ff has its CatchHandler @ 0345fd24 */
                    /* catch() { ... } // from try @ 03460258 with catch @ 03460260 */
                    /* catch() { ... } // from try @ 0346016c with catch @ 03460264 */
                    /* catch() { ... } // from try @ 03460188 with catch @ 03460268 */
                    /* catch() { ... } // from try @ 0346015c with catch @ 0346026c */
                    /* catch() { ... } // from try @ 034600f8 with catch @ 03460270 */
                    /* catch() { ... } // from try @ 03460178 with catch @ 03460274 */
                    /* catch() { ... } // from try @ 03460254 with catch @ 03460278 */
                    /* catch() { ... } // from try @ 034601dc with catch @ 0346027c */
                    /* catch() { ... } // from try @ 03460108 with catch @ 03460280 */
  local_44 = FKDEBIJKDAE;
  if ((DAT_04567a7f & 1) == 0) {
                    /* catch() { ... } // from try @ 03460250 with catch @ 03460284 */
                    /* catch() { ... } // from try @ 034600ec with catch @ 03460288 */
                    /* catch() { ... } // from try @ 03460154 with catch @ 0346028c */
    FUN_01bab630(&Fight_TypeInfo);
                    /* catch() { ... } // from try @ 0346024c with catch @ 03460290 */
                    /* catch() { ... } // from try @ 03460248 with catch @ 03460294 */
                    /* catch() { ... } // from try @ 034600dc with catch @ 03460298 */
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
                    /* catch() { ... } // from try @ 034600d4 with catch @ 0346029c */
                    /* catch() { ... } // from try @ 03460070 with catch @ 034602a0 */
                    /* catch() { ... } // from try @ 0345ffb8 with catch @ 034602a4 */
    FUN_01bab630(&string___TypeInfo);
                    /* catch() { ... } // from try @ 03460088 with catch @ 034602a8 */
                    /* catch() { ... } // from try @ 0346004c with catch @ 034602ac */
                    /* catch() { ... } // from try @ 0345ffdc with catch @ 034602b0 */
    FUN_01bab630(&StringLiteral_3742/*"CURR ROUND (surv):   IsSkipped:   "*/);
                    /* catch() { ... } // from try @ 0345fff4 with catch @ 034602b4 */
                    /* catch() { ... } // from try @ 0345ffd0 with catch @ 034602b8 */
                    /* catch() { ... } // from try @ 03460064 with catch @ 034602bc */
    FUN_01bab630(&StringLiteral_322/*" TimeScale: "*/);
                    /* catch() { ... } // from try @ 0346023c with catch @ 034602c0 */
                    /* catch() { ... } // from try @ 03460238 with catch @ 034602c4 */
                    /* catch() { ... } // from try @ 0345ffa8 with catch @ 034602c8 */
    FUN_01bab630(&StringLiteral_310/*" R.Time: "*/);
                    /* catch() { ... } // from try @ 03460044 with catch @ 034602cc */
                    /* catch() { ... } // from try @ 0345ff8c with catch @ 034602d0 */
                    /* catch() { ... } // from try @ 034601bc with catch @ 034602d4 */
    FUN_01bab630(&StringLiteral_311/*" R.TimeRatio: "*/);
                    /* catch() { ... } // from try @ 03460190 with catch @ 034602d8 */
                    /* catch() { ... } // from try @ 03460110 with catch @ 034602dc */
                    /* catch() { ... } // from try @ 03460090 with catch @ 034602e0 */
    FUN_01bab630(&StringLiteral_1575/*"0.0000"*/);
                    /* catch() { ... } // from try @ 03460240 with catch @ 034602e4 */
                    /* catch() { ... } // from try @ 0345fffc with catch @ 034602e8 */
    FUN_01bab630(&StringLiteral_313/*" Rand/None-Tacts Time: "*/);
    FUN_01bab630(&StringLiteral_5550/*"END  FIGHT (surv):  "*/);
                    /* try { // try from 03460300 to 03560303 has its CatchHandler @ 0346032c */
                    /* try { // try from 03460304 to 0356033b has its CatchHandler @ 0345fd24 */
    FUN_01bab630(&StringLiteral_309/*" R.Id: "*/);
    FUN_01bab630(&StringLiteral_1570/*"0.0"*/);
    DAT_04567a7f = 1;
  }
  local_50 = 0.0;
  uVar4._0_4_ = (__this->fields).OGJHNFDBFPK;
  uVar4._4_4_ = (__this->fields).EBPNFAKMAID;
                    /* catch() { ... } // from try @ 03460300 with catch @ 0346032c */
                    /* try { // try from 0346033c to 03560343 has its CatchHandler @ 03460358 */
  local_48 = (float)(undefined4)uVar4 / ((float)uVar4._4_4_ + 0.01);
                    /* try { // try from 03460344 to 0356034f has its CatchHandler @ 0345fd24 */
  uVar4 = NEON_rev64(uVar4,4);
                    /* try { // try from 03460350 to 03560357 has its CatchHandler @ 03460358 */
                    /* catch() { ... } // from try @ 0346033c with catch @ 03460358
                       catch() { ... } // from try @ 03460350 with catch @ 03460358 */
  (__this->fields).KPICKKKFNED =
       (__this->fields).KPICKKKFNED + (double)(float)((ulong)uVar4 >> 0x20);
  (__this->fields).POMJLMFEGIH = (__this->fields).POMJLMFEGIH + (double)(float)uVar4;
  (__this->fields).EDGCJCALBBI = (__this->fields).EDGCJCALBBI + 1;
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,0xc);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = StringLiteral_3742/*"CURR ROUND (surv):   IsSkipped:   "*/;
      thunk_FUN_01c20e04();
      if ((Fight_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = Fight__BIFOAELOCOF((MethodInfo *)0x0);
      local_4c = (uint)(bVar1 && 1 < FKDEBIJKDAE);
      pSVar2 = System_Int32__ToString((int32_t)&local_4c,(MethodInfo *)0x0);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = pSVar2;
        thunk_FUN_01c20e04(values->m_Items + 1,pSVar2);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = StringLiteral_309/*" R.Id: "*/;
          thunk_FUN_01c20e04(values->m_Items + 2);
          pSVar2 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = pSVar2;
            thunk_FUN_01c20e04(values->m_Items + 3,pSVar2);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = StringLiteral_310/*" R.Time: "*/;
              fVar3 = (float)thunk_FUN_01c20e04(values->m_Items + 4);
              pSVar2 = System_Single__ToString
                                 (fVar3,(System_String_o *)&(__this->fields).EBPNFAKMAID,
                                  StringLiteral_1570/*"0.0"*/);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = pSVar2;
                thunk_FUN_01c20e04(values->m_Items + 5,pSVar2);
                if (6 < (uint)values->max_length) {
                  values->m_Items[6] = StringLiteral_313/*" Rand/None-Tacts Time: "*/;
                  fVar3 = (float)thunk_FUN_01c20e04(values->m_Items + 6);
                  pSVar2 = System_Single__ToString
                                     (fVar3,(System_String_o *)&(__this->fields).OGJHNFDBFPK,
                                      StringLiteral_1570/*"0.0"*/);
                  if (7 < (uint)values->max_length) {
                    values->m_Items[7] = pSVar2;
                    thunk_FUN_01c20e04(values->m_Items + 7,pSVar2);
                    if (8 < (uint)values->max_length) {
                      values->m_Items[8] = StringLiteral_322/*" TimeScale: "*/;
                      thunk_FUN_01c20e04(values->m_Items + 8);
                      local_50 = UnityEngine_Time__get_timeScale((MethodInfo *)0x0);
                      pSVar2 = System_Single__ToString
                                         (local_50,(System_String_o *)&local_50,StringLiteral_1570/*"0.0"*/);
                      if (9 < (uint)values->max_length) {
                        values->m_Items[9] = pSVar2;
                        thunk_FUN_01c20e04(values->m_Items + 9,pSVar2);
                        if (10 < (uint)values->max_length) {
                          values->m_Items[10] = StringLiteral_311/*" R.TimeRatio: "*/;
                          fVar3 = (float)thunk_FUN_01c20e04(values->m_Items + 10);
                          pSVar2 = System_Single__ToString
                                             (fVar3,(System_String_o *)&local_48,StringLiteral_1575/*"0.0000"*/)
                          ;
                          if (0xb < (uint)values->max_length) {
                            values->m_Items[0xb] = pSVar2;
                            thunk_FUN_01c20e04();
                            pSVar2 = System_String__Concat(values,(MethodInfo *)0x0);
                            BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                                          FUN_01bab718(
                                                  Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
                            if (BBBLOLJAMJP == (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0)
                            goto LAB_03460640;
                            if ((int)BBBLOLJAMJP->max_length != 0) {
                              method_00 = (MethodInfo *)0x0;
                              BBBLOLJAMJP->m_Items[0] = 2;
                              Nekki_Utils_DetailedLog__Log(pSVar2,BBBLOLJAMJP,(MethodInfo *)0x0);
                              if (EAHBGMJALCD) {
                                FPNPHJJPLKB__FLIIHDOFEFE(__this,StringLiteral_5550/*"END  FIGHT (surv):  "*/,method_00);
                              }
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
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_03460640:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3360644]
// FPNPHJJPLKB$$.ctor @ RVA 0x3360644

void FPNPHJJPLKB___ctor(FPNPHJJPLKB_o *__this,MethodInfo *method)

{
  if ((DAT_04567a80 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567a80 = 1;
  }
  (__this->fields).MFBGDCLFCCL = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// TypeDefIndex 3109
// Namespace: 
// public class GOJLGHMMDBO
// Fields:
//   public BKHDDKOEEKP.BGGNJLLOHII DIMGKENDINF; // 0x10
//   public string IMHCBMGEIDH; // 0x18
//   public int KODJDFKIJFJ; // 0x20
//   public int EHIIBHBCHHH; // 0x24
//   public int GNGEACPLJAG; // 0x28
//   public int GBFBOELDJDE; // 0x2C
//   public int IHOCNJJDMEB; // 0x30
//   public int OODAOEGNBGP; // 0x34
//   public int PJIABIIHIFD; // 0x38
//   public ILHHCILGBCB BHPMOKPBIOL; // 0x40
//   public IJBEKFLAPNK GCJEKKJNOPH; // 0x48
//   public List<IHMIMECHIAN> CIMKDFKBOKC; // 0x50
//   public List<BJEFHIBMHEJ> INGEFFGPJPB; // 0x58

// ===== public void NNGAAEJDJKO(long PICHJGIALAM, long GOGCALFMMAH, long PICMJBJHGDO, float IGDMJMLLKCG, float NCKIMMBNHHA, float NFFEBDBLNBK, float IKIIOACDEND, float HNOCIHBEOGA, List<float> NOGACFODKIP)  [RVA 0x34CC00C]
// GOJLGHMMDBO$$NNGAAEJDJKO @ RVA 0x34CC00C

void GOJLGHMMDBO__NNGAAEJDJKO
               (GOJLGHMMDBO_o *__this,int64_t PICHJGIALAM,int64_t GOGCALFMMAH,int64_t PICMJBJHGDO,
               float IGDMJMLLKCG,float NCKIMMBNHHA,float NFFEBDBLNBK,float IKIIOACDEND,
               float HNOCIHBEOGA,System_Collections_Generic_List_float__o *NOGACFODKIP,
               MethodInfo *method)

{
  int64_t iVar1;
  long lVar2;
  long lVar3;
  ILHHCILGBCB_o *pIVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_04568676 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<float>_get_Item__);
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_04568676 = 1;
  }
  pIVar4 = (__this->fields).BHPMOKPBIOL;
  if (pIVar4 != (ILHHCILGBCB_o *)0x0) {
    lVar2 = (pIVar4->fields).HBJALEJFBAA;
    (pIVar4->fields).BBFGEKKPMIL = (pIVar4->fields).BBFGEKKPMIL + PICHJGIALAM;
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = GameUtils__ADEEECDDBPN(GOGCALFMMAH,0,(MethodInfo *)0x0);
    (pIVar4->fields).HBJALEJFBAA = iVar1 + lVar2;
    pIVar4 = (__this->fields).BHPMOKPBIOL;
    if (pIVar4 != (ILHHCILGBCB_o *)0x0) {
      fVar6 = (float)PICHJGIALAM;
      (pIVar4->fields).OANNDNBNCOC = (pIVar4->fields).OANNDNBNCOC + PICMJBJHGDO;
      lVar2 = (pIVar4->fields).CBBHLGAPOCB;
                    /* try { // try from 035cc0ec to 036cc113 has its CatchHandler @ 035cc2e8 */
      fVar5 = (float)(int)(fVar6 * IGDMJMLLKCG) * (float)(__this->fields).KODJDFKIJFJ + 0.5;
      iVar1 = -0x8000000000000000;
      if (fVar5 != INFINITY) {
        iVar1 = (long)fVar5;
      }
      iVar1 = GameUtils__ADEEECDDBPN(iVar1,0,(MethodInfo *)0x0);
      (pIVar4->fields).CBBHLGAPOCB = iVar1 + lVar2;
      pIVar4 = (__this->fields).BHPMOKPBIOL;
      if (pIVar4 != (ILHHCILGBCB_o *)0x0) {
        lVar2 = (pIVar4->fields).CKGOPICDKMO;
                    /* try { // try from 035cc148 to 036cc173 has its CatchHandler @ 035cc2e4 */
        fVar5 = (float)(int)(fVar6 * NCKIMMBNHHA) * (float)(__this->fields).GNGEACPLJAG + 0.5;
        iVar1 = -0x8000000000000000;
        if (fVar5 != INFINITY) {
          iVar1 = (long)fVar5;
        }
        iVar1 = GameUtils__ADEEECDDBPN(iVar1,0,(MethodInfo *)0x0);
        (pIVar4->fields).CKGOPICDKMO = iVar1 + lVar2;
        pIVar4 = (__this->fields).BHPMOKPBIOL;
        if (pIVar4 != (ILHHCILGBCB_o *)0x0) {
          fVar5 = (float)(int)(fVar6 * IKIIOACDEND) + 0.5;
          lVar3 = (pIVar4->fields).MDEJIIBDAIE;
          lVar2 = -0x8000000000000000;
          if (fVar5 != INFINITY) {
            lVar2 = (long)fVar5;
          }
                    /* try { // try from 035cc1b0 to 036cc1b7 has its CatchHandler @ 035cc2dc */
          iVar1 = GameUtils__ADEEECDDBPN(lVar2 * (__this->fields).OODAOEGNBGP,0,(MethodInfo *)0x0)
          ;
          (pIVar4->fields).MDEJIIBDAIE = iVar1 + lVar3;
          pIVar4 = (__this->fields).BHPMOKPBIOL;
                    /* try { // try from 035cc1c0 to 036cc1c7 has its CatchHandler @ 035cc2d4 */
          if ((pIVar4 != (ILHHCILGBCB_o *)0x0) &&
             (NOGACFODKIP != (System_Collections_Generic_List_float__o *)0x0)) {
                    /* try { // try from 035cc1d0 to 036cc1db has its CatchHandler @ 035cc2cc */
            lVar2 = (pIVar4->fields).PDDMIAGJHBA;
                    /* try { // try from 035cc1e0 to 036cc203 has its CatchHandler @ 035cc2d0 */
            fVar5 = System_Collections_Generic_List<float>__get_Item
                              (NOGACFODKIP,(__this->fields).DIMGKENDINF,
                               Method_System_Collections_Generic_List<float>_get_Item__);
            fVar5 = (float)(int)(fVar5 * fVar6) + 0.5;
                    /* try { // try from 035cc204 to 036cc29f has its CatchHandler @ 035cbfcc */
            iVar1 = -0x8000000000000000;
            if (fVar5 != INFINITY) {
              iVar1 = (long)fVar5;
            }
            iVar1 = GameUtils__ADEEECDDBPN(iVar1,0,(MethodInfo *)0x0);
            (pIVar4->fields).PDDMIAGJHBA = iVar1 + lVar2;
            pIVar4 = (__this->fields).BHPMOKPBIOL;
            if (pIVar4 != (ILHHCILGBCB_o *)0x0) {
              lVar2 = (pIVar4->fields).NLFJFKCJEAC;
              fVar5 = (float)(int)(fVar6 * HNOCIHBEOGA) * (float)(__this->fields).PJIABIIHIFD + 0.5;
              iVar1 = -0x8000000000000000;
              if (fVar5 != INFINITY) {
                iVar1 = (long)fVar5;
              }
              iVar1 = GameUtils__ADEEECDDBPN(iVar1,0,(MethodInfo *)0x0);
              (pIVar4->fields).NLFJFKCJEAC = iVar1 + lVar2;
              pIVar4 = (__this->fields).BHPMOKPBIOL;
              if (pIVar4 != (ILHHCILGBCB_o *)0x0) {
                    /* try { // try from 035cc2a0 to 036cc2a7 has its CatchHandler @ 035cc2ec */
                    /* try { // try from 035cc2a8 to 036cc2ab has its CatchHandler @ 035cc2e0 */
                    /* try { // try from 035cc2ac to 036cc2af has its CatchHandler @ 035cc2d8 */
                    /* try { // try from 035cc2b0 to 036cc2b3 has its CatchHandler @ 035cc2c8 */
                (pIVar4->fields).JLANKGCLFPC =
                     (pIVar4->fields).CBBHLGAPOCB + (pIVar4->fields).HBJALEJFBAA +
                     (pIVar4->fields).CKGOPICDKMO + (pIVar4->fields).MDEJIIBDAIE +
                     (pIVar4->fields).PDDMIAGJHBA + (pIVar4->fields).NLFJFKCJEAC;
                (pIVar4->fields).JJBAIGCDEMD = (pIVar4->fields).OANNDNBNCOC;
                    /* try { // try from 035cc2b4 to 036cc2b7 has its CatchHandler @ 035cbfcc */
                    /* try { // try from 035cc2b8 to 036cc2bb has its CatchHandler @ 035cc2c4 */
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035cc2bc to 036cc2fb has its CatchHandler @ 035cbfcc */
  FUN_01bab8c8();
}


// ===== public string ALJPINHKMFK()  [RVA 0x34CC2C0]
// GOJLGHMMDBO$$ALJPINHKMFK @ RVA 0x34CC2C0

System_String_o * GOJLGHMMDBO__ALJPINHKMFK(GOJLGHMMDBO_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
                    /* catch() { ... } // from try @ 035cc2b8 with catch @ 035cc2c4 */
  pSVar1 = GOJLGHMMDBO__ALJPINHKMFK((__this->fields).DIMGKENDINF,method);
  return pSVar1;
}


// ===== public static string ALJPINHKMFK(BKHDDKOEEKP.BGGNJLLOHII NPDOEIJHKNP)  [RVA 0x34CC2C8]
// GOJLGHMMDBO$$ALJPINHKMFK @ RVA 0x34CC2C8

System_String_o * GOJLGHMMDBO__ALJPINHKMFK(int32_t NPDOEIJHKNP,MethodInfo *method)

{
  undefined8 *puVar1;
  
                    /* catch() { ... } // from try @ 035cc2b0 with catch @ 035cc2c8 */
                    /* catch() { ... } // from try @ 035cc1d0 with catch @ 035cc2cc */
                    /* catch() { ... } // from try @ 035cc1e0 with catch @ 035cc2d0 */
                    /* catch() { ... } // from try @ 035cc1c0 with catch @ 035cc2d4 */
                    /* catch() { ... } // from try @ 035cc2ac with catch @ 035cc2d8 */
                    /* catch() { ... } // from try @ 035cc1b0 with catch @ 035cc2dc */
  if ((DAT_04568677 & 1) == 0) {
                    /* catch() { ... } // from try @ 035cc2a8 with catch @ 035cc2e0 */
                    /* catch() { ... } // from try @ 035cc148 with catch @ 035cc2e4 */
                    /* catch() { ... } // from try @ 035cc0ec with catch @ 035cc2e8 */
    FUN_01bab630(&StringLiteral_18666/*"goldFantasticStyle"*/);
                    /* catch() { ... } // from try @ 035cc2a0 with catch @ 035cc2ec */
    FUN_01bab630(&StringLiteral_18668/*"goldHardStyle"*/);
                    /* try { // try from 035cc2fc to 036cc2ff has its CatchHandler @ 035cc310 */
    FUN_01bab630(&StringLiteral_18665/*"goldCrazyStyle"*/);
    FUN_01bab630(&StringLiteral_18662/*"goldAgressiveStyle"*/);
                    /* catch() { ... } // from try @ 035cc2fc with catch @ 035cc310 */
                    /* try { // try from 035cc318 to 036cc37f has its CatchHandler @ 035cc394 */
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_18663/*"goldBrutalStyle"*/);
    FUN_01bab630(&StringLiteral_18672/*"goldTurtleStyle"*/);
    DAT_04568677 = 1;
  }
  if ((uint)NPDOEIJHKNP < 6) {
    puVar1 = (undefined8 *)(&PTR_StringLiteral_18672/*"goldTurtleStyle"*/_03fc68b8)[NPDOEIJHKNP];
  }
  else {
    puVar1 = &StringLiteral_1/*""*/;
  }
  return (System_String_o *)*puVar1;
}


// ===== public void PNBCOGPBNJK(long PICHJGIALAM, long GOGCALFMMAH, long PICMJBJHGDO, float IGDMJMLLKCG, float NCKIMMBNHHA, float NFFEBDBLNBK, float IKIIOACDEND, float HNOCIHBEOGA, List<float> NOGACFODKIP)  [RVA 0x34CC36C]
// GOJLGHMMDBO$$PNBCOGPBNJK @ RVA 0x34CC36C

void GOJLGHMMDBO__PNBCOGPBNJK
               (GOJLGHMMDBO_o *__this,int64_t PICHJGIALAM,int64_t GOGCALFMMAH,int64_t PICMJBJHGDO,
               float IGDMJMLLKCG,float NCKIMMBNHHA,float NFFEBDBLNBK,float IKIIOACDEND,
               float HNOCIHBEOGA,System_Collections_Generic_List_float__o *NOGACFODKIP,
               MethodInfo *method)

{
  int64_t iVar1;
  ILHHCILGBCB_o *pIVar2;
  float fVar3;
  float fVar4;
  
                    /* try { // try from 035cc380 to 036cc38b has its CatchHandler @ 035cbfcc */
                    /* try { // try from 035cc38c to 036cc393 has its CatchHandler @ 035cc394 */
                    /* catch() { ... } // from try @ 035cc318 with catch @ 035cc394
                       catch() { ... } // from try @ 035cc38c with catch @ 035cc394 */
                    /* try { // try from 035cc398 to 036cc48f has its CatchHandler @ 035cc398
                       catch() { ... } // from try @ 035cc398 with catch @ 035cc398
                       catch() { ... } // from try @ 035cc5f0 with catch @ 035cc398
                       catch() { ... } // from try @ 035cc694 with catch @ 035cc398
                       catch() { ... } // from try @ 035cc69c with catch @ 035cc398
                       catch() { ... } // from try @ 035cc768 with catch @ 035cc398 */
  if ((DAT_04568678 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<float>_get_Item__);
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_04568678 = 1;
  }
  pIVar2 = (__this->fields).BHPMOKPBIOL;
  if (pIVar2 != (ILHHCILGBCB_o *)0x0) {
    (pIVar2->fields).BBFGEKKPMIL = PICHJGIALAM;
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = GameUtils__ADEEECDDBPN(GOGCALFMMAH,0,(MethodInfo *)0x0);
    (pIVar2->fields).HBJALEJFBAA = iVar1;
    pIVar2 = (__this->fields).BHPMOKPBIOL;
    if (pIVar2 != (ILHHCILGBCB_o *)0x0) {
      (pIVar2->fields).OANNDNBNCOC = PICMJBJHGDO;
      fVar4 = (float)PICHJGIALAM;
      fVar3 = (float)(int)(fVar4 * IGDMJMLLKCG) * (float)(__this->fields).KODJDFKIJFJ + 0.5;
      iVar1 = -0x8000000000000000;
      if (fVar3 != INFINITY) {
        iVar1 = (long)fVar3;
      }
      iVar1 = GameUtils__ADEEECDDBPN(iVar1,0,(MethodInfo *)0x0);
      (pIVar2->fields).CBBHLGAPOCB = iVar1;
      pIVar2 = (__this->fields).BHPMOKPBIOL;
      fVar3 = (float)(int)(fVar4 * NCKIMMBNHHA) * (float)(__this->fields).GNGEACPLJAG + 0.5;
      iVar1 = -0x8000000000000000;
      if (fVar3 != INFINITY) {
        iVar1 = (long)fVar3;
      }
                    /* try { // try from 035cc490 to 036cc4b7 has its CatchHandler @ 035cc6d0 */
      iVar1 = GameUtils__ADEEECDDBPN(iVar1,0,(MethodInfo *)0x0);
      if (pIVar2 != (ILHHCILGBCB_o *)0x0) {
        (pIVar2->fields).CKGOPICDKMO = iVar1;
        pIVar2 = (__this->fields).BHPMOKPBIOL;
        fVar3 = (float)(int)(fVar4 * IKIIOACDEND) * (float)(__this->fields).OODAOEGNBGP + 0.5;
        iVar1 = -0x8000000000000000;
        if (fVar3 != INFINITY) {
          iVar1 = (long)fVar3;
        }
        iVar1 = GameUtils__ADEEECDDBPN(iVar1,0,(MethodInfo *)0x0);
        if ((pIVar2 != (ILHHCILGBCB_o *)0x0) &&
           ((pIVar2->fields).MDEJIIBDAIE = iVar1,
           NOGACFODKIP != (System_Collections_Generic_List_float__o *)0x0)) {
                    /* try { // try from 035cc4ec to 036cc517 has its CatchHandler @ 035cc6cc */
          pIVar2 = (__this->fields).BHPMOKPBIOL;
          fVar3 = System_Collections_Generic_List<float>__get_Item
                            (NOGACFODKIP,(__this->fields).DIMGKENDINF,
                             Method_System_Collections_Generic_List<float>_get_Item__);
          fVar3 = (float)(int)(fVar3 * fVar4) + 0.5;
          iVar1 = -0x8000000000000000;
          if (fVar3 != INFINITY) {
            iVar1 = (long)fVar3;
          }
          iVar1 = GameUtils__ADEEECDDBPN(iVar1,0,(MethodInfo *)0x0);
          if (pIVar2 != (ILHHCILGBCB_o *)0x0) {
            (pIVar2->fields).PDDMIAGJHBA = iVar1;
                    /* try { // try from 035cc554 to 036cc55b has its CatchHandler @ 035cc6b8 */
            pIVar2 = (__this->fields).BHPMOKPBIOL;
            fVar3 = (float)(int)(fVar4 * HNOCIHBEOGA) * (float)(__this->fields).PJIABIIHIFD + 0.5;
            iVar1 = -0x8000000000000000;
            if (fVar3 != INFINITY) {
              iVar1 = (long)fVar3;
            }
                    /* try { // try from 035cc574 to 036cc57b has its CatchHandler @ 035cc6c8 */
            iVar1 = GameUtils__ADEEECDDBPN(iVar1,0,(MethodInfo *)0x0);
            if (pIVar2 != (ILHHCILGBCB_o *)0x0) {
              (pIVar2->fields).NLFJFKCJEAC = iVar1;
                    /* try { // try from 035cc584 to 036cc58f has its CatchHandler @ 035cc6bc */
              pIVar2 = (__this->fields).BHPMOKPBIOL;
              if (pIVar2 != (ILHHCILGBCB_o *)0x0) {
                    /* try { // try from 035cc598 to 036cc5a3 has its CatchHandler @ 035cc6b0 */
                    /* try { // try from 035cc5b4 to 036cc5c3 has its CatchHandler @ 035cc6b4 */
                (pIVar2->fields).JLANKGCLFPC =
                     (pIVar2->fields).CBBHLGAPOCB + (pIVar2->fields).HBJALEJFBAA +
                     (pIVar2->fields).CKGOPICDKMO + (pIVar2->fields).MDEJIIBDAIE +
                     (pIVar2->fields).PDDMIAGJHBA + (pIVar2->fields).NLFJFKCJEAC;
                (pIVar2->fields).JJBAIGCDEMD = PICMJBJHGDO;
                    /* try { // try from 035cc5cc to 036cc5d7 has its CatchHandler @ 035cc6ac */
                return;
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


// ===== public void .ctor()  [RVA 0x34CC5D8]
// GOJLGHMMDBO$$.ctor @ RVA 0x34CC5D8

void GOJLGHMMDBO___ctor(GOJLGHMMDBO_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  ILHHCILGBCB_o *__this_00;
  ILHHCILGBCB_o **ppIVar2;
  IJBEKFLAPNK_o *__this_01;
  IJBEKFLAPNK_o **ppIVar3;
  System_Collections_Generic_List_IHMIMECHIAN__o *__this_02;
  System_Collections_Generic_List_IHMIMECHIAN__o **ppSVar4;
  System_Collections_Generic_List_BJEFHIBMHEJ__o *__this_03;
  System_Collections_Generic_List_BJEFHIBMHEJ__o **ppSVar5;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 035cc5e4 to 036cc5ef has its CatchHandler @ 035cc6a8 */
                    /* try { // try from 035cc5f0 to 036cc683 has its CatchHandler @ 035cc398 */
  if ((DAT_04568679 & 1) == 0) {
    FUN_01bab630(&IJBEKFLAPNK_TypeInfo);
    FUN_01bab630(&ILHHCILGBCB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BJEFHIBMHEJ>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHMIMECHIAN>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IHMIMECHIAN>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<BJEFHIBMHEJ>_TypeInfo);
    DAT_04568679 = 1;
    method = extraout_x1;
  }
  pSVar1 = GOJLGHMMDBO__ALJPINHKMFK(0,method);
                    /* try { // try from 035cc684 to 036cc68b has its CatchHandler @ 035cc6d4 */
                    /* try { // try from 035cc68c to 036cc68f has its CatchHandler @ 035cc6c4 */
  (__this->fields).IMHCBMGEIDH = pSVar1;
                    /* try { // try from 035cc690 to 036cc693 has its CatchHandler @ 035cc6c0 */
  thunk_FUN_01c20e04();
                    /* try { // try from 035cc694 to 036cc697 has its CatchHandler @ 035cc398 */
                    /* try { // try from 035cc698 to 036cc69b has its CatchHandler @ 035cc6a4 */
  __this_00 = (ILHHCILGBCB_o *)thunk_FUN_01bda818(ILHHCILGBCB_TypeInfo);
                    /* try { // try from 035cc69c to 036cc6e3 has its CatchHandler @ 035cc398 */
                    /* catch() { ... } // from try @ 035cc698 with catch @ 035cc6a4 */
  ILHHCILGBCB___ctor(__this_00,(MethodInfo *)0x0);
  ppIVar2 = &(__this->fields).BHPMOKPBIOL;
                    /* catch() { ... } // from try @ 035cc5e4 with catch @ 035cc6a8 */
                    /* catch() { ... } // from try @ 035cc5cc with catch @ 035cc6ac */
  *ppIVar2 = __this_00;
                    /* catch() { ... } // from try @ 035cc598 with catch @ 035cc6b0 */
                    /* catch() { ... } // from try @ 035cc5b4 with catch @ 035cc6b4 */
  thunk_FUN_01c20e04(ppIVar2,__this_00);
                    /* catch() { ... } // from try @ 035cc554 with catch @ 035cc6b8 */
                    /* catch() { ... } // from try @ 035cc584 with catch @ 035cc6bc */
  __this_01 = (IJBEKFLAPNK_o *)thunk_FUN_01bda818(IJBEKFLAPNK_TypeInfo);
                    /* catch() { ... } // from try @ 035cc690 with catch @ 035cc6c0 */
                    /* catch() { ... } // from try @ 035cc68c with catch @ 035cc6c4 */
                    /* catch() { ... } // from try @ 035cc574 with catch @ 035cc6c8 */
  IJBEKFLAPNK___ctor(__this_01,(MethodInfo *)0x0);
  ppIVar3 = &(__this->fields).GCJEKKJNOPH;
                    /* catch() { ... } // from try @ 035cc4ec with catch @ 035cc6cc */
                    /* catch() { ... } // from try @ 035cc490 with catch @ 035cc6d0 */
  *ppIVar3 = __this_01;
                    /* catch() { ... } // from try @ 035cc684 with catch @ 035cc6d4 */
  thunk_FUN_01c20e04(ppIVar3,__this_01);
  __this_02 = (System_Collections_Generic_List_IHMIMECHIAN__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IHMIMECHIAN>_TypeInfo);
                    /* try { // try from 035cc6e4 to 036cc6e7 has its CatchHandler @ 035cc6f8 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             Method_System_Collections_Generic_List<IHMIMECHIAN>__ctor__);
  ppSVar4 = &(__this->fields).CIMKDFKBOKC;
  *ppSVar4 = __this_02;
                    /* catch() { ... } // from try @ 035cc6e4 with catch @ 035cc6f8 */
  thunk_FUN_01c20e04(ppSVar4,__this_02);
                    /* try { // try from 035cc700 to 036cc767 has its CatchHandler @ 035cc77c */
  __this_03 = (System_Collections_Generic_List_BJEFHIBMHEJ__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<BJEFHIBMHEJ>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_03,
             Method_System_Collections_Generic_List<BJEFHIBMHEJ>__ctor__);
  ppSVar5 = &(__this->fields).INGEFFGPJPB;
  *ppSVar5 = __this_03;
  thunk_FUN_01c20e04(ppSVar5,__this_03);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


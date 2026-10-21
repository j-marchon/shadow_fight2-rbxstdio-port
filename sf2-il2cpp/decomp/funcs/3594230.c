// HNCJMEBNIMP$$DLICHIJMCLK @ RVA 0x3594230

void HNCJMEBNIMP__DLICHIJMCLK
               (HNCJMEBNIMP_o *__this,System_String_o **ACCIHBHMFPN,int64_t *CJNHFNHJHPE,
               MethodInfo *method)

{
  int64_t iVar1;
  EILGGBOIMGE_FMFDKGKCBBG_o *__this_00;
  LEGDPJHPEOB_o *__this_01;
  System_String_o *pSVar2;
  double dVar3;
  
  if ((DAT_04568d91 & 1) == 0) {
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    FUN_01bab630(&LEGDPJHPEOB_TypeInfo);
    DAT_04568d91 = 1;
  }
  __this_00 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
  EILGGBOIMGE_FMFDKGKCBBG___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (LEGDPJHPEOB_o *)thunk_FUN_01bda818(LEGDPJHPEOB_TypeInfo);
  LEGDPJHPEOB___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (LEGDPJHPEOB_o *)0x0) {
    (__this_01->fields).AAJBIMFNMBB = (__this->fields).super.IJOKKFKPBEP;
    thunk_FUN_01c20e04();
    EILGGBOIMGE__KFMNMGGDHFD
              ((EILGGBOIMGE_o *)__this_01,(__this->fields).JDNKKGPNHPB,__this_00,false,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    if (__this_00 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
      pSVar2 = (System_String_o *)
               (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                         (__this_00,(__this_00->klass->vtable)._3_ToString.method);
      *ACCIHBHMFPN = pSVar2;
      thunk_FUN_01c20e04(ACCIHBHMFPN,pSVar2);
                    /* try { // try from 0369430c to 0379481f has its CatchHandler @ 0369430c
                       catch() { ... } // from try @ 0369430c with catch @ 0369430c
                       catch() { ... } // from try @ 03694840 with catch @ 0369430c
                       catch() { ... } // from try @ 03695048 with catch @ 0369430c
                       catch() { ... } // from try @ 03695074 with catch @ 0369430c
                       catch() { ... } // from try @ 036952a4 with catch @ 0369430c
                       catch() { ... } // from try @ 036952e4 with catch @ 0369430c
                       catch() { ... } // from try @ 03695330 with catch @ 0369430c
                       catch() { ... } // from try @ 03695354 with catch @ 0369430c
                       catch() { ... } // from try @ 03695394 with catch @ 0369430c */
      EILGGBOIMGE_FMFDKGKCBBG__NDNPGAKJLHM(__this_00,(MethodInfo *)0x0);
      EILGGBOIMGE__KFMNMGGDHFD
                ((EILGGBOIMGE_o *)__this_01,(__this->fields).PCNEDMAJMOJ,__this_00,false,
                 (System_String_o *)0x0,(MethodInfo *)0x0);
      dVar3 = (__this_00->fields).HNFHNNLOLGK;
      iVar1 = -0x8000000000000000;
      if (dVar3 != INFINITY) {
        iVar1 = (long)dVar3;
      }
      *CJNHFNHJHPE = iVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


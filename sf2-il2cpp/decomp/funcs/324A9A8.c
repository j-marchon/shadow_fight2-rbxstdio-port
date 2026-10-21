// JLHAELMHHJL$$MAHFCKJGBPP @ RVA 0x324A9A8

void JLHAELMHHJL__MAHFCKJGBPP(JLHAELMHHJL_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  EILGGBOIMGE_FMFDKGKCBBG_o *__this_00;
  LEGDPJHPEOB_o *__this_01;
  PKHMIGFEJCL_o **ppPVar1;
  ADJEBFOPFFF_o *__this_02;
  System_String_o *LFKENPEPPAL;
  System_Action_BKKPAKHJDKB__o *BPCGDKENMAE;
  
  if ((DAT_045670ee & 1) == 0) {
    FUN_01bab630(&System_Action<BKKPAKHJDKB>_TypeInfo);
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_JLHAELMHHJL_PHNBAHHFBIE__);
    FUN_01bab630(&LEGDPJHPEOB_TypeInfo);
    DAT_045670ee = 1;
  }
  (*(__this->klass->vtable)._4_PKIFMKGDJJN.methodPtr)
            (__this,(__this->klass->vtable)._4_PKIFMKGDJJN.method);
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  __this_00 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
  EILGGBOIMGE_FMFDKGKCBBG___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (LEGDPJHPEOB_o *)thunk_FUN_01bda818(LEGDPJHPEOB_TypeInfo);
  LEGDPJHPEOB___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (LEGDPJHPEOB_o *)0x0) {
    ppPVar1 = &(__this_01->fields).AAJBIMFNMBB;
    *ppPVar1 = AAJBIMFNMBB;
    thunk_FUN_01c20e04(ppPVar1,AAJBIMFNMBB);
    EILGGBOIMGE__KFMNMGGDHFD
              ((EILGGBOIMGE_o *)__this_01,(__this->fields).MOMNHMKOKAN,__this_00,false,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_02 = HJPEKDOPBHN__EKIJCGJLILF((MethodInfo *)0x0);
    if (__this_00 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
      LFKENPEPPAL = (System_String_o *)
                    (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                              (__this_00,(__this_00->klass->vtable)._3_ToString.method);
      BPCGDKENMAE = (System_Action_BKKPAKHJDKB__o *)
                    thunk_FUN_01bda818(System_Action<BKKPAKHJDKB>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_02 != (ADJEBFOPFFF_o *)0x0) {
        ADJEBFOPFFF__EFGGOJMGCLK(__this_02,LFKENPEPPAL,BPCGDKENMAE,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// MGJNNCKDJCP$$MAHFCKJGBPP @ RVA 0x35C5120

void MGJNNCKDJCP__MAHFCKJGBPP(MGJNNCKDJCP_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  EILGGBOIMGE_FMFDKGKCBBG_o *__this_00;
  LEGDPJHPEOB_o *__this_01;
  PKHMIGFEJCL_o **ppPVar2;
  System_String_o *a;
  MethodInfo *method_00;
  
  if ((DAT_04568f5a & 1) == 0) {
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    FUN_01bab630(&LEGDPJHPEOB_TypeInfo);
    FUN_01bab630(&StringLiteral_8095);
    FUN_01bab630(&StringLiteral_10305);
    DAT_04568f5a = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  __this_00 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
  EILGGBOIMGE_FMFDKGKCBBG___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (LEGDPJHPEOB_o *)thunk_FUN_01bda818(LEGDPJHPEOB_TypeInfo);
  LEGDPJHPEOB___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (LEGDPJHPEOB_o *)0x0) {
    ppPVar2 = &(__this_01->fields).AAJBIMFNMBB;
    *ppPVar2 = AAJBIMFNMBB;
    thunk_FUN_01c20e04(ppPVar2,AAJBIMFNMBB);
    if (__this_00 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
      EILGGBOIMGE_FMFDKGKCBBG__NDNPGAKJLHM(__this_00,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      EILGGBOIMGE__KFMNMGGDHFD
                ((EILGGBOIMGE_o *)__this_01,(__this->fields).IDNBELKLCEL,__this_00,false,
                 (System_String_o *)0x0,(MethodInfo *)0x0);
      a = (System_String_o *)
          (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                    (__this_00,(__this_00->klass->vtable)._3_ToString.method);
      bVar1 = System_String__op_Equality(a,StringLiteral_10305,(MethodInfo *)0x0);
      if (bVar1) {
        MGJNNCKDJCP__GPNMPFADPOJ(__this,__this_00,__this_01,method_00);
      }
      else {
        bVar1 = System_String__op_Equality(a,StringLiteral_8095,(MethodInfo *)0x0);
        if (bVar1) {
          MGJNNCKDJCP__EPGONHLDJFD(__this,__this_00,__this_01,method_00);
        }
      }
      BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


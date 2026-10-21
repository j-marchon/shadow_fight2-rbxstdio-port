// OJJLPLHNGBP.BELGMANHGIJ$$ALFGGEHJPGL @ RVA 0x30303F8

void OJJLPLHNGBP_BELGMANHGIJ__ALFGGEHJPGL(OJJLPLHNGBP_BELGMANHGIJ_o *__this,MethodInfo *method)

{
  System_InvalidOperationException_o *__this_00;
  System_String_o *message;
  undefined8 uVar1;
  
  if ((DAT_04565cf5 & 1) == 0) {
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<OJJLPLHNGBP_BELGMANHGIJ>_ALFGGEHJPGL__);
    DAT_04565cf5 = 1;
  }
  PDBDELCMKJG_DGCHKODLPJG<object>__ALFGGEHJPGL
            ((PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)__this,
             Method_PDBDELCMKJG_DGCHKODLPJG<OJJLPLHNGBP_BELGMANHGIJ>_ALFGGEHJPGL__);
  if (((__this->fields).HHBINDOFHDF != (System_Action_NIEPOJOIFNE__o *)0x0) &&
     ((__this->fields).HBCDBMFDHDH != (System_Action_GPBHNPOEFDO__o *)0x0)) {
    thunk_FUN_01bb9178(&System_InvalidOperationException_TypeInfo);
    __this_00 = (System_InvalidOperationException_o *)thunk_FUN_01bda818();
    message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_4155);
    System_InvalidOperationException___ctor(__this_00,message,(MethodInfo *)0x0);
    uVar1 = thunk_FUN_01bb9178(&Method_OJJLPLHNGBP_BELGMANHGIJ_ALFGGEHJPGL__);
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(__this_00,uVar1);
  }
  return;
}


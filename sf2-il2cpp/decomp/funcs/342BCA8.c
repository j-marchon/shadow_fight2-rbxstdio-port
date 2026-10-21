// POEIJGLGEED$$LDJCICLOEOB @ RVA 0x342BCA8

void POEIJGLGEED__LDJCICLOEOB(POEIJGLGEED_PGHHNOPEKLB_o *BFPCMHPBAGL,MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  bool_conflict bVar4;
  bool_conflict bVar5;
  SUProxy_o *__this;
  System_Action_int__string__o *GNENFFLCFJK;
  POEIJGLGEED_PGHHNOPEKLB_EPDFBDBHENI_o *pPVar6;
  System_String_o *PFLHEACAKFG;
  
  if ((DAT_0456813a & 1) == 0) {
    FUN_01bab630(&System_Action<int,_string>_TypeInfo);
    FUN_01bab630(&Method_POEIJGLGEED_ODCAOCGHMPN__);
    DAT_0456813a = 1;
  }
  __this = SUProxy__get_Current((MethodInfo *)0x0);
  if (BFPCMHPBAGL == (POEIJGLGEED_PGHHNOPEKLB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar6 = (BFPCMHPBAGL->fields).PKPHIABHKFE;
  if (pPVar6 == (POEIJGLGEED_PGHHNOPEKLB_EPDFBDBHENI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  PFLHEACAKFG = (pPVar6->fields).JBDFLNMINKD;
  bVar1 = (pPVar6->fields).IBOODFDOFGP;
  bVar2 = (pPVar6->fields).CBADOHAADMD;
  bVar3 = (pPVar6->fields).OHELOABONEN;
  bVar4 = (pPVar6->fields).GDIJGCGHKIB;
  bVar5 = (pPVar6->fields).NLFPMGBICIK;
  GNENFFLCFJK = (System_Action_int__string__o *)
                thunk_FUN_01bda818(System_Action<int,_string>_TypeInfo);
  System_Action<int,_object>___ctor();
  if (__this != (SUProxy_o *)0x0) {
    SUProxy__LCL(__this,PFLHEACAKFG,bVar1 != false,bVar2 != false,bVar3 != false,bVar4 != false,
                 bVar5 != false,GNENFFLCFJK,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


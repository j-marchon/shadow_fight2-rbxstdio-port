// JANDANNAOBB$$FBBMDNCGPFN @ RVA 0x334AABC

void JANDANNAOBB__FBBMDNCGPFN
               (JANDANNAOBB_o *__this,Core_Network_ServerProvider_DEBEPAKJMBK_o *IHFNKAGGMBO,
               MethodInfo *method)

{
  JANDANNAOBB_BGGGFKFAPIM_o local_30;
  
  if ((DAT_045679f0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8629);
    DAT_045679f0 = 1;
  }
  local_30.fields.__4__this = (JANDANNAOBB_o *)0x0;
  local_30.fields.loginData = IHFNKAGGMBO;
  thunk_FUN_01c20e04(&local_30,IHFNKAGGMBO);
  local_30.fields.__4__this = __this;
  thunk_FUN_01c20e04(&local_30.fields.__4__this,__this);
  if ((local_30.fields.loginData == (Core_Network_ServerProvider_DEBEPAKJMBK_o *)0x0) ||
     (((local_30.fields.loginData)->fields).PEKGJKIHHKJ == false)) {
    KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,StringLiteral_8629,(MethodInfo *)0x0);
  }
  else {
    JANDANNAOBB__KPPJMGHPAIL(__this,&local_30,method);
  }
  IJIHLBLCJMG__FGNINNOOCCL((IJIHLBLCJMG_o *)__this,true,(MethodInfo *)0x0);
  return;
}


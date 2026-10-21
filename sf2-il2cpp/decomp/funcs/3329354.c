// PCEDNFLCPPF$$MDNBLMPJFML @ RVA 0x3329354

void PCEDNFLCPPF__MDNBLMPJFML(PCEDNFLCPPF_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  System_String_o *AAIHDEKMIJG;
  SimpleJSON_JSONNode_o *pSVar1;
  System_String_o *FDLJCNLNCOC;
  
  PCEDNFLCPPF__OGLOKFGFOLP(__this,method);
  AAIHDEKMIJG = PCEDNFLCPPF__MDPANMJGEEI(method_00);
  pSVar1 = (__this->fields).HHCKEAILEEN;
  if (pSVar1 != (SimpleJSON_JSONNode_o *)0x0) {
    FDLJCNLNCOC = (System_String_o *)
                  (*(pSVar1->klass->vtable)._3_ToString.methodPtr)
                            (pSVar1,(pSVar1->klass->vtable)._3_ToString.method);
    NEHNBJKKABI__GPNPELOHJCJ(AAIHDEKMIJG,FDLJCNLNCOC,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


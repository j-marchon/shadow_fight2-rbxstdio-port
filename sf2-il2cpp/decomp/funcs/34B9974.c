// GKLPDMLELJF$$MergeFrom @ RVA 0x34B9974

void GKLPDMLELJF__MergeFrom(GKLPDMLELJF_o *__this,GKLPDMLELJF_o *IBKIPBJJCPG,MethodInfo *method)

{
  ulong uVar1;
  int iVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  System_String_o *pSVar4;
  long lVar5;
  GKLPDMLELJF_Fields *pGVar6;
  
  if ((DAT_045685b2 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<long>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<long>_get_HasValue__);
    DAT_045685b2 = 1;
  }
  if (IBKIPBJJCPG != (GKLPDMLELJF_o *)0x0) {
    lVar5 = (IBKIPBJJCPG->fields).ANAJGHJEEOC;
    if (lVar5 != 0) {
      (__this->fields).ANAJGHJEEOC = lVar5;
    }
    pSVar4 = (IBKIPBJJCPG->fields).FFOIEHLJLDA;
    if (pSVar4 != (System_String_o *)0x0) {
      if ((pSVar4->fields)._stringLength != 0) {
        GKLPDMLELJF__GCAEKDKFFKK(__this,pSVar4,method);
      }
      pSVar4 = (IBKIPBJJCPG->fields).LLBEKLPKDHK;
      if (pSVar4 != (System_String_o *)0x0) {
        if ((pSVar4->fields)._stringLength != 0) {
          GKLPDMLELJF__OFDBFMLANAH(__this,pSVar4,method);
        }
        iVar2 = (IBKIPBJJCPG->fields).PEBHLKLGDBM;
        if (iVar2 != 0) {
          (__this->fields).PEBHLKLGDBM = iVar2;
        }
        iVar2 = (IBKIPBJJCPG->fields).PFJPLCAIGJH;
        if (iVar2 != 0) {
          (__this->fields).PFJPLCAIGJH = iVar2;
        }
        if ((IBKIPBJJCPG->fields).ADEIKPGDIPM.fields.hasValue != false) {
          uVar1 = *(ulong *)&(IBKIPBJJCPG->fields).ADEIKPGDIPM.fields;
          lVar5 = (IBKIPBJJCPG->fields).ADEIKPGDIPM.fields.value;
          if ((((__this->fields).ADEIKPGDIPM.fields.hasValue == false) || (lVar5 != 0)) ||
             ((uVar1 & 0xff) == 0)) {
            *(ulong *)&(__this->fields).ADEIKPGDIPM.fields = uVar1;
            (__this->fields).ADEIKPGDIPM.fields.value = lVar5;
          }
        }
        pGVar6 = &__this->fields;
        pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFrom
                           (pGVar6->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0)
        ;
        pGVar6->CKFPENBPNML = pGVar3;
        thunk_FUN_01c20e04(pGVar6,pGVar3);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


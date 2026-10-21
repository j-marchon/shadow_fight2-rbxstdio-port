// HBNENINHPGF$$FMOHGOEPAPH @ RVA 0x31D8A28

void HBNENINHPGF__FMOHGOEPAPH(HBNENINHPGF_o *__this,HBNENINHPGF_o *OAOLCGAIILM,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if (OAOLCGAIILM != (HBNENINHPGF_o *)0x0) {
    (__this->fields)._COIPKAKHDFP_k__BackingField =
         (OAOLCGAIILM->fields)._COIPKAKHDFP_k__BackingField;
    thunk_FUN_01c20e04();
    pSVar1 = OFFIONDOEPM__CNLBHLNMCCI
                       ((OAOLCGAIILM->fields)._PGCEKJLODEJ_k__BackingField,(MethodInfo *)0x0);
    ppSVar2 = &(__this->fields)._PGCEKJLODEJ_k__BackingField;
    *ppSVar2 = pSVar1;
    thunk_FUN_01c20e04(ppSVar2,pSVar1);
    if ((__this->fields).EAJKEHPLGMP != 1) {
      (__this->fields).EAJKEHPLGMP = (OAOLCGAIILM->fields).EAJKEHPLGMP;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


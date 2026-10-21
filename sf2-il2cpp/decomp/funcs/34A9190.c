// NIAFDKHDBMA$$.ctor @ RVA 0x34A9190

void NIAFDKHDBMA___ctor(NIAFDKHDBMA_o *__this,NIAFDKHDBMA_o *GOAHBPBJCKC,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  if ((DAT_04568513 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1);
    DAT_04568513 = 1;
  }
  ppSVar1 = &(__this->fields).MLNFANFAMOO;
  *ppSVar1 = StringLiteral_1;
  thunk_FUN_01c20e04(ppSVar1);
  AJNNHGGLGIF___ctor((AJNNHGGLGIF_o *)__this,(AJNNHGGLGIF_o *)GOAHBPBJCKC,(MethodInfo *)0x0);
  if (GOAHBPBJCKC != (NIAFDKHDBMA_o *)0x0) {
    (__this->fields).MLNFANFAMOO = (GOAHBPBJCKC->fields).MLNFANFAMOO;
    thunk_FUN_01c20e04(ppSVar1);
    (__this->fields).DKOHFAHBPPE = (GOAHBPBJCKC->fields).DKOHFAHBPPE;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


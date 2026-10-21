// FPLOLKHJIAF$$.ctor @ RVA 0x3554C68

void FPLOLKHJIAF___ctor(FPLOLKHJIAF_o *__this,FPLOLKHJIAF_o *GOAHBPBJCKC,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  NIAFDKHDBMA___ctor((NIAFDKHDBMA_o *)__this,(NIAFDKHDBMA_o *)GOAHBPBJCKC,(MethodInfo *)0x0);
  if (GOAHBPBJCKC != (FPLOLKHJIAF_o *)0x0) {
    ppSVar1 = &(__this->fields).GMILEGDKKPL;
                    /* try { // try from 03654c88 to 03754c8f has its CatchHandler @ 03654dbc */
    *ppSVar1 = (GOAHBPBJCKC->fields).GMILEGDKKPL;
    thunk_FUN_01c20e04(ppSVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// OLKKAIFGGAK$$GFAIICJOKFI @ RVA 0x34F5928

void OLKKAIFGGAK__GFAIICJOKFI
               (OLKKAIFGGAK_o *__this,int32_t OKCJJGPJPCB,System_String_o *GHHDLIFJDIG,
               float JOGAFLCGDOG,bool IJGKJEKFKDL,MethodInfo *method)

{
  uint uVar1;
  float fVar2;
  
  if (IJGKJEKFKDL) {
    uVar1 = (__this->fields).OCAFPNJDBEE;
    fVar2 = (__this->fields).DGGDGCEMMGI;
    if (uVar1 == OKCJJGPJPCB) {
      fVar2 = JOGAFLCGDOG - fVar2;
    }
    else {
      fVar2 = (1.0 - fVar2) + JOGAFLCGDOG + (float)(int)(~uVar1 + OKCJJGPJPCB);
    }
    (__this->fields).GOMKBFHJDHC = fVar2;
  }
  (__this->fields).OCAFPNJDBEE = OKCJJGPJPCB;
  (__this->fields).KJOGOGPCLDK = GHHDLIFJDIG;
  thunk_FUN_01c20e04(&(__this->fields).KJOGOGPCLDK,GHHDLIFJDIG);
  (__this->fields).DGGDGCEMMGI = JOGAFLCGDOG;
  return;
}


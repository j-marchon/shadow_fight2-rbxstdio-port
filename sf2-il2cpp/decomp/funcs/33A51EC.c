// BDGLOJJKLFN$$DFBPBPPNIBC @ RVA 0x33A51EC

bool BDGLOJJKLFN__DFBPBPPNIBC(BDGLOJJKLFN_o *__this,JMIFGHKOLCL_o *LDOOMGABFME,MethodInfo *method)

{
  int iVar1;
  char cVar2;
  float fVar3;
  
  if (LDOOMGABFME == (JMIFGHKOLCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar1 = (LDOOMGABFME->fields).ELCBIMMGAFJ;
  if (iVar1 == 5) {
    *(undefined4 *)&(__this->fields).super.field_0x5c = 0;
  }
  else if (iVar1 == 1) {
    cVar2 = *(char *)&(__this->fields).LCNHNMINKHJ;
    fVar3 = *(float *)&(__this->fields).super.field_0x5c + 1.0;
    *(float *)&(__this->fields).super.field_0x5c = fVar3;
    if (((cVar2 == '\0') || ((LDOOMGABFME->fields).HEHDEDAAOJF == false)) &&
       ((__this->fields).GCHDBFJPGFJ <= fVar3)) {
      return true;
    }
  }
  return false;
}


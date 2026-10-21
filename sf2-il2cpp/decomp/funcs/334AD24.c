// APGFNOPIODP$$DFBPBPPNIBC @ RVA 0x334AD24

bool APGFNOPIODP__DFBPBPPNIBC(APGFNOPIODP_o *__this,JMIFGHKOLCL_o *LDOOMGABFME,MethodInfo *method)

{
  bool bVar1;
  float fVar2;
  
  if (LDOOMGABFME != (JMIFGHKOLCL_o *)0x0) {
    if ((LDOOMGABFME->fields).ELCBIMMGAFJ == 6) {
      fVar2 = (LDOOMGABFME->fields).IPPFDLAJFJG * *(float *)&(__this->fields).super.field_0x5c;
      bVar1 = fVar2 != 0.0;
      (__this->fields).NMAKDIDEFPL = fVar2;
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


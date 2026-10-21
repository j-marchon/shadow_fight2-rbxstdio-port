// GMGALNFPLPA$$IDDKDJOELLP @ RVA 0x306CE28

/* WARNING: Removing unreachable block (ram,0x0316ce48) */

void GMGALNFPLPA__IDDKDJOELLP(GMGALNFPLPA_o *__this,float NOOEONBJNJN,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  if (NOOEONBJNJN <= 0.0) {
    if (NOOEONBJNJN < 0.0) {
      fVar1 = (float)(int)(NOOEONBJNJN / -100.0) * -100.0 - NOOEONBJNJN;
      fVar2 = fVar1;
      if (100.0 < fVar1) {
        fVar2 = 100.0;
      }
      NOOEONBJNJN = 100.0 - fVar2;
      if (fVar1 < 0.0) {
        NOOEONBJNJN = 100.0;
      }
    }
  }
  else {
    NOOEONBJNJN = NOOEONBJNJN - (float)(int)(NOOEONBJNJN / 100.0) * 100.0;
    if (NOOEONBJNJN < 0.0) {
      NOOEONBJNJN = 0.0;
    }
  }
  (__this->fields).KMMCDBNINOB = NOOEONBJNJN / 100.0;
  return;
}


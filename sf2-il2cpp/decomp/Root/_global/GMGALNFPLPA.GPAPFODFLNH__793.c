// TypeDefIndex 793
// Namespace: 
// private class GMGALNFPLPA.GPAPFODFLNH
// Fields:
//   public bool BLOGOHKEPHI; // 0x10
//   public float PEOMJHJICCM; // 0x14
//   public float GKBCJOEFFCP; // 0x18

// ===== public void .ctor()  [RVA 0x306C894]
// GMGALNFPLPA.GPAPFODFLNH$$.ctor @ RVA 0x306C894

void GMGALNFPLPA_GPAPFODFLNH___ctor(GMGALNFPLPA_GPAPFODFLNH_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public bool IIICOPBMALH(float CJNHFNHJHPE, ref float HPACPFLKHPK)  [RVA 0x306E3E4]
// GMGALNFPLPA.GPAPFODFLNH$$IIICOPBMALH @ RVA 0x306E3E4

bool GMGALNFPLPA_GPAPFODFLNH__IIICOPBMALH
               (GMGALNFPLPA_GPAPFODFLNH_o *__this,float CJNHFNHJHPE,float *HPACPFLKHPK,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  if ((__this->fields).BLOGOHKEPHI == false) {
    return false;
  }
  fVar2 = (__this->fields).PEOMJHJICCM;
  fVar1 = (__this->fields).GKBCJOEFFCP;
  if (CJNHFNHJHPE <= fVar1) {
    if (fVar2 <= CJNHFNHJHPE) {
      return false;
    }
    fVar2 = fVar1 - fVar2;
  }
  else {
    fVar2 = fVar2 - fVar1;
  }
  *HPACPFLKHPK = fVar2 + CJNHFNHJHPE;
  return true;
}


// Util$$NENBPMGDLAL @ RVA 0x3209C94

bool Util__NENBPMGDLAL(float IDGIPLNJMEF,MethodInfo *method)

{
  bool bVar1;
  float fVar2;
  
  if (IDGIPLNJMEF <= 1e-05) {
    bVar1 = false;
  }
  else if (0.99999 <= IDGIPLNJMEF) {
    bVar1 = true;
  }
  else {
    fVar2 = UnityEngine_Random__Range(0.0,1.0,(MethodInfo *)0x0);
    bVar1 = fVar2 < IDGIPLNJMEF;
  }
  return bVar1;
}


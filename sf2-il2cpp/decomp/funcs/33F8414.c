// CocosAnimation$$Update @ RVA 0x33F8414

void CocosAnimation__Update(CocosAnimation_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  float BLENDMCELBE;
  
  if ((__this->fields)._NOAJIBNJKPE_k__BackingField != false) {
    BLENDMCELBE = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    CocosAnimation__Render(__this,BLENDMCELBE,method_00);
    return;
  }
  return;
}


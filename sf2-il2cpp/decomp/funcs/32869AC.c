// OOMHDDBCBJP$$AAHLCCCONKI @ RVA 0x32869AC

int32_t OOMHDDBCBJP__AAHLCCCONKI(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  ushort uVar1;
  uint uVar2;
  int32_t iVar3;
  uint uVar4;
  
  uVar1 = (__this->fields).KIHDFNGKPGN;
  if ((__this->fields).KANKFCNHDPA == false) {
    (*(__this->klass->vtable)._8_PEOJNPEINED.methodPtr)
              (__this,(__this->klass->vtable)._8_PEOJNPEINED.method);
  }
  uVar2 = (*(__this->klass->vtable)._17_KDENPABEMHA.methodPtr)
                    (__this,1,(__this->klass->vtable)._17_KDENPABEMHA.method);
  uVar4 = (uint)uVar1;
  if (uVar2 == uVar4) {
    iVar3 = 1;
  }
  else {
    uVar2 = (*(__this->klass->vtable)._17_KDENPABEMHA.methodPtr)
                      (__this,3,(__this->klass->vtable)._17_KDENPABEMHA.method);
    iVar3 = 2;
    if (uVar2 == uVar4) {
      iVar3 = 3;
    }
  }
  return iVar3;
}


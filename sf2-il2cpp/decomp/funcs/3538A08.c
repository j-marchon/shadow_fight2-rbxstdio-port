// FightHolder$$Awake @ RVA 0x3538A08

void FightHolder__Awake(FightHolder_o *__this,MethodInfo *method)

{
  if (DAT_04568b3d == '\0') {
    FUN_01bab630(&FightHolder_TypeInfo);
    DAT_04568b3d = '\x01';
  }
  FightHolder_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField = __this;
  thunk_FUN_01c20e04(FightHolder_TypeInfo->static_fields,__this);
  return;
}


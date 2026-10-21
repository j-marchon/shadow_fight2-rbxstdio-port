// FightHolder$$get_Current @ RVA 0x35389A4

FightHolder_o * FightHolder__get_Current(MethodInfo *method)

{
  if ((DAT_04568aae & 1) == 0) {
    FUN_01bab630(&FightHolder_TypeInfo);
    DAT_04568aae = 1;
  }
  return FightHolder_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField;
}


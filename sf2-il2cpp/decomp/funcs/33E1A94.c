// VideoPlayerController$$get_Current @ RVA 0x33E1A94

VideoPlayerController_o * VideoPlayerController__get_Current(MethodInfo *method)

{
  if ((DAT_04567ea7 & 1) == 0) {
    FUN_01bab630(&VideoPlayerController_TypeInfo);
    DAT_04567ea7 = 1;
  }
  return VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField;
}


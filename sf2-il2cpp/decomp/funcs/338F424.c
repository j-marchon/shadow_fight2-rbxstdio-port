// UnityEngine.ResourcesAndBundles$$GCCollectImmediately @ RVA 0x338F424

void UnityEngine_ResourcesAndBundles__GCCollectImmediately(MethodInfo *method)

{
  if ((DAT_04567c0e & 1) == 0) {
    FUN_01bab630(&System_GC_TypeInfo);
    DAT_04567c0e = 1;
  }
  if ((System_GC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  System_GC__Collect((MethodInfo *)0x0);
  System_GC__WaitForPendingFinalizers((MethodInfo *)0x0);
  return;
}


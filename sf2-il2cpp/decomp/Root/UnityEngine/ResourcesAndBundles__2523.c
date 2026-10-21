// TypeDefIndex 2523
// Namespace: UnityEngine
// public class ResourcesAndBundles
// Fields:

// ===== public static void GCCollectImmediately()  [RVA 0x338F424]
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


// ===== public void .ctor()  [RVA 0x338F47C]
// UnityEngine.ResourcesAndBundles$$.ctor @ RVA 0x338F47C

void UnityEngine_ResourcesAndBundles___ctor
               (UnityEngine_ResourcesAndBundles_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


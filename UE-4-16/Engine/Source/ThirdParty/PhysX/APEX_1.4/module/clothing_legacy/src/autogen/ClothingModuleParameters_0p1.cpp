// This code contains NVIDIA Confidential Information and is disclosed to you
// under a form of NVIDIA software license agreement provided separately to you.
//
// Notice
// NVIDIA Corporation and its licensors retain all intellectual property and
// proprietary rights in and to this software and related documentation and
// any modifications thereto. Any use, reproduction, disclosure, or
// distribution of this software and related documentation without an express
// license agreement from NVIDIA Corporation is strictly prohibited.
//
// ALL NVIDIA DESIGN SPECIFICATIONS, CODE ARE PROVIDED "AS IS.". NVIDIA MAKES
// NO WARRANTIES, EXPRESSED, IMPLIED, STATUTORY, OR OTHERWISE WITH RESPECT TO
// THE MATERIALS, AND EXPRESSLY DISCLAIMS ALL IMPLIED WARRANTIES OF NONINFRINGEMENT,
// MERCHANTABILITY, AND FITNESS FOR A PARTICULAR PURPOSE.
//
// Information and code furnished is believed to be accurate and reliable.
// However, NVIDIA Corporation assumes no responsibility for the consequences of use of such
// information or for any infringement of patents or other rights of third parties that may
// result from its use. No license is granted by implication or otherwise under any patent
// or patent rights of NVIDIA Corporation. Details are subject to change without notice.
// This code supersedes and replaces all information previously supplied.
// NVIDIA Corporation products are not authorized for use as critical
// components in life support devices or systems without express written approval of
// NVIDIA Corporation.
//
// Copyright (c) 2008-2015 NVIDIA Corporation. All rights reserved.

// This file was generated by NvParameterized/scripts/GenParameterized.pl


#include "ClothingModuleParameters_0p1.h"
#include <string.h>
#include <stdlib.h>

using namespace NvParameterized;

namespace nvidia
{
namespace parameterized
{

using namespace ClothingModuleParameters_0p1NS;

const char* const ClothingModuleParameters_0p1Factory::vptr =
    NvParameterized::getVptr<ClothingModuleParameters_0p1, ClothingModuleParameters_0p1::ClassAlignment>();

const uint32_t NumParamDefs = 12;
static NvParameterized::DefinitionImpl* ParamDefTable; // now allocated in buildTree [NumParamDefs];


static const size_t ParamLookupChildrenTable[] =
{
	1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,
};

#define TENUM(type) nvidia::##type
#define CHILDREN(index) &ParamLookupChildrenTable[index]
static const NvParameterized::ParamLookupNode ParamLookupTable[NumParamDefs] =
{
	{ TYPE_STRUCT, false, 0, CHILDREN(0), 11 },
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->maxNumCompartments), NULL, 0 }, // maxNumCompartments
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->maxUnusedPhysXResources), NULL, 0 }, // maxUnusedPhysXResources
	{ TYPE_BOOL, false, (size_t)(&((ParametersStruct*)0)->allowAsyncCooking), NULL, 0 }, // allowAsyncCooking
	{ TYPE_BOOL, false, (size_t)(&((ParametersStruct*)0)->asyncFetchResults), NULL, 0 }, // asyncFetchResults
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->avgSimFrequencyWindow), NULL, 0 }, // avgSimFrequencyWindow
	{ TYPE_BOOL, false, (size_t)(&((ParametersStruct*)0)->allowApexWorkBetweenSubsteps), NULL, 0 }, // allowApexWorkBetweenSubsteps
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->interCollisionDistance), NULL, 0 }, // interCollisionDistance
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->interCollisionStiffness), NULL, 0 }, // interCollisionStiffness
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->interCollisionIterations), NULL, 0 }, // interCollisionIterations
	{ TYPE_BOOL, false, (size_t)(&((ParametersStruct*)0)->sparseSelfCollision), NULL, 0 }, // sparseSelfCollision
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->maxTimeRenderProxyInPool), NULL, 0 }, // maxTimeRenderProxyInPool
};


bool ClothingModuleParameters_0p1::mBuiltFlag = false;
NvParameterized::MutexType ClothingModuleParameters_0p1::mBuiltFlagMutex;

ClothingModuleParameters_0p1::ClothingModuleParameters_0p1(NvParameterized::Traits* traits, void* buf, int32_t* refCount) :
	NvParameters(traits, buf, refCount)
{
	//mParameterizedTraits->registerFactory(className(), &ClothingModuleParameters_0p1FactoryInst);

	if (!buf) //Do not init data if it is inplace-deserialized
	{
		initDynamicArrays();
		initStrings();
		initReferences();
		initDefaults();
	}
}

ClothingModuleParameters_0p1::~ClothingModuleParameters_0p1()
{
	freeStrings();
	freeReferences();
	freeDynamicArrays();
}

void ClothingModuleParameters_0p1::destroy()
{
	// We cache these fields here to avoid overwrite in destructor
	bool doDeallocateSelf = mDoDeallocateSelf;
	NvParameterized::Traits* traits = mParameterizedTraits;
	int32_t* refCount = mRefCount;
	void* buf = mBuffer;

	this->~ClothingModuleParameters_0p1();

	NvParameters::destroy(this, traits, doDeallocateSelf, refCount, buf);
}

const NvParameterized::DefinitionImpl* ClothingModuleParameters_0p1::getParameterDefinitionTree(void)
{
	if (!mBuiltFlag) // Double-checked lock
	{
		NvParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);
		if (!mBuiltFlag)
		{
			buildTree();
		}
	}

	return(&ParamDefTable[0]);
}

const NvParameterized::DefinitionImpl* ClothingModuleParameters_0p1::getParameterDefinitionTree(void) const
{
	ClothingModuleParameters_0p1* tmpParam = const_cast<ClothingModuleParameters_0p1*>(this);

	if (!mBuiltFlag) // Double-checked lock
	{
		NvParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);
		if (!mBuiltFlag)
		{
			tmpParam->buildTree();
		}
	}

	return(&ParamDefTable[0]);
}

NvParameterized::ErrorType ClothingModuleParameters_0p1::getParameterHandle(const char* long_name, Handle& handle) const
{
	ErrorType Ret = NvParameters::getParameterHandle(long_name, handle);
	if (Ret != ERROR_NONE)
	{
		return(Ret);
	}

	size_t offset;
	void* ptr;

	getVarPtr(handle, ptr, offset);

	if (ptr == NULL)
	{
		return(ERROR_INDEX_OUT_OF_RANGE);
	}

	return(ERROR_NONE);
}

NvParameterized::ErrorType ClothingModuleParameters_0p1::getParameterHandle(const char* long_name, Handle& handle)
{
	ErrorType Ret = NvParameters::getParameterHandle(long_name, handle);
	if (Ret != ERROR_NONE)
	{
		return(Ret);
	}

	size_t offset;
	void* ptr;

	getVarPtr(handle, ptr, offset);

	if (ptr == NULL)
	{
		return(ERROR_INDEX_OUT_OF_RANGE);
	}

	return(ERROR_NONE);
}

void ClothingModuleParameters_0p1::getVarPtr(const Handle& handle, void*& ptr, size_t& offset) const
{
	ptr = getVarPtrHelper(&ParamLookupTable[0], const_cast<ClothingModuleParameters_0p1::ParametersStruct*>(&parameters()), handle, offset);
}


/* Dynamic Handle Indices */

void ClothingModuleParameters_0p1::freeParameterDefinitionTable(NvParameterized::Traits* traits)
{
	if (!traits)
	{
		return;
	}

	if (!mBuiltFlag) // Double-checked lock
	{
		return;
	}

	NvParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);

	if (!mBuiltFlag)
	{
		return;
	}

	for (uint32_t i = 0; i < NumParamDefs; ++i)
	{
		ParamDefTable[i].~DefinitionImpl();
	}

	traits->free(ParamDefTable);

	mBuiltFlag = false;
}

#define PDEF_PTR(index) (&ParamDefTable[index])

void ClothingModuleParameters_0p1::buildTree(void)
{

	uint32_t allocSize = sizeof(NvParameterized::DefinitionImpl) * NumParamDefs;
	ParamDefTable = (NvParameterized::DefinitionImpl*)(mParameterizedTraits->alloc(allocSize));
	memset(ParamDefTable, 0, allocSize);

	for (uint32_t i = 0; i < NumParamDefs; ++i)
	{
		NV_PARAM_PLACEMENT_NEW(ParamDefTable + i, NvParameterized::DefinitionImpl)(*mParameterizedTraits);
	}

	// Initialize DefinitionImpl node: nodeIndex=0, longName=""
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[0];
		ParamDef->init("", TYPE_STRUCT, "STRUCT", true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "This class is used for initializing the NxModuleClothing.", true);
		ParamDefTable[0].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=1, longName="maxNumCompartments"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[1];
		ParamDef->init("maxNumCompartments", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("defaultValueConsoles", uint64_t(0), true);
		HintTable[1].init("defaultValueWindows", uint64_t(4), true);
		ParamDefTable[1].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[4];
		static Hint* HintPtrTable[4] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], };
		HintTable[0].init("defaultValueConsoles", uint64_t(0), true);
		HintTable[1].init("defaultValueWindows", uint64_t(4), true);
		HintTable[2].init("longDescription", "To parallelize work hw cloth, sw cloth, hw softbodies and sw softbodies are distributed into different compartments. For each type maximally maxNumCompartments compartments are created in a scene.", true);
		HintTable[3].init("shortDescription", "Maximum number of compartments to distribute the cloths and softbodies of the same type. Works only with PhysX 2.8.4", true);
		ParamDefTable[1].setHints((const NvParameterized::Hint**)HintPtrTable, 4);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=2, longName="maxUnusedPhysXResources"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[2];
		ParamDef->init("maxUnusedPhysXResources", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Not used instances are generated when NxClothingActors are released or their benefit is not high enough to allow simulation. Then they will return the NxCloth/NxSoftBody and the list of NxActors to their asset where it will be cached until another NxClothingActor needs them.", true);
		HintTable[1].init("shortDescription", "Maximum number of NxCloth/NxSoftBody instances that are not used.", true);
		ParamDefTable[2].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=3, longName="allowAsyncCooking"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[3];
		ParamDef->init("allowAsyncCooking", TYPE_BOOL, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "This can be turned off if unexpected bugs/crashes occur.", true);
		HintTable[1].init("shortDescription", "ClothingActors will cook in a background thread to speed up creation time.", true);
		ParamDefTable[3].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=4, longName="asyncFetchResults"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[4];
		ParamDef->init("asyncFetchResults", TYPE_BOOL, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Note that ApexPostTickTime from the scene stats will not be correct if true. Caution: Do not set this to false when simulate and/or fetchResults is called from a PxTask. fetchResults can block and wait for other tasks in this case, which can cause a deadlock if the dispatcher is using only 1 workerthread.", true);
		HintTable[1].init("shortDescription", "Let fetch results tasks run longer than the fetchResults call, they will block at the next updateRenderResource call.", true);
		ParamDefTable[4].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=5, longName="avgSimFrequencyWindow"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[5];
		ParamDef->init("avgSimFrequencyWindow", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Average Simulation Frequency is estimated with the last n frames", true);
		ParamDefTable[5].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=6, longName="allowApexWorkBetweenSubsteps"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[6];
		ParamDef->init("allowApexWorkBetweenSubsteps", TYPE_BOOL, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "The clothing module can interpolate matrices between substeps. However, for this APEX needs to call simulate/fetchResults several times per frame. This causes problems if physX particles are handled by the application in the same scene. The application needs to be able to read particle buffers with deletion IDs after each fetchResults, which is not possible in that case. Use allowApexWorkBetweenSubsteps to enable matrix interpolation between substeps.", true);
		HintTable[1].init("shortDescription", "Allow APEX SDK to interpolate clothing matrices between the substeps.", true);
		ParamDefTable[6].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=7, longName="interCollisionDistance"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[7];
		ParamDef->init("interCollisionDistance", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Experimental. Set the radius to 0.0 to disable inter-collision.", true);
		HintTable[1].init("shortDescription", "Experimental. Radius of the collision between different clothing actors. (3.x solver mode)", true);
		ParamDefTable[7].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=8, longName="interCollisionStiffness"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[8];
		ParamDef->init("interCollisionStiffness", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Experimental. Stiffness of the collision between different clothing actors. (3.x solver mode)", true);
		ParamDefTable[8].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=9, longName="interCollisionIterations"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[9];
		ParamDef->init("interCollisionIterations", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Experimental. Number of Iterations for the collision between different clothing actors. (3.x solver mode)", true);
		ParamDefTable[9].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=10, longName="sparseSelfCollision"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[10];
		ParamDef->init("sparseSelfCollision", TYPE_BOOL, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Experimental. The particle subset is part of the cooked data and depends on the assets selfCollision radius.", true);
		HintTable[1].init("shortDescription", "Experimental. Only use a subset of particles for self-collision. (3.x solver mode)", true);
		ParamDefTable[10].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=11, longName="maxTimeRenderProxyInPool"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[11];
		ParamDef->init("maxTimeRenderProxyInPool", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Maximum number of frames a RenderProxy object can stay the object pool before the memory is released", true);
		ParamDefTable[11].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// SetChildren for: nodeIndex=0, longName=""
	{
		static Definition* Children[11];
		Children[0] = PDEF_PTR(1);
		Children[1] = PDEF_PTR(2);
		Children[2] = PDEF_PTR(3);
		Children[3] = PDEF_PTR(4);
		Children[4] = PDEF_PTR(5);
		Children[5] = PDEF_PTR(6);
		Children[6] = PDEF_PTR(7);
		Children[7] = PDEF_PTR(8);
		Children[8] = PDEF_PTR(9);
		Children[9] = PDEF_PTR(10);
		Children[10] = PDEF_PTR(11);

		ParamDefTable[0].setChildren(Children, 11);
	}

	mBuiltFlag = true;

}
void ClothingModuleParameters_0p1::initStrings(void)
{
}

void ClothingModuleParameters_0p1::initDynamicArrays(void)
{
}

void ClothingModuleParameters_0p1::initDefaults(void)
{

	freeStrings();
	freeReferences();
	freeDynamicArrays();
	maxNumCompartments = uint32_t(4);
	maxUnusedPhysXResources = uint32_t(5);
	allowAsyncCooking = bool(true);
	asyncFetchResults = bool(true);
	avgSimFrequencyWindow = uint32_t(60);
	allowApexWorkBetweenSubsteps = bool(false);
	interCollisionDistance = float(0.0);
	interCollisionStiffness = float(1.0);
	interCollisionIterations = uint32_t(1);
	sparseSelfCollision = bool(false);
	maxTimeRenderProxyInPool = uint32_t(100);

	initDynamicArrays();
	initStrings();
	initReferences();
}

void ClothingModuleParameters_0p1::initReferences(void)
{
}

void ClothingModuleParameters_0p1::freeDynamicArrays(void)
{
}

void ClothingModuleParameters_0p1::freeStrings(void)
{
}

void ClothingModuleParameters_0p1::freeReferences(void)
{
}

} // namespace parameterized
} // namespace nvidia
